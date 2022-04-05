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
 * @param schedule
 * @param trackWithStops
 * @param isRealtime
 * @param exactTimes
 * @param intervalDurations
 * @param currentStopIdx
 * @param vehiclePosition
 * @param disruption
 */
@Serializable
data class TransitTrip(

    @SerialName(value = "schedule") @Required val schedule: Schedule,

    @SerialName(value = "trackWithStops") @Required val trackWithStops: TrackWithStops,

    @SerialName(value = "isRealtime") @Required val isRealtime: kotlin.Boolean,

    @SerialName(value = "exactTimes") @Required val exactTimes: kotlin.collections.List<TransitTripExactTime>,

    @SerialName(value = "intervalDurations") @Required val intervalDurations: kotlin.collections.List<TransitTripIntervalDuration>,

    @SerialName(value = "currentStopIdx") val currentStopIdx: kotlin.Int? = null,

    @SerialName(value = "vehiclePosition") val vehiclePosition: TransitVehiclePosition? = null,

    @SerialName(value = "disruption") val disruption: TransitTripDisruption? = null

)
