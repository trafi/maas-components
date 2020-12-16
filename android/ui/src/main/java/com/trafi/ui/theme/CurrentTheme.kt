package com.trafi.ui.theme

import androidx.compose.runtime.Composable
import com.trafi.ui.theme.internal.CurrentColorPalette
import com.trafi.ui.theme.internal.CurrentCornerRadiusScale
import com.trafi.ui.theme.internal.CurrentSpacingScale
import com.trafi.ui.theme.internal.CurrentTheme
import com.trafi.ui.theme.internal.CurrentTypographyScale

@Composable
val currentTheme: CurrentTheme
    get() = CurrentTheme(
        colorPalette = with(MaasTheme.colors) {
            CurrentColorPalette(
                primary = primary,
                primaryVariant = primaryVariant,
                secondary = secondary,
                secondaryVariant = secondaryVariant,
                background = background,
                surface = surface,
                error = error,
                onPrimary = onPrimary,
                onSecondary = onSecondary,
                onBackground = onBackground,
                onSurface = onSurface,
                onError = onError,
                grayScale = grayScale,
            )
        },
        typographyScale = with(MaasTheme.typography) {
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
        spacingScale = with(MaasTheme.spacing) {
            CurrentSpacingScale(
                globalMargin = globalMargin
            )
        },
        cornerRadiusScale = with(MaasTheme.cornerRadius) {
            CurrentCornerRadiusScale(
                buttonRadius = buttonRadius,
            )
        },
    )
