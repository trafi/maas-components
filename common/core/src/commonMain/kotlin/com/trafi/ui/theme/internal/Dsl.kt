package com.trafi.ui.theme.internal

internal const val infinity = Float.POSITIVE_INFINITY

internal fun textStyle(builder: BasicTextStyle.Builder.() -> Unit): BasicTextStyle =
    BasicTextStyle.Builder().apply(builder).build()

data class BasicTextStyle(
    val fontStyle: BasicFontStyle,
    val fontWeight: BasicFontWeight,
    val fontSize: Int,
    val lineHeight: Int
) {
    internal class Builder(
        var fontStyle: BasicFontStyle = BasicFontStyle.Normal,
        var fontWeight: BasicFontWeight = BasicFontWeight.Normal,
        var fontSize: Int? = null,
        var lineHeight: Int? = null,
    ) {
        fun build(): BasicTextStyle = BasicTextStyle(
            fontStyle = fontStyle,
            fontWeight = fontWeight,
            fontSize = requireNotNull(fontSize),
            lineHeight = requireNotNull(lineHeight),
        )
    }
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
