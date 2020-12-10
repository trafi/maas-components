package com.trafi.ui.theme.internal

expect class OsTextStyle

internal expect fun OsTextStyle.copy(
    fontStyle: BasicFontStyle? = null,
    fontWeight: BasicFontWeight? = null,
    fontSize: Int? = null,
    lineHeight: Int? = null,
): OsTextStyle

internal expect fun OsTextStyle(
    fontStyle: BasicFontStyle,
    fontWeight: BasicFontWeight,
    fontSize: Int,
    lineHeight: Int,
): OsTextStyle
