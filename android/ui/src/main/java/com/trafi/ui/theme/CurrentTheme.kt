package com.trafi.ui.theme

import androidx.compose.runtime.Composable
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.toArgb
import androidx.compose.ui.unit.Dp
import com.trafi.ui.theme.internal.CurrentColorPalette
import com.trafi.ui.theme.internal.CurrentCornerRadiusScale
import com.trafi.ui.theme.internal.CurrentSpacingScale
import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.CurrentTypographyScale

@Composable
internal val currentTheme: CurrentTheme
    get() {
        val colors = MaasTheme.colors
        val typography = MaasTheme.typography
        val spacing = MaasTheme.spacing
        val cornerRadius = MaasTheme.cornerRadius
        return CurrentTheme(
            colorPalette = with(colors) {
                CurrentColorPalette(
                    primary = primary.osColor,
                    primaryVariant = primaryVariant.osColor,
                    secondary = secondary.osColor,
                    secondaryVariant = secondaryVariant.osColor,
                    background = background.osColor,
                    surface = surface.osColor,
                    error = error.osColor,
                    onPrimary = onPrimary.osColor,
                    onSecondary = onSecondary.osColor,
                    onBackground = onBackground.osColor,
                    onSurface = onSurface.osColor,
                    onError = onError.osColor,
                )
            },
            typographyScale = with(typography) {
                CurrentTypographyScale(
                    headingXXL = headingXXL,
                    headingXL = headingXL,
                    headingL = headingL,
                    headingM = headingM,
                    textL = textL,
                    textM = textM,
                    textS = textS,
                    label = label,
                )
            },
            spacingScale = with(spacing) {
                CurrentSpacingScale(
                    globalMargin = globalMargin.osDimension
                )
            },
            cornerRadiusScale = with(cornerRadius) {
                CurrentCornerRadiusScale(
                    buttonRadius = buttonRadius.osDimension
                )
            },
        )
    }

private val Color.osColor: Long get() = toArgb().toLong()
private val Dp.osDimension: Float get() = value
