/**
 * Core Whitelabel API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: v1
 *
 *
 * Please note:
 * This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * Do not edit this file manually.
 */

@file:Suppress(
    "ArrayInDataClass",
    "EnumEntryName",
    "RemoveRedundantQualifierName",
    "UnusedImport"
)

package com.trafi.core.model

import kotlinx.serialization.*
import kotlinx.serialization.descriptors.*
import kotlinx.serialization.encoding.*

/**
 * Can be used for informational, warning and possibly other messages
 *
 * @param text
 * @param title
 * @param icon
 */
@Serializable
data class InfoMessage(

    @SerialName(value = "text") @Required val text: kotlin.String,

    @SerialName(value = "title") val title: kotlin.String? = null,

    @SerialName(value = "icon") val icon: kotlin.String? = null

)