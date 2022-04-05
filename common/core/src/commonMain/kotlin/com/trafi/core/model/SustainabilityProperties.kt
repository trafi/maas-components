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
 *
 *
 * @param index A relative value from 0 to 3, could also be null if there is not enough information about sustainability.
 * @param informationId The id of additional sustainability information entry.
 */
@Serializable
data class SustainabilityProperties(

    /* A relative value from 0 to 3, could also be null if there is not enough information about sustainability. */
    @SerialName(value = "index") val index: kotlin.Int? = null,

    /* The id of additional sustainability information entry. */
    @SerialName(value = "informationId") val informationId: kotlin.String? = null

)
