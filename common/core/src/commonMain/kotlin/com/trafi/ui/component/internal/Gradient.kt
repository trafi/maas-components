package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.Color

class Gradient (
    val direction: Direction,
    val colors: List<Color>,
) {
    constructor(
        direction: Direction,
        colorValues: List<ULong>,
    ): this(direction, colorValues.map{ Color(it) })

    val colorValues: List<ULong>
        get() = colors.map { it.value }

    enum class Direction { Horizontal, Vertical }
}

