@file:Suppress("EXPERIMENTAL_FEATURE_WARNING")

package com.trafi.ui.theme.internal

expect inline class Dp(val value: Float)

internal val Int.dp get() = Dp(toFloat())
internal val Float.dp get() = Dp(this)
