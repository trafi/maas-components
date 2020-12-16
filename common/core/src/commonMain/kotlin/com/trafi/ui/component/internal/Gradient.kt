package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.Color

class Gradient(
    val direction: Direction,
    val colors: List<Color>,
) {
    enum class Direction { Horizontal, Vertical }
}
