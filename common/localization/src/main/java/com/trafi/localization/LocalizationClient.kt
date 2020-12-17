package com.trafi.localization

import com.trafi.localization.model.Language

interface LocalizationClient {
    suspend fun getLanguages(): List<Language>
}
