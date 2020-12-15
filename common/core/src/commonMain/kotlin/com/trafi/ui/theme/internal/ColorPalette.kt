package com.trafi.ui.theme.internal

object ColorPalette {
    val White = Color(0xffffffff)
    val Black = Color(0xff000000)
    val Warning = Color(0xffffbe15)
    val Danger = Color(0xfff22e46)
    val Success = Color(0xff00afaf)

    object DefaultLight {
        val GrayScale = GrayScale(
            gray100 = Color(0xfff5f5f5),
            gray200 = Color(0xffeeeeee),
            gray300 = Color(0xffe0e0e0),
            gray400 = Color(0xffbdbdbd),
            gray500 = Color(0xff9e9e9e),
            gray600 = Color(0xff757575),
            gray700 = Color(0xff616161),
            gray800 = Color(0xff424242),
            gray900 = Color(0xff212121),
        )
        val Primary = Color(0xffff1499)
        val PrimaryVariant = Color(0xffd20077)
        val Secondary = Color(0xff73008b)
        val SecondaryVariant = Color(0xff59006c)
        val Background = White
        val Surface = White
        val Error = Danger
        val OnPrimary = White
        val OnSecondary = Black
        val OnBackground = GrayScale.gray900
        val OnSurface = GrayScale.gray900
        val OnError = White
    }

    object DefaultDark {
        val GrayScale = GrayScale(
            gray100 = Color(0xff212121),
            gray200 = Color(0xff424242),
            gray300 = Color(0xff616161),
            gray400 = Color(0xff757575),
            gray500 = Color(0xff9e9e9e),
            gray600 = Color(0xffbdbdbd),
            gray700 = Color(0xffe0e0e0),
            gray800 = Color(0xffeeeeee),
            gray900 = Color(0xfff5f5f5),
        )
        val Primary = Color(0xffff1499)
        val PrimaryVariant = Color(0xffd20077)
        val Secondary = Color(0xff73008b)
        val SecondaryVariant = Color(0xff59006c)
        val Background = Black
        val Surface = Black
        val Error = Danger
        val OnPrimary = White
        val OnSecondary = Black
        val OnBackground = White
        val OnSurface = White
        val OnError = White
    }
}
