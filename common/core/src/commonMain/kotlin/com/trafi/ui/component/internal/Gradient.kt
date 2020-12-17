package com.trafi.ui.component.internal

import com.trafi.ui.theme.internal.Color

class Gradient (
    val direction: Direction,
    val colors: List<Color>,
) {
    constructor(
        direction: Direction,
        colors: List<ULong>,
    ): this(direction, colors.map{ Color(it) })

    val colorValues: List<ULong>
        get() = colors.map { it.value }

    enum class Direction { Horizontal, Vertical }
}

