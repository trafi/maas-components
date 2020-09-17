package com.trafi.ui.theme

import androidx.compose.ui.graphics.Color

@Suppress("unused")
fun MaasTheme.lightColors(
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
