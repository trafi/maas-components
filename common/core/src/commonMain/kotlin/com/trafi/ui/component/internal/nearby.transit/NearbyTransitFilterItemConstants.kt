package com.trafi.ui.component.internal.nearby.transit

import com.trafi.ui.theme.internal.ColorPalette
import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.dp

class NearbyTransitFilterItemConstants(theme: CurrentTheme) {
    val disabledColor = theme.colorPalette.grayScale.gray200
    val itemMinHeight = 48.dp
    val itemMinWidth = 48.dp
    val minHeight = 32.dp
    val minWidth = 32.dp
    val imageHeight = 24.dp
    val imageWidth = 24.dp
    val cornerRadius = theme.cornerRadiusScale.nearbyTransitFilterItemRadius
}
