package com.trafi.ui

import androidx.compose.runtime.Stable
import androidx.compose.ui.unit.Dp

@Stable
inline val Int.unit: Dp
    get() = Dp(value = 4 * this.toFloat())

@Stable
inline val Double.unit: Dp
    get() = Dp(value = 4 * this.toFloat())

@Stable
inline val Float.unit: Dp
    get() = Dp(value = 4 * this)
