package com.trafi.ui.component

import com.trafi.ui.theme.internal.BasicFontWeight
import com.trafi.ui.theme.internal.BasicTextStyle
import com.trafi.ui.theme.internal.ColorPalette.Gray200

class ButtonConstants(
    val defaultColor: Long,
    val defaultContentColor: Long,
    val disabledColor: Long,
    val textStyle: OsTextStyle,
    val minHeight: Int,
    val cornerRadius: Float,
    val defaultTruncate: Boolean
) {
    constructor(theme: Theme): this(
        defaultColor = theme.colorPalette.primary,
        defaultContentColor = theme.colorPalette.onPrimary,
        disabledColor = Gray200,
        textStyle = theme.typographyScale.textL.apply {
            basic = basic.copy(fontWeight = BasicFontWeight.Bold)
        },
        minHeight = 48,
        cornerRadius = theme.cornerRadiusScale.buttonRadius,
        defaultTruncate = true
    )
}

expect class OsTextStyle {
    var basic: BasicTextStyle
}

class Theme(
    val colorPalette: ColorPalette,
    val typographyScale: TypographyScale,
    val cornerRadiusScale: CornerRadiusScale
)

class TypographyScale(
    val headingXXL: OsTextStyle,
    val headingXL: OsTextStyle,
    val headingL: OsTextStyle,
    val headingM: OsTextStyle,
    val textL: OsTextStyle,
    val textM: OsTextStyle,
    val textS: OsTextStyle,
    val label: OsTextStyle
)

class CornerRadiusScale(
    val buttonRadius: Float
)

class ColorPalette(
    val primary: Long,
    val primaryVariant: Long,
    val secondary: Long,
    val secondaryVariant: Long,
    val background: Long,
    val surface: Long,
    val error: Long,
    val onPrimary: Long,
    val onSecondary: Long,
    val onBackground: Long,
    val onSurface: Long,
    val onError: Long
)
