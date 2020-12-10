package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontFamily
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.text.font.font
import androidx.compose.ui.text.font.fontFamily
import com.trafi.ui.R
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
        headingXXL: TextStyle = TypographyScale.headingXXL,
        headingXL: TextStyle = TypographyScale.headingXL,
        headingL: TextStyle = TypographyScale.headingL,
        headingM: TextStyle = TypographyScale.headingM,
        textL: TextStyle = TypographyScale.textL,
        textM: TextStyle = TypographyScale.textM,
        textS: TextStyle = TypographyScale.textS,
        label: TextStyle = TypographyScale.label,
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
