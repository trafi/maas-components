package com.trafi.ui.theme.internal.type

class LightDarkColor(val light: Color, val dark: Color)

internal infix fun Color.dark(dark: Color) = LightDarkColor(light = this, dark = dark)
