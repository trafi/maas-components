package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.*
import com.trafi.ui.theme.internal.dp

class RouteSearchTabConstants (theme: CurrentTheme) {
    val contentColorPrimary = theme.colorPalette.onSurface
    val contentColorSecondaryOnLight = theme.colorPalette.grayScale.gray600
    val contentColorSecondaryOnDark = theme.colorPalette.grayScale.gray400

    val backgroundColorDefaultOnLight = theme.colorPalette.grayScale.gray100
    val backgroundColorDefaultOnDark = theme.colorPalette.grayScale.gray800

    val backgroundColorActiveOnLight = theme.colorPalette.primary.alpha(0.1f)
    val backgroundColorActiveOnDark = theme.colorPalette.primary.alpha(0.3f)

    val titleStyle = theme.typographyScale.textM.copy(fontWeight = BasicFontWeight.Bold)
    val subtitleStyle = theme.typographyScale.textS.copy(fontWeight = BasicFontWeight.Normal)

    val padding = SpacingScale.xxs

    val spacerBelowIcon = SpacingScale.xxs
    val spacerBelowTitle = SpacingScale.xxxs

    val minTabWidth = 64.dp
    val minTabHeight = 74.dp

    val borderRadius = SpacingScale.xs
    val iconWidth = 24.dp
    val iconHeight = 24.dp

    val borderColorActive = theme.colorPalette.primary
    val borderWidth = 1.5.dp
}