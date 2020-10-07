@file:Suppress("unused")

package com.trafi.ui.theme

expect inline class Dp(val value: Float)

val Int.dp: Dp get() = Dp(this.toFloat())
val Float.dp: Dp get() = Dp(this)

object CornerRadius {
    val none: Dp = 0.dp
    val xxs: Dp = 4.dp
    val xs: Dp = 6.dp
    val sm: Dp = 8.dp
    val lg: Dp = 12.dp
    val xl: Dp = 20.dp
    val round: Dp = Int.MAX_VALUE.dp //Dp.Infinity
}

internal val Dp.isRound: Boolean
    get() = this == CornerRadius.round

data class MaasCornerRadius(
    val buttonRadius: Dp = CornerRadius.round
)
