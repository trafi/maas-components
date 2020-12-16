package com.trafi.ui.theme.internal

import platform.UIKit.*

actual typealias TextStyle = UIFont

internal actual fun TextStyle.copy(
    fontStyle: BasicFontStyle?,
    fontWeight: BasicFontWeight?,
    fontSize: Int?,
    lineHeight: Int?,
    color: Color?,
): TextStyle {
    var descriptor = this.fontDescriptor
    if (fontStyle?.os != null) {
        descriptor = descriptor.fontDescriptorWithSymbolicTraits(fontStyle.os!!) ?: descriptor
    }
    if (fontWeight != null) {
        descriptor = descriptor.fontDescriptorByAddingAttributes(
            mapOf(UIFontDescriptorTraitsAttribute to mapOf(UIFontWeightTrait to fontWeight.os))
        )
    }
    if (lineHeight != null) {
        // TODO: No way to add line height to UIFont :(
    }
    return UIFont.fontWithDescriptor(descriptor,fontSize?.os ?: this.pointSize)
}

internal actual fun TextStyle(
    fontStyle: BasicFontStyle,
    fontWeight: BasicFontWeight,
    fontSize: Int,
    lineHeight: Int,
    color: Color?,
): TextStyle = UIFont.systemFontOfSize(fontSize.os).copy(
        fontStyle = fontStyle,
        fontWeight = fontWeight,
        fontSize = fontSize,
        lineHeight = lineHeight,
        color = color,
)

private val BasicFontStyle.os get() = when (this) {
    BasicFontStyle.Normal -> null
    BasicFontStyle.Italic -> UIFontDescriptorTraitItalic
}

private val BasicFontWeight.os get() = when (this) {
    BasicFontWeight.Normal -> UIFontWeightRegular
    BasicFontWeight.SemiBold -> UIFontWeightSemibold
    BasicFontWeight.Bold -> UIFontWeightBold
}

private val Int.os get() = this.toDouble()
