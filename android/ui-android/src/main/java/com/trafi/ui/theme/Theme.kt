package com.trafi.ui.theme

import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.CompositionLocalProvider
import androidx.compose.runtime.remember
import androidx.compose.runtime.staticCompositionLocalOf

@Composable
public fun MaasTheme(
    colors: MaasColorPalette = MaasTheme.colors,
    typography: MaasTypography = MaasTheme.typography,
    spacing: MaasSpacing = MaasTheme.spacing,
    cornerRadius: MaasCornerRadius = MaasTheme.cornerRadius,
    content: @Composable () -> Unit
) {
    val colorPalette = remember { colors }.apply { updateColorsFrom(colors) }
    CompositionLocalProvider(
        AmbientColor provides colorPalette,
        AmbientTypography provides typography,
        AmbientSpacing provides spacing,
        AmbientCornerRadius provides cornerRadius
    ) {
        MaterialTheme(
            colors = colors.materialColors,
            typography = typography.materialTypography,
            shapes = cornerRadius.materialShapes,
            content = content
        )
    }
}

public object MaasTheme {
    public val colors: MaasColorPalette
        @Composable get() = AmbientColor.current

    public val typography: MaasTypography
        @Composable get() = AmbientTypography.current

    public val spacing: MaasSpacing
        @Composable get() = AmbientSpacing.current

    public val cornerRadius: MaasCornerRadius
        @Composable get() = AmbientCornerRadius.current
}

private val AmbientColor = staticCompositionLocalOf { MaasTheme.lightColors() }

private val AmbientTypography = staticCompositionLocalOf { MaasTypography() }

private val AmbientSpacing = staticCompositionLocalOf { MaasSpacing() }

private val AmbientCornerRadius = staticCompositionLocalOf { MaasCornerRadius() }
