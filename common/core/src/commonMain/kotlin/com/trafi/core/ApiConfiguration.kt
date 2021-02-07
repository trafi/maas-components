package com.trafi.core

/**
 * [getIdToken] - lambda that should always return the latest id token. Used for authenticated requests.
 * [logger] - if specified, logs all network requests & responses.
 */
data class ApiConfiguration(
    val baseUrl: String,
    val apiKey: String,
    val getIdToken: () -> String? = { null },
    val logger: Logger? = null,
)
