package com.trafi.core.model.mock

import com.trafi.core.model.FilterItem

public val mockFilters: List<FilterItem> = listOf(
    FilterItem(
        id = "ubahns",
        name = "U-Bahn",
        icon = "ubahn",
        color = "115D91",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_ubahn")
    ),
    FilterItem(
        id = "sbahns",
        name = "S-Bahn",
        icon = "sbahn",
        color = "45935D",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_sbahn")
    ),
    FilterItem(
        id = "tram",
        name = "Trams",
        icon = "tram",
        color = "BE1414",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_berlintram", "debe_potsdamtram", "debe_suburbtram")
    ),
    FilterItem(
        id = "buses",
        name = "Buses",
        icon = "bus",
        color = "95276E",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_regiobus", "debe_bvgbus")
    ),
    FilterItem(
        id = "trains",
        name = "Trains",
        icon = "train",
        color = "BE1414",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_trainz")
    ),
    FilterItem(
        id = "ferrys",
        name = "Ferries",
        icon = "ferry",
        color = "528DBA",
        accentColor = "FFFFFF",
        transportsIds = listOf("debe_ferry")
    ),
)
