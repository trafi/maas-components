package com.trafi.ui.theme

actual class TextStyle actual constructor(fontFamily: FontFamily?, fontStyle: FontStyle, fontWeight: FontWeight, fontSize: Sp, lineHeight: Sp) {
    actual val fontFamily: FontFamily?
        get() {
            TODO()
        }

    actual fun copy(fontFamily: FontFamily): TextStyle {
        TODO()
    }
}

actual val Inter: FontFamily
    get() {
        TODO()
    }

actual class FontFamily

actual class Sp actual constructor(value: Float)

actual enum class FontStyle {
    Normal
}
actual enum class FontWeight {
    Normal, Bold
}