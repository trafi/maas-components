package com.trafi.ui.theme.internal

expect class OsTextStyle

expect fun OsTextStyle.copy(
    fontStyle: BasicFontStyle? = null,
    fontWeight: BasicFontWeight? = null,
    fontSize: Int? = null,
    lineHeight: Int? = null,
): OsTextStyle
