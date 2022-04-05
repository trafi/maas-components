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
 * @param id
 * @param type
 * @param name
 * @param icon
 * @param address
 * @param schedules
 * @param transports
 * @param coordinate
 * @param direction
 */
@Serializable
data class AutoCompleteLocation(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "type") @Required val type: LocationType,

    @SerialName(value = "name") @Required val name: kotlin.String,

    @SerialName(value = "icon") val icon: kotlin.String? = null,

    @SerialName(value = "address") val address: kotlin.String? = null,

    @SerialName(value = "schedules") val schedules: kotlin.collections.List<ScheduleAtStop>? = null,

    @SerialName(value = "transports") val transports: kotlin.collections.List<TransportIcon>? = null,

    @SerialName(value = "coordinate") val coordinate: LatLng? = null,

    @SerialName(value = "direction") val direction: kotlin.String? = null

)
