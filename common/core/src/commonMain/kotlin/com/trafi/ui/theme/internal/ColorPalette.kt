package com.trafi.ui.theme.internal

object ColorPalette {
    const val White = 0xffffffff
    const val Black = 0xff000000

    const val Grey100 = 0xfff5f5f5
    const val Grey200 = 0xffeeeeee
    const val Grey300 = 0xffe0e0e0
    const val Grey400 = 0xffbdbdbd
    const val Grey500 = 0xff9e9e9e
    const val Grey600 = 0xff757575
    const val Grey700 = 0xff616161
    const val Grey800 = 0xff424242
    const val Grey900 = 0xff212121

    object DefaultLight {
        const val Primary = 0xffff1499
        const val PrimaryVariant = 0xffd20077
        const val Secondary = 0xff73008b
        const val SecondaryVariant = 0xff59006c
        const val Background = White
        const val Surface = White
        const val Error = 0xfff22e46
        const val OnPrimary = White
        const val OnSecondary = Black
        const val OnBackground = Grey900
        const val OnSurface = Grey900
        const val OnError = White
    }

    object DefaultDark {
        const val Primary = 0xffff1499
        const val PrimaryVariant = 0xffd20077
        const val Secondary = 0xff73008b
        const val SecondaryVariant = 0xff59006c
        const val Background = Black
        const val Surface = Black
        const val Error = 0xfff22e46
        const val OnPrimary = White
        const val OnSecondary = Black
        const val OnBackground = White
        const val OnSurface = White
        const val OnError = White
    }
}
