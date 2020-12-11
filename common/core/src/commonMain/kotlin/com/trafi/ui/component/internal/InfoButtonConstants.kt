package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.*
import com.trafi.ui.theme.internal.BasicFontWeight.*
import com.trafi.ui.theme.internal.copy

class InfoButtonConstants(theme: CurrentTheme) {

    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val defaultTruncate = true

    val color = ColorPalette.Gray900
    val disabledColor = ColorPalette.Gray400
    val highlightedColor = ColorPalette. Gray300

    val horMinPadding = SpacingScale.sm
    val verPadding = SpacingScale.sm
    val spaceBetween = SpacingScale.xs

}
