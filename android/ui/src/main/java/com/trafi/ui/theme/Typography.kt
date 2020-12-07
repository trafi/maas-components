package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.font.font
import androidx.compose.ui.text.font.fontFamily
import androidx.compose.ui.unit.sp
import com.trafi.ui.R
import com.trafi.ui.theme.internal.BasicFontStyle
import com.trafi.ui.theme.internal.BasicFontWeight
import com.trafi.ui.theme.internal.BasicTextStyle
import com.trafi.ui.theme.internal.TypographyScale

internal val Inter = fontFamily(
    font(R.font.inter_regular, FontWeight.Normal),
    font(R.font.inter_bold, FontWeight.Bold),
    font(R.font.inter_semi_bold, FontWeight.SemiBold),
)

@Immutable
data class MaasTypography internal constructor(
    val headingXXL: TextStyle,
    val headingXL: TextStyle,
    val headingL: TextStyle,
    val headingM: TextStyle,
    val textL: TextStyle,
    val textM: TextStyle,
    val textS: TextStyle,
    val label: TextStyle,
) {
    constructor(
        defaultFontFamily: FontFamily = Inter,
        headingXXL: TextStyle = TypographyScale.headingXXL.toTextStyle(),
        headingXL: TextStyle = TypographyScale.headingXL.toTextStyle(),
        headingL: TextStyle = TypographyScale.headingL.toTextStyle(),
        headingM: TextStyle = TypographyScale.headingM.toTextStyle(),
        textL: TextStyle = TypographyScale.textL.toTextStyle(),
        textM: TextStyle = TypographyScale.textM.toTextStyle(),
        textS: TextStyle = TypographyScale.textS.toTextStyle(),
        label: TextStyle = TypographyScale.label.toTextStyle(),
    ) : this(
        headingXXL = headingXXL.withDefaultFontFamily(defaultFontFamily),
        headingXL = headingXL.withDefaultFontFamily(defaultFontFamily),
        headingL = headingL.withDefaultFontFamily(defaultFontFamily),
        headingM = headingM.withDefaultFontFamily(defaultFontFamily),
        textL = textL.withDefaultFontFamily(defaultFontFamily),
        textM = textM.withDefaultFontFamily(defaultFontFamily),
        textS = textS.withDefaultFontFamily(defaultFontFamily),
        label = label.withDefaultFontFamily(defaultFontFamily),
    )
}

private fun TextStyle.withDefaultFontFamily(default: FontFamily): TextStyle {
    return if (fontFamily != null) this else copy(fontFamily = default)
}

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
