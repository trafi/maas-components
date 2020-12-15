package com.trafi.ui.theme.internal

actual data class TextStyle(
        val fontWeight: BasicFontWeight,
        val fontStyle: BasicFontStyle,
        val fontSize: Int,
        val lineHeight: Int,
        val color: Color?,
        val dummy: Unit?,
)

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
        lineHeight = lineHeight ?: this.lineHeight,
        color = color ?: this.color,
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
        lineHeight = lineHeight,
        color = color,
        dummy = null,
)