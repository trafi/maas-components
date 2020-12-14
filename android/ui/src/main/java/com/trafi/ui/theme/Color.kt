@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color
import com.trafi.ui.theme.internal.ColorPalette

fun MaasTheme.lightColors(
    primary: Color = ColorPalette.DefaultLight.Primary,
    primaryVariant: Color = ColorPalette.DefaultLight.PrimaryVariant,
    secondary: Color = ColorPalette.DefaultLight.Secondary,
    secondaryVariant: Color = ColorPalette.DefaultLight.SecondaryVariant,
    background: Color = ColorPalette.DefaultLight.Background,
    surface: Color = ColorPalette.DefaultLight.Surface,
    error: Color = ColorPalette.DefaultLight.Error,
    onPrimary: Color = ColorPalette.DefaultLight.OnPrimary,
    onSecondary: Color = ColorPalette.DefaultLight.OnSecondary,
    onBackground: Color = ColorPalette.DefaultLight.OnBackground,
    onSurface: Color = ColorPalette.DefaultLight.OnSurface,
    onError: Color = ColorPalette.DefaultLight.OnError,
    grayScale: GrayScale = ColorPalette.DefaultLight.GrayScale,
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

fun MaasTheme.darkColors(
    primary: Color = ColorPalette.DefaultDark.Primary,
    primaryVariant: Color = ColorPalette.DefaultDark.PrimaryVariant,
    secondary: Color = ColorPalette.DefaultDark.Secondary,
    secondaryVariant: Color = ColorPalette.DefaultDark.SecondaryVariant,
    background: Color = ColorPalette.DefaultDark.Background,
    surface: Color = ColorPalette.DefaultDark.Surface,
    error: Color = ColorPalette.DefaultDark.Error,
    onPrimary: Color = ColorPalette.DefaultDark.OnPrimary,
    onSecondary: Color = ColorPalette.DefaultDark.OnSecondary,
    onBackground: Color = ColorPalette.DefaultDark.OnBackground,
    onSurface: Color = ColorPalette.DefaultDark.OnSurface,
    onError: Color = ColorPalette.DefaultDark.OnError,
    grayScale: GrayScale = ColorPalette.DefaultDark.GrayScale,
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
class MaasColorPalette(
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
    var primary by mutableStateOf(primary)
        private set
    var primaryVariant by mutableStateOf(primaryVariant)
        private set
    var secondary by mutableStateOf(secondary)
        private set
    var secondaryVariant by mutableStateOf(secondaryVariant)
        private set
    var background by mutableStateOf(background)
        private set
    var surface by mutableStateOf(surface)
        private set
    var error by mutableStateOf(error)
        private set
    var onPrimary by mutableStateOf(onPrimary)
        private set
    var onSecondary by mutableStateOf(onSecondary)
        private set
    var onBackground by mutableStateOf(onBackground)
        private set
    var onSurface by mutableStateOf(onSurface)
        private set
    var onError by mutableStateOf(onError)
        private set
    var grayScale by mutableStateOf(grayScale)
        private set
    var isLight by mutableStateOf(isLight)
        private set

    fun updateColorsFrom(other: MaasColorPalette) {
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

fun String.parseColor(): Color =
    Color(android.graphics.Color.parseColor("#$this"))