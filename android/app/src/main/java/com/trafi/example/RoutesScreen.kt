package com.trafi.example

import androidx.compose.foundation.Text
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.ConstraintLayout
import androidx.compose.foundation.layout.Dimension
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumnFor
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.Divider
import androidx.compose.material.FloatingActionButton
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.Surface
import androidx.compose.material.TextButton
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material.icons.filled.Place
import androidx.compose.material.icons.outlined.LocationOn
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.SoftwareKeyboardController
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.viewModel
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import androidx.ui.tooling.preview.Preview
import com.trafi.core.ApiResult
import com.trafi.core.android.model.AutoCompleteLocation
import com.trafi.core.android.model.LatLng
import com.trafi.core.android.model.Location
import com.trafi.core.android.model.RoutesResult
import com.trafi.example.ui.DemoMaasTheme
import com.trafi.locations.android.LocationsApi
import com.trafi.routes.android.RoutesApi
import com.trafi.routes.ui.R
import com.trafi.routes.ui.RoutesResult
import com.trafi.ui.OutlinedTextField
import com.trafi.ui.theme.Grey500
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch

@Composable
fun RoutesScreen(onBackClick: () -> Unit) {
    val viewModel: RoutesViewModel = viewModel()
    val locationViewModel: LocationSearchViewModel = viewModel()
    var searchingForStart by remember { mutableStateOf(false) }
    var searchingForEnd by remember { mutableStateOf(false) }

    var startText by remember { mutableStateOf(viewModel.start.displayText) }
    var endText by remember { mutableStateOf(viewModel.end.displayText) }

    var softwareKeyboardController by remember { mutableStateOf<SoftwareKeyboardController?>(null) }

    Column(
        modifier = Modifier
            .background(MaasTheme.colors.background)
            .fillMaxHeight()
    ) {
        RouteSearchHeader(
            originText = startText,
            destinationText = endText,
            onOriginTextChange = {
                searchingForEnd = false
                endText = viewModel.end.displayText

                startText = it
                searchingForStart = true
                locationViewModel.search(it)
            },
            onDestinationTextChange = {
                searchingForStart = false
                startText = viewModel.start.displayText

                endText = it
                searchingForEnd = true
                locationViewModel.search(it)
            },
            onTextInputStarted = { keyboardController ->
                softwareKeyboardController = keyboardController
            },
            onSwitchClick = {
                searchingForEnd = false
                searchingForStart = false
                val prevStart = viewModel.start
                viewModel.start = viewModel.end
                viewModel.end = prevStart

                startText = viewModel.start.displayText
                endText = viewModel.end.displayText
                viewModel.search()
            },
            onBackClick = onBackClick,
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = MaasTheme.spacing.globalMargin)
        )

        if (searchingForStart || searchingForEnd) {
            LocationSearchBody(
                state = locationViewModel.state,
                modifier = Modifier
                    .padding(top = Spacing.md),
                onClick = { location ->
                    softwareKeyboardController?.hideSoftwareKeyboard()
                    locationViewModel.resolveLocation(location)
                }
            )
            locationViewModel.resolvedLocation?.let { location ->
                when {
                    searchingForStart -> {
                        viewModel.start = location
                        startText = location.displayText
                        viewModel.search()
                        searchingForStart = false
                    }
                    searchingForEnd -> {
                        viewModel.end = location
                        endText = location.displayText
                        viewModel.search()
                        searchingForEnd = false
                    }
                }
            }
        } else {
            RouteSearchBody(
                state = viewModel.routesResultState,
                modifier = Modifier.padding(top = Spacing.md)
            )
        }
    }
}

@Composable
private fun ColumnScope.RouteSearchBody(
    state: RoutesResultState,
    modifier: Modifier = Modifier,
) {
    when (state) {
        RoutesResultState.NoResults -> {
            Text(
                "No results",
                modifier = modifier.align(Alignment.CenterHorizontally),
                style = MaasTheme.typography.textL
            )
        }
        RoutesResultState.Loading -> {
            CircularProgressIndicator(
                modifier = modifier.align(Alignment.CenterHorizontally)
            )
        }
        is RoutesResultState.Loaded -> RoutesResult(state.result, modifier)
    }
}

