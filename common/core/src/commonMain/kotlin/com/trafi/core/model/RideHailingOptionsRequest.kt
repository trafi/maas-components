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
 * @param from
 * @param to
 * @param providerIds
 * @param passengerCount
 * @param wheelchairAccessibleOnly
 */
@Serializable
data class RideHailingOptionsRequest(

    @SerialName(value = "from") @Required val from: Location,

    @SerialName(value = "to") @Required val to: Location,

    @SerialName(value = "providerIds") @Required val providerIds: kotlin.collections.List<kotlin.String>,

    @SerialName(value = "passengerCount") val passengerCount: kotlin.Int? = null,

    @SerialName(value = "wheelchairAccessibleOnly") val wheelchairAccessibleOnly: kotlin.Boolean? = null

)
