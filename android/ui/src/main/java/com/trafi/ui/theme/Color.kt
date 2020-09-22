@file:Suppress("unused")

package com.trafi.ui.theme

import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.compose.ui.graphics.Color

@Stable val Grey100 = Color(0xfff5f5f5)
@Stable val Grey200 = Color(0xffeeeeee)
@Stable val Grey300 = Color(0xffe0e0e0)
@Stable val Grey400 = Color(0xffbdbdbd)
@Stable val Grey500 = Color(0xff9e9e9e)
@Stable val Grey600 = Color(0xff757575)
@Stable val Grey700 = Color(0xff616161)
@Stable val Grey800 = Color(0xff424242)
@Stable val Grey900 = Color(0xff212121)

fun MaasTheme.lightColors(
    primary: Color = Color(0xffff1499),
    primaryVariant: Color = Color(0xffd20077),
    secondary: Color = Color(0xff73008b),
    secondaryVariant: Color = Color(0xff59006c),
    background: Color = Color.White,
    surface: Color = Color.White,
    error: Color = Color(0xfff22e46),
    onPrimary: Color = Color.White,
    onSecondary: Color = Color.Black,
    onBackground: Color = Grey900,
    onSurface: Color = Grey900,
    onError: Color = Color.White
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
    isLight = true
)

fun MaasTheme.darkColors(
    primary: Color = Color(0xffff1499),
    primaryVariant: Color = Color(0xffd20077),
    secondary: Color = Color(0xff73008b),
    secondaryVariant: Color = Color(0xff59006c),
    background: Color = Color.Black,
    surface: Color = Color.Black,
    error: Color = Color(0xfff22e46),
    onPrimary: Color = Color.White,
    onSecondary: Color = Color.Black,
    onBackground: Color = Color.White,
    onSurface: Color = Color.White,
    onError: Color = Color.White
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
    isLight = false
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
    isLight: Boolean
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
        isLight = other.isLight
    }
}
