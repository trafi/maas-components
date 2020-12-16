package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.*
import com.trafi.ui.theme.internal.BasicFontWeight.*
import com.trafi.ui.theme.internal.copy

class InfoButtonConstants(theme: CurrentTheme) {
    val defaultContentColor = theme.colorPalette.onSurface
    val disabledContentColor = defaultContentColor.alpha(0.38f)
    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val cornerRadius = theme.cornerRadiusScale.buttonRadius
    val highlightedColor = theme.colorPalette.grayScale.gray300
    val horMinPadding = SpacingScale.sm
    val verPadding = SpacingScale.sm
    val spaceBetween = SpacingScale.xs
}
