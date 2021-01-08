package com.trafi.ui.theme.internal.type

import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp

actual typealias TextStyle = androidx.compose.ui.text.TextStyle

internal actual fun TextStyle.copy(
    fontStyle: BasicFontStyle?,
    fontWeight: BasicFontWeight?,
    fontSize: Int?,
    lineHeight: Int?,
    color: Color?,
): TextStyle = copy(
    fontStyle = fontStyle?.os ?: this.fontStyle,
    fontWeight = fontWeight?.os ?: this.fontWeight,
    fontSize = fontSize?.sp ?: this.fontSize,
    lineHeight = lineHeight?.sp ?: this.lineHeight,
    color = color ?: this.color,
)

internal actual fun TextStyle(
    fontStyle: BasicFontStyle,
    fontWeight: BasicFontWeight,
    fontSize: Int,
    lineHeight: Int,
    color: Color?,
): TextStyle = TextStyle(
    fontStyle = fontStyle.os,
    fontWeight = fontWeight.os,
    fontSize = fontSize.sp,
    lineHeight = lineHeight.sp,
    color = color ?: Color.Unspecified,
)

private val BasicFontStyle.os get() = when (this) {
    BasicFontStyle.Normal -> FontStyle.Normal
    BasicFontStyle.Italic -> FontStyle.Italic
}

private val BasicFontWeight.os get() = when (this) {
    BasicFontWeight.Normal -> FontWeight.Normal
    BasicFontWeight.SemiBold -> FontWeight.SemiBold
    BasicFontWeight.Bold -> FontWeight.Bold
}
