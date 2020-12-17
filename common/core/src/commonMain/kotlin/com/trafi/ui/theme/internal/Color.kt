@file:Suppress(
    "EXPERIMENTAL_FEATURE_WARNING",
    "EXPERIMENTAL_API_USAGE",
    "EXPERIMENTAL_UNSIGNED_LITERALS",
)
@file:JvmName("Color")

package com.trafi.ui.theme.internal

import kotlin.jvm.JvmName

expect inline class Color(val value: ULong)

internal fun Color.alpha(value : Float): Color {
    require(
        value in 0f..1f
    ) {
        "alpha = $value outside the range 0..1"
    }
    val reshiftedColor = this.value shr 32
    val colorClearedAlpha = (reshiftedColor and 0x00ffffffUL) shl 32

    val alpha = (value * 255.0f + 0.5f).toInt() shl 24
    val shiftedAlpha = (alpha.toULong() and 0xffffffffUL) shl 32

    val colorWithShiftedAlpha = shiftedAlpha or colorClearedAlpha
    return Color(colorWithShiftedAlpha)
}

internal fun Color(color: Long) = Color((color.toULong() and 0xffffffffUL) shl 32)

fun String?.toColor(fallback: Long = 0xFF_000000): Color {
    var color = this?.toLongOrNull(radix = 16) ?: return Color(fallback)
    if (length == 6) {
        // if transparency is not specified, default to opaque
        color = color or 0x00000000_FF000000
    }
    return Color(color)
}
