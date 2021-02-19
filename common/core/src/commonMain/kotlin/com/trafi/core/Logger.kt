package com.trafi.core

import io.ktor.client.features.logging.*
import io.ktor.client.features.logging.Logger

interface Logger : Logger {
    val apiLogLevel: ApiLogLevel
        get() = ApiLogLevel.All
}

enum class ApiLogLevel {
    All { override fun ktorLogLevel(): LogLevel = LogLevel.ALL },
    Headers { override fun ktorLogLevel(): LogLevel = LogLevel.HEADERS },
    Body { override fun ktorLogLevel(): LogLevel = LogLevel.BODY },
    Info { override fun ktorLogLevel(): LogLevel = LogLevel.INFO },
    None { override fun ktorLogLevel(): LogLevel = LogLevel.NONE };

    abstract fun ktorLogLevel(): LogLevel
}
