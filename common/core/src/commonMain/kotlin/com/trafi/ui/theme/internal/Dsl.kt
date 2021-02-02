package com.trafi.ui.theme.internal

import com.trafi.ui.theme.GrayScale
import com.trafi.ui.theme.internal.type.BasicFontStyle
import com.trafi.ui.theme.internal.type.BasicFontWeight
import com.trafi.ui.theme.internal.type.Color
import com.trafi.ui.theme.internal.type.TextStyle

internal const val maxValue = Float.MAX_VALUE

internal fun textStyle(builder: TextStyleBuilder.() -> Unit): TextStyle =
    TextStyleBuilder().apply(builder).build()

internal class TextStyleBuilder(
    var fontStyle: BasicFontStyle = BasicFontStyle.Normal,
    var fontWeight: BasicFontWeight = BasicFontWeight.Normal,
    var fontSize: Int? = null,
    var lineHeight: Int? = null,
    var color: Color? = null,
) {
    fun build(): TextStyle = TextStyle(
        fontStyle = fontStyle,
        fontWeight = fontWeight,
        fontSize = requireNotNull(fontSize),
        lineHeight = requireNotNull(lineHeight),
        color = color,
    )
}

internal fun grayScale(builder: GrayScaleBuilder.() -> Unit): GrayScale =
    GrayScaleBuilder().apply(builder).build()

internal class GrayScaleBuilder(
    var gray100: Color? = null,
    var gray200: Color? = null,
    var gray300: Color? = null,
    var gray400: Color? = null,
    var gray500: Color? = null,
    var gray600: Color? = null,
    var gray700: Color? = null,
    var gray800: Color? = null,
    var gray900: Color? = null,
) {
    fun build(): GrayScale = GrayScale(
        gray100 = requireNotNull(gray100),
        gray200 = requireNotNull(gray200),
        gray300 = requireNotNull(gray300),
        gray400 = requireNotNull(gray400),
        gray500 = requireNotNull(gray500),
        gray600 = requireNotNull(gray600),
        gray700 = requireNotNull(gray700),
        gray800 = requireNotNull(gray800),
        gray900 = requireNotNull(gray900),
    )
}
