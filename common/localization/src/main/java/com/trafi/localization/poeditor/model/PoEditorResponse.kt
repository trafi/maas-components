package com.trafi.localization.poeditor.model

import kotlinx.serialization.*

@Serializable
internal data class PoEditorResponse(
    @SerialName(value = "status") val status: String,
    @SerialName(value = "code") val code: String,
    @SerialName(value = "message") val message: String,
)
