package com.trafi.localization.poeditor.model

import kotlinx.serialization.*

@Serializable
internal data class PoEditorExportResponse(
    @SerialName(value = "response") @Required val response: PoEditorResponse,
    @SerialName(value = "result") val result: PoEditorExportResult? = null,
)

@Serializable
internal data class PoEditorExportResult(
    @SerialName(value = "url") @Required val url: String
)

@Serializable
internal data class PoEditorTranslation(
    @SerialName(value = "term") @Required val term: String,
    @SerialName(value = "definition") @Required val definition: String,
    @SerialName(value = "comment") val comment: String? = null,
)
