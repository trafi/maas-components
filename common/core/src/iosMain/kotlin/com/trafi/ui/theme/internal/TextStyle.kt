package com.trafi.ui.theme.internal

actual data class TextStyle(
        val fontWeight: BasicFontWeight,
        val fontStyle: BasicFontStyle,
        val fontSize: Int,
        val lineSpacing: Int,
        val color: ULong?,
)

//actual typealias Color = UIColor

internal actual fun TextStyle.copy(
        fontStyle: BasicFontStyle?,
        fontWeight: BasicFontWeight?,
        fontSize: Int?,
        lineHeight: Int?,
        color: Color?,
): TextStyle = copy(
        fontStyle = fontStyle ?: this.fontStyle,
        fontWeight = fontWeight ?: this.fontWeight,
        fontSize = fontSize ?: this.fontSize,
        lineSpacing = lineHeight?.let { it - (fontSize ?: this.fontSize) } ?: this.lineSpacing,
        color = color?.value ?: this.color,
)

internal actual fun TextStyle(
        fontStyle: BasicFontStyle,
        fontWeight: BasicFontWeight,
        fontSize: Int,
        lineHeight: Int,
        color: Color?,
): TextStyle = TextStyle(
        fontWeight = fontWeight,
        fontStyle = fontStyle,
        fontSize = fontSize,
        lineSpacing = lineHeight - fontSize,
        color = color?.value,
)