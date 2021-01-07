package com.trafi.core.model.ext

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

/**
 *
 * @param id
 * @param name
 * @param icon
 * @param color
 * @param accentColor
 * @param transportsIds
 */
@Serializable
data class FilterItem(
    @SerialName(value = "id") val id: kotlin.String,
    @SerialName(value = "name") val name: kotlin.String,
    @SerialName(value = "icon") val icon: kotlin.String,
    @SerialName(value = "color") val color: kotlin.String,
    @SerialName(value = "accentColor") val accentColor: kotlin.String,
    @SerialName(value = "transportsIds") val transportsIds: kotlin.collections.List<kotlin.String>
)

