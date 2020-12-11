@file:Suppress("EXPERIMENTAL_FEATURE_WARNING", "EXPERIMENTAL_API_USAGE")
@file:JvmName("Color")

package com.trafi.ui.theme.internal

import kotlin.jvm.JvmName

expect inline class Color(val value: ULong)

internal fun Color(value: Long) = Color(value.toULong())
