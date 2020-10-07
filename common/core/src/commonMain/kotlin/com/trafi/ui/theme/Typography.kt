@file:Suppress("unused")

package com.trafi.ui.theme

expect val Inter: FontFamily

expect class FontFamily

expect class Sp(value: Float)

val Int.sp: Sp get() = Sp(this.toFloat())
val Float.sp: Sp get() = Sp(this)

expect enum class FontStyle {
    Normal
}
expect enum class FontWeight {
    Normal, Bold
}
expect class TextStyle(fontFamily: FontFamily? = null, fontStyle: FontStyle, fontWeight: FontWeight, fontSize: Sp, lineHeight: Sp) {
    val fontFamily: FontFamily?
    fun copy(fontFamily: FontFamily): TextStyle
}

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
