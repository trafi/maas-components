package com.trafi.ui.theme

import androidx.compose.material.MaterialTheme
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Providers
import androidx.compose.runtime.remember
import androidx.compose.runtime.staticAmbientOf

@Composable
public fun MaasTheme(
    colors: MaasColorPalette = MaasTheme.colors,
    typography: MaasTypography = MaasTheme.typography,
    spacing: MaasSpacing = MaasTheme.spacing,
    cornerRadius: MaasCornerRadius = MaasTheme.cornerRadius,
    content: @Composable () -> Unit
) {
    val colorPalette = remember { colors }.apply { updateColorsFrom(colors) }
    Providers(
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

private val AmbientColor = staticAmbientOf { MaasTheme.lightColors() }

private val AmbientTypography = staticAmbientOf { MaasTypography() }

private val AmbientSpacing = staticAmbientOf { MaasSpacing() }

private val AmbientCornerRadius = staticAmbientOf { MaasCornerRadius() }
