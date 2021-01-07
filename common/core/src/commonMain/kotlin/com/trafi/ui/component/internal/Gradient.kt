package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.Color

class Gradient(
    val direction: Direction,
    val colors: List<Color>,
) {
    constructor(
        colorValues: List<ULong>,
        direction: Direction,
    ): this(direction, colorValues.map{ Color(it) })

    val colorValues: List<ULong>
        get() = colors.map { it.value }

    enum class Direction { Horizontal, Vertical }
}

