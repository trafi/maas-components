package com.example.transit.ui

import com.trafi.core.model.FilterItem

fun listOfFilters(): List<FilterItem> {
    return listOf(
        FilterItem(
            accentColor = "FFFFFF",
            color = "115D91",
            icon = "ubahn",
            id = "ubahns",
            name = "U-Bahn",
            transportsIds = listOf("debe_ubahn")
        ),
        FilterItem(
            accentColor = "FFFFFF",
            color = "45935D",
            icon = "sbahn",
            id = "sbahns",
            name = "S-Bahn",
            transportsIds = listOf("debe_sbahn")
        ),
        FilterItem(
            accentColor = "FFFFFF",
            color = "BE1414",
            icon = "tram",
            id = "tram",
            name = "Trams",
            transportsIds = listOf("debe_berlintram", "debe_potsdamtram", "debe_suburbtram")
        ),
        FilterItem(
            accentColor = "FFFFFF",
            color = "95276E",
            icon = "bus",
            id = "buses",
            name = "Buses",
            transportsIds = listOf("debe_regiobus", "debe_bvgbus")
        ),
        FilterItem(
            accentColor = "FFFFFF",
            color = "BE1414",
            icon = "train",
            id = "trains",
            name = "Trains",
            transportsIds = listOf("debe_trainz")
        ),
        FilterItem(
            accentColor = "FFFFFF",
            color = "528DBA",
            icon = "ferry",
            id = "ferrys",
            name = "Ferries",
            transportsIds = listOf("debe_ferry")
        ),
    )
}
