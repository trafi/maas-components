package com.trafi.core

import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.LogLevel as KtorLogLevel

interface Logger : Logger {
    val apiLogLevel: ApiLogLevel
        get() = ApiLogLevel.All

    val ktorLogLevel: KtorLogLevel
        get() = when (apiLogLevel) {
            ApiLogLevel.All -> KtorLogLevel.ALL
            ApiLogLevel.Info -> KtorLogLevel.INFO
            ApiLogLevel.Headers -> KtorLogLevel.HEADERS
            ApiLogLevel.Body -> KtorLogLevel.BODY
            ApiLogLevel.None -> KtorLogLevel.NONE
        }
}

enum class ApiLogLevel {
    All,
    Headers,
    Body,
    Info,
    None;
}
