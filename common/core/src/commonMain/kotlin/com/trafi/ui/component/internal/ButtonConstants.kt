package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.SpacingScale
import com.trafi.ui.theme.internal.type.BasicFontWeight.Bold
import com.trafi.ui.theme.internal.type.alpha
import com.trafi.ui.theme.internal.type.copy
import com.trafi.ui.theme.internal.type.dp

class ButtonConstants(theme: CurrentTheme) {

    val defaultBackgroundColor = theme.colorPalette.primary
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledBackgroundColor = theme.colorPalette.primary.alpha(0.12f)
    val disabledContentColor = theme.colorPalette.onPrimary

    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val textStyleSmall = theme.typographyScale.textM.copy(fontWeight = Bold)
    val defaultTruncate = true

    val height = 48.dp
    val heightSmall = 32.dp

    val iconSize = 24.dp
    val iconSizeSmall = 16.dp

    val spaceBetween = SpacingScale.xs
    val paddingHorizontal = SpacingScale.md

    val cornerRadius = theme.cornerRadiusScale.buttonRadius
}
