@file:Suppress(
    "EXPERIMENTAL_FEATURE_WARNING",
    "EXPERIMENTAL_API_USAGE",
    "EXPERIMENTAL_UNSIGNED_LITERALS",
)
@file:JvmName("Color")

package com.trafi.ui.theme.internal

import kotlin.jvm.JvmName

expect inline class Color(val value: ULong)

fun Color.tint(value : Float): Color = this

internal fun Color(color: Long) = Color((color.toULong() and 0xffffffffUL) shl 32)
