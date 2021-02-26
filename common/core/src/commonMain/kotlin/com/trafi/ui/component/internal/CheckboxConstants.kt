package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.type.dp

class CheckboxConstants(theme: CurrentTheme) {
    val height = 24.dp
    val width = 24.dp
    var enabledColor = theme.colorPalette.secondary
    var disabledColor = theme.colorPalette.grayScale.gray400
}