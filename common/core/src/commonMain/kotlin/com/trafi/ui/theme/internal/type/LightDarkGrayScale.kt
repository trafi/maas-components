package com.trafi.ui.theme.internal.type

import com.trafi.ui.theme.GrayScale

class LightDarkGrayScale(val light: GrayScale, val dark: GrayScale)

internal infix fun GrayScale.dark(dark: GrayScale) = LightDarkGrayScale(light = this, dark = dark)
