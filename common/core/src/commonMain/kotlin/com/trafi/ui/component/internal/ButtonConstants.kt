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
    val minHeight = 48.dp
    val cornerRadius = theme.cornerRadiusScale.buttonRadius
    val defaultTruncate = true
}

open class NewButtonConstants(theme: CurrentTheme) {

    val defaultBackgroundColor = theme.colorPalette.primary
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledBackgroundColor = theme.colorPalette.primary.alpha(0.12f)
    val disabledContentColor = theme.colorPalette.onPrimary

    val iconWidth = 16.dp
    val iconHeight = 16.dp

    open val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val defaultTruncate = true

    open val minHeight = 48.dp

    val spaceBetween = SpacingScale.xs
    val paddingHorizontal = SpacingScale.md

    val cornerRadius = theme.cornerRadiusScale.buttonRadius
}

class CompactButtonConstants(theme: CurrentTheme) : NewButtonConstants(theme) {
    override val textStyle = theme.typographyScale.textM.copy(fontWeight = Bold)
    override val minHeight = 32.dp
}
