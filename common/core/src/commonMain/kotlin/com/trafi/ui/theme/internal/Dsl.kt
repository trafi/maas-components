package com.trafi.ui.theme.internal

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
