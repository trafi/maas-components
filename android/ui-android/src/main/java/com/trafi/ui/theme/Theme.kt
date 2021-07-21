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
        LocalColor provides colorPalette,
        LocalTypography provides typography,
        LocalSpacing provides spacing,
        LocalCornerRadius provides cornerRadius
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
        @Composable get() = LocalColor.current

    public val typography: MaasTypography
        @Composable get() = LocalTypography.current

    public val spacing: MaasSpacing
        @Composable get() = LocalSpacing.current

    public val cornerRadius: MaasCornerRadius
        @Composable get() = LocalCornerRadius.current
}

private val LocalColor = staticCompositionLocalOf { MaasTheme.lightColors() }

private val LocalTypography = staticCompositionLocalOf { MaasTypography() }

private val LocalSpacing = staticCompositionLocalOf { MaasSpacing() }

private val LocalCornerRadius = staticCompositionLocalOf { MaasCornerRadius() }
