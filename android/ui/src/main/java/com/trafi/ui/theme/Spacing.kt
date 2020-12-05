@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.internal.SpacingScale

object Spacing {
    @Stable val xxxs: Dp = SpacingScale.xxxs.dp
    @Stable val xxs: Dp = SpacingScale.xxs.dp
    @Stable val xs: Dp = SpacingScale.xs.dp
    @Stable val sm: Dp = SpacingScale.sm.dp
    @Stable val md: Dp = SpacingScale.md.dp
    @Stable val lg: Dp = SpacingScale.lg.dp
    @Stable val xl: Dp = SpacingScale.xl.dp
    @Stable val xxl: Dp = SpacingScale.xxl.dp
    @Stable val xxxl: Dp = SpacingScale.xxxl.dp
}

@Immutable
data class MaasSpacing(
    val globalMargin: Dp = SpacingScale.Default.GlobalMargin.dp
)
