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
        headingXXL: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Bold,
            fontSize = 40.sp,
            lineHeight = 50.sp
        ),
        headingXL: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Bold,
            fontSize = 32.sp,
            lineHeight = 40.sp
        ),
        headingL: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Bold,
            fontSize = 28.sp,
            lineHeight = 36.sp
        ),
        headingM: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Bold,
            fontSize = 18.sp,
            lineHeight = 22.sp
        ),
        textL: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Normal,
            fontSize = 16.sp,
            lineHeight = 24.sp
        ),
        textM: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Normal,
            fontSize = 14.sp,
            lineHeight = 20.sp
        ),
        textS: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Normal,
            fontSize = 12.sp,
            lineHeight = 16.sp
        ),
        label: TextStyle = TextStyle(
            fontStyle = FontStyle.Normal,
            fontWeight = FontWeight.Bold,
            fontSize = 14.sp,
            lineHeight = 18.sp
        ),
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