@Composable
private fun ColumnScope.LocationSearchBody(
    state: LocationSearchResultState,
    onClick: (AutoCompleteLocation) -> Unit,
    modifier: Modifier = Modifier,
) {
    when (state) {
        LocationSearchResultState.NoResults -> {
            Text(
                "No locations found",
                modifier = modifier
                    .align(Alignment.CenterHorizontally),
                style = MaasTheme.typography.textL
            )
        }
        LocationSearchResultState.Loading -> {
            CircularProgressIndicator(
                modifier = modifier
                    .align(Alignment.CenterHorizontally)
            )
        }
        is LocationSearchResultState.Loaded -> LazyColumnFor(
            modifier = modifier,
            items = state.result
        ) { location ->
            LocationResult(
                location,
                onClick = { onClick(location) },
                modifier = Modifier.fillParentMaxWidth()
            )
            if (state.result.indexOf(location) != state.result.lastIndex) {
                Divider(
                    modifier = Modifier
                        .padding(horizontal = MaasTheme.spacing.globalMargin)
                )
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
private fun LocationResultPreview() {
    DemoMaasTheme {
        LocationResult(location = vilniusCathedral, onClick = {})
    }
}

@Composable
private fun LocationResult(
    location: Location,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) = LocationResult(location.name ?: location.coordinate.toString(), null, onClick, modifier)

@Composable
private fun LocationResult(
    location: AutoCompleteLocation,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) = LocationResult(location.name, location.address, onClick, modifier)

@Composable
private fun LocationResult(
    name: String,
    address: String?,
    onClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    Surface(modifier = modifier.clickable(onClick = onClick)) {
        Row(
            verticalAlignment = Alignment.CenterVertically,
            modifier = Modifier
                .defaultMinSizeConstraints(minHeight = 60.dp)
                .padding(horizontal = MaasTheme.spacing.globalMargin, vertical = 12.dp)
        ) {
            Icon(Icons.Outlined.LocationOn, modifier = Modifier.size(24.dp))
            Column(modifier = Modifier.padding(start = 12.dp)) {
                Text(
                    name,
                    style = MaasTheme.typography.textL.copy(fontWeight = FontWeight.SemiBold),
                )
                address?.let {
                    Text(
                        it,
                        style = MaasTheme.typography.textM.copy(color = Grey500),
                    )
                }
            }
        }
    }
}

private val Location.displayText: String
    get() = name
        ?: address
        ?: coordinate.run { "$lat,$lng" }

@Preview(showBackground = true)
@Composable
private fun RouteSearchHeaderPreview() {
    DemoMaasTheme {
        RouteSearchHeader(
            originText = vilniusAirport.displayText,
            destinationText = vilniusCathedral.displayText,
            onOriginTextChange = {},
            onDestinationTextChange = {},
            onTextInputStarted = {},
            onSwitchClick = {},
            onBackClick = {},
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = MaasTheme.spacing.globalMargin)
        )
    }
}

@Composable
private fun RouteSearchHeader(
    originText: String,
    destinationText: String,
    onOriginTextChange: (String) -> Unit,
    onDestinationTextChange: (String) -> Unit,
    onTextInputStarted: (SoftwareKeyboardController) -> Unit,
    onSwitchClick: () -> Unit,
    onBackClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    val timeVector = vectorResource(R.drawable.ic_route_search_trip_time_s)
    val switchVector = vectorResource(R.drawable.ic_route_search_switch_20)

    ConstraintLayout(modifier) {
        val (back, title, origin, destination, switch) = createRefs()
        val (originIcon, destinationIcon) = createRefs()
        val departureTime = createRef()

        Text(
            "Where to?",
            style = MaasTheme.typography.headingM,
            modifier = Modifier
                .padding(vertical = 16.dp)
                .constrainAs(title) {
                    centerHorizontallyTo(parent)
                }
        )

        IconButton(
            onClick = onBackClick,
            modifier = Modifier.size(32.dp).constrainAs(back) {
                centerHorizontallyTo(destinationIcon)
                centerVerticallyTo(title)
            }) {
            Icon(Icons.Filled.ArrowBack)
        }

        Box(
            modifier = Modifier
                .background(Color.Black, CircleShape)
                .size(8.dp)
                .constrainAs(originIcon) {
                start.linkTo(parent.start)
                end.linkTo(origin.start)
                centerVerticallyTo(origin)
            })
        Icon(
            Icons.Filled.Place,
            tint = MaasTheme.colors.primary,
            modifier = Modifier
                .size(width = 32.dp, height = 16.dp)
                .constrainAs(destinationIcon) {
                    start.linkTo(parent.start)
                    end.linkTo(destination.start)
                    centerVerticallyTo(destination)
                })

        val barrier = createEndBarrier(originIcon, destinationIcon)

        OutlinedTextField(
            originText,
            modifier = Modifier.constrainAs(origin) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(title.bottom)
            },
            onValueChange = onOriginTextChange,
            onTextInputStarted = onTextInputStarted,
            textStyle = MaasTheme.typography.textL,
        )
        OutlinedTextField(
            destinationText,
            modifier = Modifier.constrainAs(destination) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(origin.bottom, margin = Spacing.xs)
            },
            onValueChange = onDestinationTextChange,
            onTextInputStarted = onTextInputStarted,
            textStyle = MaasTheme.typography.textL,
        )
        FloatingActionButton(
            backgroundColor = MaasTheme.colors.background,
            contentColor = MaasTheme.colors.onBackground,
            onClick = onSwitchClick,
            modifier = Modifier
                .size(40.dp)
                .constrainAs(switch) {
                    top.linkTo(origin.bottom)
                    bottom.linkTo(destination.top)
                    end.linkTo(parent.end, margin = Spacing.sm)
                }
        ) {
            Icon(switchVector)
        }
        TextButton(
            onClick = {},
            modifier = Modifier.constrainAs(departureTime) {
                top.linkTo(destination.bottom, margin = Spacing.sm)
                start.linkTo(parent.start)
            }) {
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(timeVector, modifier = Modifier.padding(end = Spacing.xs))
                Text("Leave now", style = MaasTheme.typography.textM)
            }
        }
    }
}

