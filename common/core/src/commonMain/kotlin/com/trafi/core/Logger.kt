package com.trafi.core

import io.ktor.client.features.logging.*
import io.ktor.client.features.logging.Logger

interface Logger : Logger {
    val apiLogLevel: LogLevel
        get() = LogLevel.ALL
}
