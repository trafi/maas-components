package com.trafi.ui.theme.internal

import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp

actual typealias OsTextStyle = TextStyle

internal actual fun OsTextStyle.copy(
    fontStyle: BasicFontStyle?,
    fontWeight: BasicFontWeight?,
    fontSize: Int?,
    lineHeight: Int?,
): OsTextStyle = copy(
    fontStyle = fontStyle?.os ?: this.fontStyle,
    fontWeight = fontWeight?.os ?: this.fontWeight,
    fontSize = fontSize?.sp ?: this.fontSize,
    lineHeight = lineHeight?.sp ?: this.lineHeight
)

internal actual fun OsTextStyle(
    fontStyle: BasicFontStyle,
    fontWeight: BasicFontWeight,
    fontSize: Int,
    lineHeight: Int,
): OsTextStyle = TextStyle(
    fontStyle = fontStyle.os,
    fontWeight = fontWeight.os,
    fontSize = fontSize.sp,
    lineHeight = lineHeight.sp
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
