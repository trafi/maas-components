@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import com.trafi.ui.theme.internal.SpacingScale

object Spacing {
    @Stable val xxxs: Dp = SpacingScale.xxxs
    @Stable val xxs: Dp = SpacingScale.xxs
    @Stable val xs: Dp = SpacingScale.xs
    @Stable val sm: Dp = SpacingScale.sm
    @Stable val md: Dp = SpacingScale.md
    @Stable val lg: Dp = SpacingScale.lg
    @Stable val xl: Dp = SpacingScale.xl
    @Stable val xxl: Dp = SpacingScale.xxl
    @Stable val xxxl: Dp = SpacingScale.xxxl
}

@Immutable
data class MaasSpacing(
    val globalMargin: Dp = SpacingScale.Default.GlobalMargin
)
