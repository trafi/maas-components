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
 * @param type
 * @param titleText
 * @param subtitleText
 * @param explanation
 * @param amount
 * @param currency
 */
@Serializable
data class BreakdownItem(

    @SerialName(value = "type") val type: VehicleOfferBreakdownItemType? = null,

    @SerialName(value = "titleText") val titleText: kotlin.String? = null,

    @SerialName(value = "subtitleText") val subtitleText: kotlin.String? = null,

    @SerialName(value = "explanation") val explanation: kotlin.String? = null,

    @SerialName(value = "amount") val amount: kotlin.Double? = null,

    @SerialName(value = "currency") val currency: kotlin.String? = null

)
