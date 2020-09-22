@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp

object Spacing {
    @Stable val xxxs: Dp = 2.dp
    @Stable val xxs: Dp = 4.dp
    @Stable val xs: Dp = 8.dp
    @Stable val sm: Dp = 12.dp
    @Stable val md: Dp = 16.dp
    @Stable val lg: Dp = 20.dp
    @Stable val xl: Dp = 24.dp
    @Stable val xxl: Dp = 32.dp
    @Stable val xxxl: Dp = 48.dp
}

@Immutable
data class MaasSpacing(
    val globalMargin: Dp = Spacing.xl
)
