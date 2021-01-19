package com.trafi.localization.model

import kotlinx.serialization.*

@Serializable
data class Translation(
    @SerialName(value = "key") @Required val key: String,
    @SerialName(value = "value") @Required val value: String,
    @SerialName(value = "comment") val comment: String? = null,
)

@Serializable
data class Language(
    @SerialName(value = "code") @Required val code: String,
    @SerialName(value = "translations") @Required val translations: List<Translation>,
)
