@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color
import com.trafi.ui.theme.internal.ColorPalette

public fun MaasTheme.lightColors(
    primary: Color = ColorPalette.Default.Primary.light,
    primaryVariant: Color = ColorPalette.Default.PrimaryVariant.light,
    secondary: Color = ColorPalette.Default.Secondary.light,
    secondaryVariant: Color = ColorPalette.Default.SecondaryVariant.light,
    background: Color = ColorPalette.Default.Background.light,
    surface: Color = ColorPalette.Default.Surface.light,
    error: Color = ColorPalette.Default.Error.light,
    onPrimary: Color = ColorPalette.Default.OnPrimary.light,
    onSecondary: Color = ColorPalette.Default.OnSecondary.light,
    onBackground: Color = ColorPalette.Default.OnBackground.light,
    onSurface: Color = ColorPalette.Default.OnSurface.light,
    onError: Color = ColorPalette.Default.OnError.light,
    grayScale: GrayScale = ColorPalette.Default.GrayScale.light,
): MaasColorPalette = MaasColorPalette(
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
    isLight = true,
)

public fun MaasTheme.darkColors(
    primary: Color = ColorPalette.Default.Primary.dark,
    primaryVariant: Color = ColorPalette.Default.PrimaryVariant.dark,
    secondary: Color = ColorPalette.Default.Secondary.dark,
    secondaryVariant: Color = ColorPalette.Default.SecondaryVariant.dark,
    background: Color = ColorPalette.Default.Background.dark,
    surface: Color = ColorPalette.Default.Surface.dark,
    error: Color = ColorPalette.Default.Error.dark,
    onPrimary: Color = ColorPalette.Default.OnPrimary.dark,
    onSecondary: Color = ColorPalette.Default.OnSecondary.dark,
    onBackground: Color = ColorPalette.Default.OnBackground.dark,
    onSurface: Color = ColorPalette.Default.OnSurface.dark,
    onError: Color = ColorPalette.Default.OnError.dark,
    grayScale: GrayScale = ColorPalette.Default.GrayScale.dark,
): MaasColorPalette = MaasColorPalette(
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
    isLight = false,
)

@Stable
public class MaasColorPalette(
    primary: Color,
    primaryVariant: Color,
    secondary: Color,
    secondaryVariant: Color,
    background: Color,
    surface: Color,
    error: Color,
    onPrimary: Color,
    onSecondary: Color,
    onBackground: Color,
    onSurface: Color,
    onError: Color,
    grayScale: GrayScale,
    isLight: Boolean,
) {
    public var primary: Color by mutableStateOf(primary)
        private set
    public var primaryVariant: Color by mutableStateOf(primaryVariant)
        private set
    public var secondary: Color by mutableStateOf(secondary)
        private set
    public var secondaryVariant: Color by mutableStateOf(secondaryVariant)
        private set
    public var background: Color by mutableStateOf(background)
        private set
    public var surface: Color by mutableStateOf(surface)
        private set
    public var error: Color by mutableStateOf(error)
        private set
    public var onPrimary: Color by mutableStateOf(onPrimary)
        private set
    public var onSecondary: Color by mutableStateOf(onSecondary)
        private set
    public var onBackground: Color by mutableStateOf(onBackground)
        private set
    public var onSurface: Color by mutableStateOf(onSurface)
        private set
    public var onError: Color by mutableStateOf(onError)
        private set
    public var grayScale: GrayScale by mutableStateOf(grayScale)
        private set
    public var isLight: Boolean by mutableStateOf(isLight)
        private set

    public fun updateColorsFrom(other: MaasColorPalette) {
        primary = other.primary
        primaryVariant = other.primaryVariant
        secondary = other.secondary
        secondaryVariant = other.secondaryVariant
        background = other.background
        surface = other.surface
        error = other.error
        onPrimary = other.onPrimary
        onSecondary = other.onSecondary
        onBackground = other.onBackground
        onSurface = other.onSurface
        onError = other.onError
        grayScale = other.grayScale
        isLight = other.isLight
    }
}

private val Color.light: Color get() = this
private val Color.dark: Color get() = this
