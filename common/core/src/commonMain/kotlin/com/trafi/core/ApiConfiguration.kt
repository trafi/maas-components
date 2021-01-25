package com.trafi.core

data class ApiConfiguration(
    val baseUrl: String,
    val apiKey: String,
    val getIdToken: () -> String? = { null },
)
