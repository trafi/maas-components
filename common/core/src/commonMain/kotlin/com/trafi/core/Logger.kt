package com.trafi.core

import io.ktor.client.features.logging.Logger as KtorLogger

interface Logger : KtorLogger {
    val apiLogLevel: ApiLogLevel
        get() = ApiLogLevel.All
}

enum class ApiLogLevel {
    All,
    Headers,
    Body,
    Info,
    None;
}
