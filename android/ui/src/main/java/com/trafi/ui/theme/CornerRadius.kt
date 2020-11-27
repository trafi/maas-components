@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.internal.CornerRadiusScale

object CornerRadius {
    @Stable val none: Dp = CornerRadiusScale.none.dp
    @Stable val xxs: Dp = CornerRadiusScale.xxs.dp
    @Stable val xs: Dp = CornerRadiusScale.xs.dp
    @Stable val sm: Dp = CornerRadiusScale.sm.dp
    @Stable val lg: Dp = CornerRadiusScale.lg.dp
    @Stable val xl: Dp = CornerRadiusScale.xl.dp
    @Stable val round: Dp = CornerRadiusScale.round.dp
}

@Stable
internal val Dp.isRound: Boolean
    get() = this == CornerRadius.round

@Immutable
data class MaasCornerRadius(
    val buttonRadius: Dp = CornerRadiusScale.Default.ButtonRadius.dp
)
