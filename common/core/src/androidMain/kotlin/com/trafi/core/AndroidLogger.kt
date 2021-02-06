package com.trafi.core

import android.util.Log

class AndroidLogger(private val tag: String = "maas-components") : Logger {
    override fun log(message: String) {
        Log.d(tag, message)
    }
}
