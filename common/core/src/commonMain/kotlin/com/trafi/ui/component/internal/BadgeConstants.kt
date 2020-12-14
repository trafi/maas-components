package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.BasicFontWeight
import com.trafi.ui.theme.internal.ColorPalette.Gray300
import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.copy
import com.trafi.ui.theme.internal.dp

class BadgeConstants(theme: CurrentTheme) {
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledColor = Gray300

    val textStyleMedium = theme.typographyScale.textM.copy(fontWeight = BasicFontWeight.Bold)
    val textStyleSmall = theme.typographyScale.textS.copy(fontWeight = BasicFontWeight.Bold)

    val minHeightMedium = 24.dp
    val minHeightSmall = 16.dp

    val cornerRadiusMedium = theme.cornerRadiusScale.mediumBadgeRadius
    val cornerRadiusSmall = theme.cornerRadiusScale.smallBadgeRadius

    val iconHeight = 20.dp
    val iconWidth = 20.dp

    val subBadgeIconHeight = 16.dp
    val subBadgeIconWidth = 16.dp

    val spacer = theme.spacingScale.badgeSpacer

    val horizontalPaddingMedium = theme.spacingScale.horizontalPaddingMedium
    val horizontalPaddingSmall = theme.spacingScale.horizontalPaddingSmall

    val verticalPaddingMedium = theme.spacingScale.verticalPaddingMedium
    val verticalPaddingSmall = theme.spacingScale.verticalPaddingSmall

    val border = (1.5f).dp
}