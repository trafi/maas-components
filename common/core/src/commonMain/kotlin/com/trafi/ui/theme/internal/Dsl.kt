package com.trafi.ui.theme.internal

internal const val maxValue = Float.MAX_VALUE

internal fun textStyle(builder: TextStyleBuilder.() -> Unit): TextStyle =
    TextStyleBuilder().apply(builder).build()

internal class TextStyleBuilder(
    var fontStyle: BasicFontStyle = BasicFontStyle.Normal,
    var fontWeight: BasicFontWeight = BasicFontWeight.Normal,
    var fontSize: Int? = null,
    var lineHeight: Int? = null,
) {
    fun build(): TextStyle = TextStyle(
        fontStyle = fontStyle,
        fontWeight = fontWeight,
        fontSize = requireNotNull(fontSize),
        lineHeight = requireNotNull(lineHeight),
    )
}

enum class BasicFontStyle {
    Normal,
    Italic,
}

enum class BasicFontWeight {
    Normal,
    SemiBold,
    Bold,
}
