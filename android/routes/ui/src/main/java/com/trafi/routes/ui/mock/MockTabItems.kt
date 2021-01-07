package com.trafi.routes.ui.mock

import androidx.compose.runtime.Stable
import com.trafi.routes.ui.TabItem

@Stable
private val mockTabItem1 = TabItem(
    id = "1",
    icon = "",
    duration = "13min",
    price = "$15",
    active = true,
)

@Stable
private val mockTabItem2 = TabItem(
    id = "2",
    icon = "",
    duration = "35min",
    price = "$1.6",
    active = false,
)

@Stable
private val mockTabItem3 = TabItem(
    id = "3",
    icon = "",
    duration = "2h",
    price = "$0.5",
    active = false,
)

@Stable
private val mockTabItem4 = TabItem(
    id = "4",
    icon = "",
    duration = "1h",
    price = "$3.15",
    active = false,
)

@Stable
private val mockTabItem5 = TabItem(
    id = "5",
    icon = "",
    duration = "10min",
    price = "$25",
    active = false,
)
@Stable
private val mockTabItem6 = TabItem(
    id = "6",
    icon = "",
    duration = "3h",
    price = "$0.00",
    active = false,
)

internal val mockTabItems = listOf(
    mockTabItem1,
    mockTabItem2,
    mockTabItem3,
    mockTabItem4,
    mockTabItem5,
    mockTabItem6
)
