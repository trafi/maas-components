package com.trafi.example

import androidx.compose.foundation.Icon
import androidx.compose.foundation.Text
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope.align
import androidx.compose.foundation.layout.ConstraintLayout
import androidx.compose.foundation.layout.Dimension
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.lazy.LazyColumnFor
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.Divider
import androidx.compose.material.FloatingActionButton
import androidx.compose.material.IconButton
import androidx.compose.material.Surface
import androidx.compose.material.TextButton
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material.icons.filled.CheckCircle
import androidx.compose.material.icons.filled.Place
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.SoftwareKeyboardController
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.viewinterop.viewModel
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import androidx.ui.tooling.preview.Preview
import com.trafi.core.ApiResult
import com.trafi.core.android.model.LatLng
import com.trafi.core.android.model.Location
import com.trafi.core.android.model.RoutesResult
import com.trafi.example.ui.DemoMaasTheme
import com.trafi.routes.RoutesApi
import com.trafi.routes.ui.Cell
import com.trafi.routes.ui.R
import com.trafi.routes.ui.RoutesResult
import com.trafi.ui.OutlinedTextField
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing
import kotlinx.coroutines.Job
import kotlinx.coroutines.delay
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
            )
        } else {
            RouteSearchBody(
                state = viewModel.routesResultState,
            )
        }
    }
}

@Composable
private fun RouteSearchBody(
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
private fun LocationSearchBody(
    state: LocationSearchResultState,
    onClick: (Location) -> Unit,
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
            LocationResult(location, onClick = { onClick(location) })
            if (state.result.indexOf(location) != state.result.lastIndex) {
                Divider(
                    modifier = Modifier
                        .padding(horizontal = MaasTheme.spacing.globalMargin)
                )
            }
        }
    }
}

@Composable
private fun LocationResult(location: Location, onClick: () -> Unit, modifier: Modifier = Modifier) {
    Surface(modifier = modifier.clickable(onClick = onClick)) {
        Cell(
            modifier = Modifier
                .defaultMinSizeConstraints(minHeight = 48.dp)
                .padding(horizontal = MaasTheme.spacing.globalMargin, vertical = 12.dp),
            body = {
                location.name?.let {
                    Text(
                        it,
                        style = MaasTheme.typography.textL.copy(fontWeight = FontWeight.SemiBold),
                    )
                }
                location.address?.let {
                    Text(
                        it,
                        style = MaasTheme.typography.textM,
                    )
                }
            }
        )
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

        Icon(
            Icons.Filled.CheckCircle,
            modifier = Modifier.size(8.dp).constrainAs(originIcon) {
                centerHorizontallyTo(destinationIcon)
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
    data class Loaded(val result: List<Location>) : LocationSearchResultState()
}

class LocationSearchViewModel : ViewModel() {

    private var job: Job? = null
    var state: LocationSearchResultState
            by mutableStateOf(LocationSearchResultState.NoResults)

    fun search(query: String) {
        job?.cancel()
        state = LocationSearchResultState.Loading
        job = viewModelScope.launch {
            delay(2000)
            val results = locations.filter { location ->
                listOfNotNull(
                    location.name,
                    location.address
                ).any { it.contains(query, ignoreCase = true) }
            }
            state = if (results.isNotEmpty()) {
                LocationSearchResultState.Loaded(results)
            } else {
                LocationSearchResultState.NoResults
            }
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

private val locations: List<Location> =
    listOf(
        vilniusCathedral,
        vilniusAkropolis,
        vilniusStation,
        vilniusAirport,
    )
