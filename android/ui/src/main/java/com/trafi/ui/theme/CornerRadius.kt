@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp

object CornerRadius {
    @Stable val none: Dp = 0.dp
    @Stable val xxs: Dp = 4.dp
    @Stable val xs: Dp = 6.dp
    @Stable val sm: Dp = 8.dp
    @Stable val lg: Dp = 12.dp
    @Stable val xl: Dp = 20.dp
    @Stable val round: Dp = Dp.Infinity
}

@Immutable
data class MaasCornerRadius(
    val buttonRadius: Dp = CornerRadius.round
)

@Stable
internal val Dp.isRound: Boolean
    get() = this == Dp.Infinity
