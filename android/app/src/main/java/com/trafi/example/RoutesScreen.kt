package com.trafi.example

import androidx.compose.foundation.Icon
import androidx.compose.foundation.Text
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.ColumnScope.align
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumnFor
import androidx.compose.material.CircularProgressIndicator
import androidx.compose.material.Divider
import androidx.compose.material.IconButton
import androidx.compose.material.Scaffold
import androidx.compose.material.Surface
import androidx.compose.material.TextField
import androidx.compose.material.TopAppBar
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.Favorite
import androidx.compose.material.icons.filled.Place
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
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
import com.trafi.routes.ui.RoutesResult
import com.trafi.ui.Button
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing
import kotlinx.coroutines.Job
import kotlinx.coroutines.delay
import kotlinx.coroutines.launch

@Composable
fun RoutesScreen() {
    val viewModel: RoutesViewModel = viewModel()
    val locationViewModel: LocationSearchViewModel = viewModel()
    var searchingForStart by mutableStateOf(false)
    var searchingForEnd by mutableStateOf(false)

    var startText by mutableStateOf(viewModel.start.displayText)
    var endText by mutableStateOf(viewModel.end.displayText)

    Scaffold(
        topBar = {
            TopAppBar(
                title = {
                    Text(
                        text = "maas-components-android",
                        style = MaasTheme.typography.headingM.copy(fontSize = 20.sp)
                    )
                },
                actions = {
                    IconButton(onClick = {}) {
                        Icon(Icons.Filled.Favorite)
                    }
                }
            )
        }) { innerPadding ->
        RoutesScreenBodyLayout(
            startText = startText,
            endText = endText,
            onStartChange = {
                searchingForEnd = false
                endText = viewModel.end.displayText

                startText = it
                searchingForStart = true
                locationViewModel.search(it)
            },
            onEndChange = {
                searchingForStart = false
                startText = viewModel.start.displayText

                endText = it
                searchingForEnd = true
                locationViewModel.search(it)
            },
            body = {
                if (searchingForStart || searchingForEnd) {
                    LocationSearchBody(
                        state = locationViewModel.state,
                        onClick = { location ->
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
                        onSearchClick = { viewModel.search() }
                    )
                }
            },
            modifier = Modifier.padding(innerPadding),
        )
    }
}

@Composable
private fun RouteSearchBody(
    state: RoutesResultState,
    onSearchClick: () -> Unit,
) {
    Button(
        text = "Search",
        modifier = Modifier.padding(
            horizontal = MaasTheme.spacing.globalMargin,
            vertical = 16.dp
        ),
        enabled = state !is RoutesResultState.Loading,
        onClick = { onSearchClick() },
    )
    when (state) {
        RoutesResultState.NoResults -> {
            Text(
                "No results",
                modifier = Modifier.align(Alignment.CenterHorizontally),
                style = MaasTheme.typography.textL
            )
        }
        RoutesResultState.Loading -> {
            CircularProgressIndicator(
                modifier = Modifier.align(Alignment.CenterHorizontally)
            )
        }
        is RoutesResultState.Loaded -> RoutesResult(state.result)
    }
}

@Composable
private fun LocationSearchBody(
    state: LocationSearchResultState,
    onClick: (Location) -> Unit
) {
    when (state) {
        LocationSearchResultState.NoResults -> {
            Text(
                "No locations found",
                modifier = Modifier
                    .align(Alignment.CenterHorizontally)
                    .padding(top = Spacing.md),
                style = MaasTheme.typography.textL
            )
        }
        LocationSearchResultState.Loading -> {
            CircularProgressIndicator(
                modifier = Modifier
                    .align(Alignment.CenterHorizontally)
                    .padding(top = Spacing.md)
            )
        }
        is LocationSearchResultState.Loaded -> LazyColumnFor(
            modifier = Modifier.padding(top = Spacing.md),
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

@Composable
private fun RoutesScreenBodyLayout(
    startText: String,
    endText: String,
    onStartChange: (String) -> Unit,
    onEndChange: (String) -> Unit,
    body: @Composable ColumnScope.() -> Unit,
    modifier: Modifier = Modifier,
) {
    Column(modifier) {
        Waypoint(
            startText,
            onValueChange = onStartChange,
            modifier = Modifier.padding(
                horizontal = MaasTheme.spacing.globalMargin,
                vertical = 16.dp
            )
        )
        Waypoint(
            endText,
            onValueChange = onEndChange,
            modifier = Modifier
                .padding(horizontal = MaasTheme.spacing.globalMargin)
                // .padding(top = if (start == null) 16.dp else 0.dp)
        )
        body()
    }
}

@Preview(showBackground = true)
@Composable
private fun DefaultPreview() {
    DemoMaasTheme {
        RoutesScreenBodyLayout(
            startText = vilniusCathedral.displayText,
            endText = vilniusAkropolis.displayText,
            onStartChange = {},
            onEndChange = {},
            body = {
                RouteSearchBody(
                    state = RoutesResultState.NoResults,
                    onSearchClick = {}
                )
            }
        )
    }
}

@Composable
fun Waypoint(text: String, onValueChange: (String) -> Unit, modifier: Modifier = Modifier) {
    Row(modifier) {
        Icon(
            Icons.Filled.Place,
            modifier = Modifier
                .padding(end = 16.dp)
                .align(Alignment.CenterVertically)
        )
        TextField(
            text,
            modifier = Modifier.weight(1f),
            onValueChange = onValueChange,
            textStyle = MaasTheme.typography.textL,
        )
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
