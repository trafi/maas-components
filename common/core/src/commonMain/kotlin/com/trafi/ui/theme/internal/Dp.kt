@file:Suppress("EXPERIMENTAL_FEATURE_WARNING")
@file:JvmName("Dp")

package com.trafi.ui.theme.internal

import kotlin.jvm.JvmName

expect inline class Dp(val value: Float)

internal val Int.dp get() = Dp(toFloat())
internal val Float.dp get() = Dp(this)
internal val Double.dp get() = Dp(toFloat())
