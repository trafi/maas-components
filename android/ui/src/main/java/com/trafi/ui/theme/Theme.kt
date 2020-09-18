package com.trafi.ui.theme

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Providers
import androidx.compose.runtime.remember
import androidx.compose.runtime.staticAmbientOf

@Composable
fun MaasTheme(
    colors: MaasColorPalette = MaasTheme.colors,
    typography: MaasTypography = MaasTheme.typography,
    spacing: MaasSpacing = MaasTheme.spacing,
    cornerRadius: MaasCornerRadius = MaasTheme.cornerRadius,
    content: @Composable () -> Unit
) {
    val colorPalette = remember { colors }.apply { updateColorsFrom(colors) }
    Providers(
        ColorAmbient provides colorPalette,
        TypographyAmbient provides typography,
        SpacingAmbient provides spacing,
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
    val spacing: MaasSpacing
        get() = SpacingAmbient.current

    @Composable
    val cornerRadius: MaasCornerRadius
        get() = CornerRadiusAmbient.current
}

private val ColorAmbient = staticAmbientOf { MaasTheme.lightColors() }

private val TypographyAmbient = staticAmbientOf { MaasTypography() }

private val SpacingAmbient = staticAmbientOf { MaasSpacing() }

private val CornerRadiusAmbient = staticAmbientOf { MaasCornerRadius() }
