package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.*
import com.trafi.ui.theme.internal.BasicFontWeight.*
import com.trafi.ui.theme.internal.copy

class InfoButtonConstants(theme: CurrentTheme) {

    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val defaultTruncate = true

    val color = theme.colorPalette.grayScale.gray900
    val disabledColor = theme.colorPalette.grayScale.gray400
    val highlightedColor = theme.colorPalette.grayScale.gray300

    val horMinPadding = SpacingScale.sm
    val verPadding = SpacingScale.sm
    val spaceBetween = SpacingScale.xs
}