sealed class RoutesResultState {
    object NoResults : RoutesResultState()
    object Loading : RoutesResultState()
    data class Loaded(val result: RoutesResult) : RoutesResultState()
}

class RoutesViewModel : ViewModel() {

    private val routesApi = RoutesApi(
        baseUrl = BuildConfig.API_BASE_URL,
        apiKey = BuildConfig.API_KEY
    )

    var start: Location by mutableStateOf(vilniusCathedral)
    var end: Location by mutableStateOf(vilniusAkropolis)

    var routesResultState: RoutesResultState by mutableStateOf(RoutesResultState.NoResults)
        private set

    fun search() {
        routesResultState = RoutesResultState.Loading
        viewModelScope.launch {
            val result = routesApi.search(start, end)
            routesResultState = when (result) {
                is ApiResult.Success -> RoutesResultState.Loaded(result.value)
                is ApiResult.Failure -> RoutesResultState.NoResults
            }
        }
    }
}

sealed class LocationSearchResultState {
    object NoResults : LocationSearchResultState()
    object Loading : LocationSearchResultState()
    data class Loaded(val result: List<AutoCompleteLocation>) : LocationSearchResultState()
}

class LocationSearchViewModel : ViewModel() {

    private val locationsApi = LocationsApi(
        baseUrl = BuildConfig.API_BASE_URL,
        apiKey = BuildConfig.API_KEY,
        regionId = "vilnius"
    )

    private var job: Job? = null
    var state: LocationSearchResultState by mutableStateOf(LocationSearchResultState.NoResults)
        private set
    var resolvedLocation: Location? by mutableStateOf(null)
        private set

    fun search(query: String) {
        job?.cancel()
        state = LocationSearchResultState.Loading
        job = viewModelScope.launch {
            val result = locationsApi.search(query)
            state = when (result) {
                is ApiResult.Success -> {
                    val results = result.value
                    if (results.isNotEmpty()) {
                        LocationSearchResultState.Loaded(results)
                    } else {
                        LocationSearchResultState.NoResults
                    }
                }
                is ApiResult.Failure -> LocationSearchResultState.NoResults
            }
        }
    }

    fun resolveLocation(location: AutoCompleteLocation) {
        job?.cancel()
        state = LocationSearchResultState.Loading
        job = viewModelScope.launch {
            resolvedLocation = (locationsApi.resolveLocation(location) as? ApiResult.Success)?.value
        }
    }
}

@Stable
private val vilniusCathedral = Location(
    coordinate = LatLng(54.685563, 25.287704),
    name = "Vilnius Cathedral",
    address = "Šventaragio g., Vilnius 01143"
)

@Stable
private val vilniusAkropolis = Location(
    coordinate = LatLng(54.710258, 25.262192),
    name = "AKROPOLIS Vilnius",
    address = "Ozo g. 25, Vilnius 08217"
)

@Stable
private val vilniusStation = Location(
    coordinate = LatLng(54.670395, 25.284233),
    name = "Vilnius Station",
    address = "Geležinkelio g. 16, Vilnius 02100"
)

@Stable
private val vilniusAirport = Location(
    coordinate = LatLng(54.643026, 25.279444),
    name = "Vilnius International Airport",
    address = "Rodūnios kl. 2, Vilnius 02189"
)

@Stable
private val vilniusHallMarket = Location(
    coordinate = LatLng(54.673959, 25.285805),
    name = "Vilnius Hall Market",
    address = "Pylimo g. 58, Vilnius 01136"
)

private val locations: List<Location> =
    listOf(
        vilniusCathedral,
        vilniusAkropolis,
        vilniusStation,
        vilniusAirport,
        vilniusHallMarket,
    )
