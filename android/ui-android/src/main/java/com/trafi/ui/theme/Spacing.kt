@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import com.trafi.ui.theme.internal.SpacingScale

public object Spacing {
    @Stable public val xxxs: Dp = SpacingScale.xxxs
    @Stable public val xxs: Dp = SpacingScale.xxs
    @Stable public val xs: Dp = SpacingScale.xs
    @Stable public val sm: Dp = SpacingScale.sm
    @Stable public val md: Dp = SpacingScale.md
    @Stable public val lg: Dp = SpacingScale.lg
    @Stable public val xl: Dp = SpacingScale.xl
    @Stable public val xxl: Dp = SpacingScale.xxl
    @Stable public val xxxl: Dp = SpacingScale.xxxl
}

@Immutable
public data class MaasSpacing(
    val globalMargin: Dp = SpacingScale.Default.GlobalMargin
)
