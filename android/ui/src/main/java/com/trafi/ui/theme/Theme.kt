package com.trafi.ui.theme

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Providers
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.runtime.staticAmbientOf
import androidx.compose.ui.graphics.Color

@Composable
fun MaasTheme(
    colors: MaasColorPalette = MaasTheme.colors,
    typography: MaasTypography = MaasTheme.typography,
    cornerRadius: MaasCornerRadius = MaasTheme.cornerRadius,
    content: @Composable () -> Unit
) {
    val colorPalette = remember { colors }.apply { updateColorsFrom(colors) }
    Providers(
        ColorAmbient provides colorPalette,
        TypographyAmbient provides typography,
        CornerRadiusAmbient provides cornerRadius
    ) {
        MaterialTheme(
            colors = debugMaterialColors(isSystemInDarkTheme()),
            typography = typography.materialTypography,
            shapes = cornerRadius.materialShapes,
            content = content
        )
    }
}

object MaasTheme {
    @Composable
    val colors: MaasColorPalette
        get() = ColorAmbient.current

    @Composable
    val typography: MaasTypography
        get() = TypographyAmbient.current

    @Composable
    val cornerRadius: MaasCornerRadius
        get() = CornerRadiusAmbient.current
}

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

private val ColorAmbient = staticAmbientOf { MaasTheme.lightColors() }

private val TypographyAmbient = staticAmbientOf { MaasTypography() }

private val CornerRadiusAmbient = staticAmbientOf { MaasCornerRadius() }
