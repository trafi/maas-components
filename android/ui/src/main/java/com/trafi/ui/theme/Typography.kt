package com.trafi.ui.theme

import androidx.compose.runtime.Immutable
import androidx.compose.ui.text.TextStyle
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
data class MaasTypography(
    val headingXXL: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Bold,
        fontSize = 40.sp,
        lineHeight = 50.sp
    ),
    val headingXL: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Bold,
        fontSize = 32.sp,
        lineHeight = 40.sp
    ),
    val headingL: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Bold,
        fontSize = 28.sp,
        lineHeight = 36.sp
    ),
    val headingM: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Bold,
        fontSize = 18.sp,
        lineHeight = 22.sp
    ),
    val textL: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Normal,
        fontSize = 16.sp,
        lineHeight = 24.sp
    ),
    val textM: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Normal,
        fontSize = 14.sp,
        lineHeight = 20.sp
    ),
    val textS: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Normal,
        fontSize = 12.sp,
        lineHeight = 16.sp
    ),
    val label: TextStyle = TextStyle(
        fontFamily = Inter,
        fontStyle = FontStyle.Normal,
        fontWeight = FontWeight.Bold,
        fontSize = 14.sp,
        lineHeight = 18.sp
    ),
)
