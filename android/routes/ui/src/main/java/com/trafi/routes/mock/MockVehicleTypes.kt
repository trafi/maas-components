package com.trafi.routes.mock

import androidx.compose.runtime.Stable
import com.trafi.ui.TabItem

@Stable
internal val group1 = TabItem(
    id = "1",
    icon = "",
    duration = "13min",
    price = "$15",
    active = true,
)

@Stable
internal val group2 = TabItem(
    id = "2",
    icon = "",
    duration = "35min",
    price = "$1.6",
    active = false,
)

@Stable
internal val group3 = TabItem(
    id = "3",
    icon = "",
    duration = "2h",
    price = "$0.5",
    active = false,
)

@Stable
internal val group4 = TabItem(
    id = "4",
    icon = "",
    duration = "1h",
    price = "$3.15",
    active = false,
)

@Stable
internal val group5 = TabItem(
    id = "5",
    icon = "",
    duration = "10min",
    price = "$25",
    active = false,
)
@Stable
internal val group6 = TabItem(
    id = "6",
    icon = "",
    duration = "3h",
    price = "$0.00",
    active = false,
)

internal val mockVehicleTypes = listOf(
    group1,
    group2,
    group3,
    group4,
    group5,
    group6
)