@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import com.trafi.ui.theme.internal.CornerRadiusScale

public object CornerRadius {
    @Stable public val none: Dp = CornerRadiusScale.none
    @Stable public val xxs: Dp = CornerRadiusScale.xxs
    @Stable public val xs: Dp = CornerRadiusScale.xs
    @Stable public val sm: Dp = CornerRadiusScale.sm
    @Stable public val lg: Dp = CornerRadiusScale.lg
    @Stable public val xl: Dp = CornerRadiusScale.xl
    @Stable public val round: Dp = CornerRadiusScale.round
}

@Stable
public val Dp.isRound: Boolean
    get() = this == CornerRadius.round

@Immutable
public data class MaasCornerRadius(
    val buttonRadius: Dp = CornerRadiusScale.Default.ButtonRadius,
)
