package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.*
import com.trafi.ui.theme.internal.ColorPalette.Gray300
import com.trafi.ui.theme.internal.copy
import com.trafi.ui.theme.internal.dp

class BadgeConstants(theme: CurrentTheme) {
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledColor = Gray300

    val textStyleMedium = theme.typographyScale.textM.copy(fontWeight = BasicFontWeight.Bold)
    val textStyleSmall = theme.typographyScale.textS.copy(fontWeight = BasicFontWeight.Bold)

    val minHeightMedium = 24.dp
    val minHeightSmall = 16.dp

    val cornerRadiusMedium = CornerRadiusScale.xs
    val cornerRadiusSmall = CornerRadiusScale.xxs

    val iconHeight = 20.dp
    val iconWidth = 20.dp

    val subBadgeIconHeight = 16.dp
    val subBadgeIconWidth = 16.dp

    val spacer = SpacingScale.xxs

    val horizontalPaddingMedium = SpacingScale.xs
    val horizontalPaddingSmall = SpacingScale.xxs

    val verticalPaddingMedium = SpacingScale.xxxs
    val verticalPaddingSmall = SpacingScale.xxxs

    val borderWidth = 1.5.dp
}