@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import com.trafi.ui.theme.internal.CornerRadiusScale

object CornerRadius {
    @Stable val none: Dp = CornerRadiusScale.none
    @Stable val xxs: Dp = CornerRadiusScale.xxs
    @Stable val xs: Dp = CornerRadiusScale.xs
    @Stable val sm: Dp = CornerRadiusScale.sm
    @Stable val lg: Dp = CornerRadiusScale.lg
    @Stable val xl: Dp = CornerRadiusScale.xl
    @Stable val round: Dp = CornerRadiusScale.round
}

@Stable
val Dp.isRound: Boolean
    get() = this == CornerRadius.round

@Immutable
data class MaasCornerRadius(
    val buttonRadius: Dp = CornerRadiusScale.Default.ButtonRadius,
    val nearbyTransitFilterItemRadius: Dp = CornerRadiusScale.Default.NearbyTransitFilterItemRadius
)
