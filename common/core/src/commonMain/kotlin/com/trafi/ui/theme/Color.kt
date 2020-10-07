@file:Suppress("unused")

package com.trafi.ui.theme

expect inline class Color(val value: ULong)

private fun Color(value: Long): Color = Color(value.toULong())

object Colors {
    val White = Color(0xffffffff)
    val Black = Color(0xff000000)

    val Grey100 = Color(0xfff5f5f5)
    val Grey200 = Color(0xffeeeeee)
    val Grey300 = Color(0xffe0e0e0)
    val Grey400 = Color(0xffbdbdbd)
    val Grey500 = Color(0xff9e9e9e)
    val Grey600 = Color(0xff757575)
    val Grey700 = Color(0xff616161)
    val Grey800 = Color(0xff424242)
    val Grey900 = Color(0xff212121)
}

fun lightColors(
    primary: Color = Color(0xffff1499),
    primaryVariant: Color = Color(0xffd20077),
    secondary: Color = Color(0xff73008b),
    secondaryVariant: Color = Color(0xff59006c),
    background: Color = Colors.White,
    surface: Color = Colors.White,
    error: Color = Color(0xfff22e46),
    onPrimary: Color = Colors.White,
    onSecondary: Color = Colors.Black,
    onBackground: Color = Colors.Grey900,
    onSurface: Color = Colors.Grey900,
    onError: Color = Colors.White
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

fun darkColors(
    primary: Color = Color(0xffff1499),
    primaryVariant: Color = Color(0xffd20077),
    secondary: Color = Color(0xff73008b),
    secondaryVariant: Color = Color(0xff59006c),
    background: Color = Colors.Black,
    surface: Color = Colors.Black,
    error: Color = Color(0xfff22e46),
    onPrimary: Color = Colors.White,
    onSecondary: Color = Colors.Black,
    onBackground: Color = Colors.White,
    onSurface: Color = Colors.White,
    onError: Color = Colors.White
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

data class MaasColorPalette(
    val primary: Color,
    val primaryVariant: Color,
    val secondary: Color,
    val secondaryVariant: Color,
    val background: Color,
    val surface: Color,
    val error: Color,
    val onPrimary: Color,
    val onSecondary: Color,
    val onBackground: Color,
    val onSurface: Color,
    val onError: Color,
    val isLight: Boolean
)
