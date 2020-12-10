package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.BasicFontWeight.*
import com.trafi.ui.theme.internal.ColorPalette.Gray200
import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.copy
import com.trafi.ui.theme.internal.dp

class ButtonConstants(theme: CurrentTheme) {
    val defaultColor = theme.colorPalette.primary
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledColor = Gray200
    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val minHeight = 48.dp
    val cornerRadius = theme.cornerRadiusScale.buttonRadius
    val defaultTruncate = true
}
