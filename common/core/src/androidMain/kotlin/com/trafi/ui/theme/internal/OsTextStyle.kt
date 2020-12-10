package com.trafi.ui.theme.internal

import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.sp

actual typealias OsTextStyle = TextStyle

actual fun OsTextStyle.copy(
    fontStyle: BasicFontStyle?,
    fontWeight: BasicFontWeight?,
    fontSize: Int?,
    lineHeight: Int?,
): OsTextStyle {
    val basic = toBasicTextStyle()
    return merge(
        BasicTextStyle(
            fontStyle = fontStyle ?: basic.fontStyle,
            fontWeight = fontWeight ?: basic.fontWeight,
            fontSize = fontSize ?: basic.fontSize,
            lineHeight = lineHeight ?: basic.lineHeight,
        ).toTextStyle()
    )
}

private fun OsTextStyle.toBasicTextStyle(): BasicTextStyle = BasicTextStyle(
    fontStyle = when (fontStyle) {
        FontStyle.Normal, null -> BasicFontStyle.Normal
        FontStyle.Italic -> BasicFontStyle.Italic
    },
    fontWeight = when (fontWeight?.weight) {
        FontWeight.Normal.weight, null -> BasicFontWeight.Normal
        FontWeight.SemiBold.weight -> BasicFontWeight.SemiBold
        FontWeight.Bold.weight -> BasicFontWeight.Bold
        else -> BasicFontWeight.Normal
    },
    fontSize = fontSize.value.toInt(),
    lineHeight = lineHeight.value.toInt(),
)

private fun BasicTextStyle.toTextStyle(): TextStyle = TextStyle(
    fontStyle = when (fontStyle) {
        BasicFontStyle.Normal -> FontStyle.Normal
        BasicFontStyle.Italic -> FontStyle.Italic
    },
    fontWeight = when (fontWeight) {
        BasicFontWeight.Normal -> FontWeight.Normal
        BasicFontWeight.SemiBold -> FontWeight.SemiBold
        BasicFontWeight.Bold -> FontWeight.Bold
    },
    fontSize = fontSize.sp,
    lineHeight = lineHeight.sp
)
