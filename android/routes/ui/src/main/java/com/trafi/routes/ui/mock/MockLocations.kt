package com.trafi.routes.ui.mock

import androidx.compose.runtime.Stable
import com.trafi.core.android.model.LatLng
import com.trafi.core.android.model.Location

@Stable
internal val vilniusCathedral = Location(
    coordinate = LatLng(54.685563, 25.287704),
    name = "Vilnius Cathedral",
    address = "Šventaragio g., Vilnius 01143"
)

@Stable
internal val vilniusAkropolis = Location(
    coordinate = LatLng(54.710258, 25.262192),
    name = "AKROPOLIS Vilnius",
    address = "Ozo g. 25, Vilnius 08217"
)

@Stable
internal val vilniusStation = Location(
    coordinate = LatLng(54.670395, 25.284233),
    name = "Vilnius Station",
    address = "Geležinkelio g. 16, Vilnius 02100"
)

@Stable
internal val vilniusAirport = Location(
    coordinate = LatLng(54.643026, 25.279444),
    name = "Vilnius International Airport",
    address = "Rodūnios kl. 2, Vilnius 02189"
)

@Stable
internal val vilniusHallMarket = Location(
    coordinate = LatLng(54.673959, 25.285805),
    name = "Vilnius Hall Market",
    address = "Pylimo g. 58, Vilnius 01136"
)

internal val mockLocations: List<Location> =
    listOf(
        vilniusCathedral,
        vilniusAkropolis,
        vilniusStation,
        vilniusAirport,
        vilniusHallMarket,
    )
