package com.trafi.ui.theme.internal

expect class TextStyle

internal expect fun TextStyle.copy(
    fontStyle: BasicFontStyle? = null,
    fontWeight: BasicFontWeight? = null,
    fontSize: Int? = null,
    lineHeight: Int? = null,
): TextStyle

internal expect fun TextStyle(
    fontStyle: BasicFontStyle,
    fontWeight: BasicFontWeight,
    fontSize: Int,
    lineHeight: Int,
): TextStyle
