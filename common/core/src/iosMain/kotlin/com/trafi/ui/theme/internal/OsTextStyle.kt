package com.trafi.ui.theme.internal

actual class OsTextStyle constructor(var font: UIFont, var lineSpacing: CGFloat) {
    actual var basic: BasicTextStyle
        get() = textStyle {
            fontWeight = basicFontWeight()
            fontSize = font.pointSize.toInt()
            lineHeight = (font.lineHeight + lineSpacing).toInt()
        }
        set(value) {
            lineSpacing = value.lineHeight.toDouble() - font.lineHeight
            font = UIFont.fontWithDescriptor(
                font.fontDescriptor.fontDescriptorByAddingAttributes(mapOf(UIFontDescriptorTraitsAttribute to mapOf(UIFontWeightTrait to fontWeight(value.fontWeight)))),
                value.fontSize.toDouble()
            )
        }

    private fun basicFontWeight(): BasicFontWeight {

        val traits = font.fontDescriptor.objectForKey(UIFontDescriptorTraitsAttribute) as Map<Any?, *>
        val weight = traits[UIFontWeightTrait] as NSNumber

        return when(weight.doubleValue) {
            UIFontWeightSemibold -> BasicFontWeight.SemiBold
            UIFontWeightBold -> BasicFontWeight.Bold
            else -> BasicFontWeight.Normal
        }
    }

    private fun fontWeight(basicFontWeight: BasicFontWeight): UIFontWeight {
        return when(basicFontWeight) {
            BasicFontWeight.Normal -> UIFontWeightRegular
            BasicFontWeight.SemiBold -> UIFontWeightSemibold
            BasicFontWeight.Bold ->  UIFontWeightBold
        }
    }
}
