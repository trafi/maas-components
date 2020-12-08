package com.trafi.ui.component

import com.trafi.ui.theme.internal.BasicFontWeight
import com.trafi.ui.theme.internal.BasicFontWeight.*
import com.trafi.ui.theme.internal.BasicTextStyle
import com.trafi.ui.theme.internal.textStyle
import platform.CoreGraphics.CGFloat
import platform.Foundation.NSDictionary
import platform.Foundation.NSNumber
import platform.UIKit.UIFont
import platform.UIKit.UIFontDescriptorTraitsAttribute
import platform.UIKit.UIFontDescriptorSymbolicTraits
import platform.UIKit.UIFontWeight
import platform.UIKit.UIFontWeightTrait
import platform.UIKit.UIFontWeightBold
import platform.UIKit.UIFontWeightRegular
import platform.UIKit.UIFontWeightSemibold

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
            UIFontWeightSemibold -> SemiBold
            UIFontWeightBold -> Bold
            else -> Normal
        }
    }

    private fun fontWeight(basicFontWeight: BasicFontWeight): UIFontWeight {
        return when(basicFontWeight) {
            Normal -> UIFontWeightRegular
            SemiBold -> UIFontWeightSemibold
            Bold ->  UIFontWeightBold
        }
    }
}
