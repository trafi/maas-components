package com.trafi.ui.theme.internal

object ColorPalette {
    val White = Color(0xffffffff)
    val Black = Color(0xff000000)

    val Gray100 = Color(0xfff5f5f5)
    val Gray200 = Color(0xffeeeeee)
    val Gray300 = Color(0xffe0e0e0)
    val Gray400 = Color(0xffbdbdbd)
    val Gray500 = Color(0xff9e9e9e)
    val Gray600 = Color(0xff757575)
    val Gray700 = Color(0xff616161)
    val Gray800 = Color(0xff424242)
    val Gray900 = Color(0xff212121)

    object DefaultLight {
        val Primary = Color(0xffff1499)
        val PrimaryVariant = Color(0xffd20077)
        val Secondary = Color(0xff73008b)
        val SecondaryVariant = Color(0xff59006c)
        val Background = White
        val Surface = White
        val Error = Color(0xfff22e46)
        val OnPrimary = White
        val OnSecondary = Black
        val OnBackground = Gray900
        val OnSurface = Gray900
        val OnError = White
    }

    object DefaultDark {
        val Primary = Color(0xffff1499)
        val PrimaryVariant = Color(0xffd20077)
        val Secondary = Color(0xff73008b)
        val SecondaryVariant = Color(0xff59006c)
        val Background = Black
        val Surface = Black
        val Error = Color(0xfff22e46)
        val OnPrimary = White
        val OnSecondary = Black
        val OnBackground = White
        val OnSurface = White
        val OnError = White
    }
}
