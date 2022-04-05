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
 * @param providerIds Comma separated list.
 * @param vehicleType
 * @param mode
 * @param startTime ISO 8601 date and time, including the offset from UTC, e.g. \"2018-06-14T10:15:00+02:00\".
 * @param endTime
 * @param fromStationId
 * @param userLocation
 * @param filters
 */
@Serializable
data class RentalListRequest(

    /* Comma separated list. */
    @SerialName(value = "providerIds") @Required val providerIds: kotlin.String,

    @SerialName(value = "vehicleType") @Required val vehicleType: VehicleType,

    @SerialName(value = "mode") @Required val mode: RentalTripMode,

    /* ISO 8601 date and time, including the offset from UTC, e.g. \"2018-06-14T10:15:00+02:00\". */
    @SerialName(value = "startTime") val startTime: kotlin.String? = null,

    @SerialName(value = "endTime") val endTime: kotlin.String? = null,

    @SerialName(value = "fromStationId") val fromStationId: kotlin.String? = null,

    @SerialName(value = "userLocation") val userLocation: LatLng? = null,

    @SerialName(value = "filters") val filters: kotlin.collections.List<FilterSelection>? = null

)
