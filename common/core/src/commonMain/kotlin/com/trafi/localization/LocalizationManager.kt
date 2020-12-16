package com.trafi.localization

class LocalizationManager(private val client: LocalizationClient) {
    suspend fun sync() {
        client.getLanguages()
    }
}
