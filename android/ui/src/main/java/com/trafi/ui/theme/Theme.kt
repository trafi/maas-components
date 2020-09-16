package com.trafi.ui.theme

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Typography
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Immutable
import androidx.compose.runtime.Providers
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.runtime.staticAmbientOf
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.unit.Dp
import com.trafi.ui.unit

@Composable
fun MaasTheme(
    colors: MaasColorPalette = MaasTheme.colors,
    typography: Typography = MaterialTheme.typography,
    cornerRadius: MaasCornerRadius = MaasTheme.cornerRadius,
    content: @Composable () -> Unit
) {
    val colorPalette = remember { colors }.apply { updateColorsFrom(colors) }
    Providers(
        ColorAmbient provides colorPalette,
        CornerRadiusAmbient provides cornerRadius
    ) {
        MaterialTheme(
            colors = debugMaterialColors(isSystemInDarkTheme()),
            typography = typography,
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
    val cornerRadius: MaasCornerRadius
        get() = CornerRadiusAmbient.current
}

/**
 * Custom Color Palette
 * TODO dark theme??
 * TODO more semantic names??
 * TODO content colors?? onPrimary1, onPrimary2, etc
 */
@Stable
class MaasColorPalette(
    primary1: Color,
    primary2: Color,
    primary3: Color,
    info1: Color,
    info2: Color,
    info3: Color,
    dark1: Color,
    dark2: Color,
    dark3: Color,
    dark4: Color,
    background1: Color,
    background2: Color,
    isLight: Boolean
) {
    var primary1 by mutableStateOf(primary1)
        private set
    var primary2 by mutableStateOf(primary2)
        private set
    var primary3 by mutableStateOf(primary3)
        private set
    var info1 by mutableStateOf(info1)
        private set
    var info2 by mutableStateOf(info2)
        private set
    var info3 by mutableStateOf(info3)
        private set
    var dark1 by mutableStateOf(dark1)
        private set
    var dark2 by mutableStateOf(dark2)
        private set
    var dark3 by mutableStateOf(dark3)
        private set
    var dark4 by mutableStateOf(dark4)
        private set
    var background1 by mutableStateOf(background1)
        private set
    var background2 by mutableStateOf(background2)
        private set
    var isLight by mutableStateOf(isLight)
        private set

    fun updateColorsFrom(other: MaasColorPalette) {
        primary1 = other.primary1
        primary2 = other.primary2
        primary3 = other.primary3
        info1 = other.info1
        info2 = other.info2
        info3 = other.info3
        dark1 = other.dark1
        dark2 = other.dark2
        dark3 = other.dark3
        dark4 = other.dark4
        background1 = other.background1
        background2 = other.background2
        isLight = other.isLight
    }
}

private val ColorAmbient = staticAmbientOf { lightColors() }

/** Default light theme color palette. */
fun lightColors(
    primary1: Color = Color(0xff999199),
    primary2: Color = Color(0xff665f66),
    primary3: Color = Color(0xff252424),
    info1: Color = Color(0xffffbe15),
    info2: Color = Color(0xfff22e46),
    info3: Color = Color(0xff17304d),
    dark1: Color = Color(0xff110711),
    dark2: Color = Color(0xff665f66),
    dark3: Color = Color(0xff999199),
    dark4: Color = Color(0xffe6e1e6),
    background1: Color = Color(0xffffffff),
    background2: Color = Color(0xfffaf8fa)
): MaasColorPalette = MaasColorPalette(
    primary1 = primary1,
    primary2 = primary2,
    primary3 = primary3,
    info1 = info1,
    info2 = info2,
    info3 = info3,
    dark1 = dark1,
    dark2 = dark2,
    dark3 = dark3,
    dark4 = dark4,
    background1 = background1,
    background2 = background2,
    isLight = true
)

@Immutable
data class MaasCornerRadius(val radius: Dp = 4.unit)

private val CornerRadiusAmbient = staticAmbientOf { MaasCornerRadius() }
