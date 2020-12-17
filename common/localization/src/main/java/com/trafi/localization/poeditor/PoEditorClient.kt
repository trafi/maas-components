package com.trafi.localization.poeditor

import com.trafi.localization.LocalizationClient
import com.trafi.localization.model.ApiResult
import com.trafi.localization.model.Language
import com.trafi.localization.model.Translation
import com.trafi.localization.poeditor.model.PoEditorLanguage
import com.trafi.localization.poeditor.model.PoEditorTranslation

private data class PoEditorLanguageTranslations(
    val languageCode: String,
    val translations: List<PoEditorTranslation>
)

class PoEditorClient(apiKey: String, private val projectId: String) : LocalizationClient {
    private val api = PoEditorApi(apiKey = apiKey)

    override suspend fun getLanguages() = fetch().map { languageWithTranslations ->
        Language(
            code = languageWithTranslations.languageCode,
            translations = languageWithTranslations.translations.map { translation ->
                Translation(
                    key = translation.term,
                    value = translation.definition,
                    comment = translation.comment
                )
            }
        )
    }

    private suspend fun fetch() = when (val result = api.languages(projectId)) {
        is ApiResult.Success -> fetchLanguages(projectId, result.value)
        is ApiResult.Failure -> throw IllegalStateException(result.exception)
    }

    private suspend fun fetchLanguages(
        projectId: String,
        languages: List<PoEditorLanguage>
    ) = languages.map { language ->
        when (val result = api.exportJsonToUrl(
            projectId = projectId,
            languageCode = language.code
        )) {
            is ApiResult.Success -> fetchLanguage(language = language, url = result.value)
            is ApiResult.Failure -> throw IllegalStateException(result.exception)
        }
    }

    private suspend fun fetchLanguage(
        language: PoEditorLanguage,
        url: String
    ) = when (val result = api.parseExportedJson(url)) {
        is ApiResult.Success -> PoEditorLanguageTranslations(language.code, result.value)
        is ApiResult.Failure -> throw IllegalStateException(result.exception)
    }
}
