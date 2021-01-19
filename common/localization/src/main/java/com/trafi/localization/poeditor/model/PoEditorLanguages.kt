package com.trafi.localization.poeditor.model

import kotlinx.serialization.*

@Serializable
internal data class PoEditorLanguagesResponse(
    @SerialName(value = "response") @Required val response: PoEditorResponse,
    @SerialName(value = "result") val result: PoEditorLanguagesResult? = null,
)

@Serializable
internal data class PoEditorLanguagesResult(
    @SerialName(value = "languages") @Required val languages: kotlin.collections.List<PoEditorLanguage>
)

@Serializable
internal data class PoEditorLanguage(
    @SerialName(value = "name") @Required val name: String,
    @SerialName(value = "code") @Required val code: String,
    @SerialName(value = "updated") @Required val updated: String,
)
