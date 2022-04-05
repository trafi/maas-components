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
 * @param track
 * @param stops
 * @param alternatives
 * @param providerId
 * @param exactDeparture
 * @param intervalDeparture
 */
@Serializable
data class RouteSegmentTransit(

    @SerialName(value = "schedule") @Required val schedule: Schedule,

    @SerialName(value = "track") @Required val track: Track,

    @SerialName(value = "stops") @Required val stops: kotlin.collections.List<RouteSegmentStop>,

    @SerialName(value = "alternatives") @Required val alternatives: kotlin.collections.List<TransitAlternative>,

    @SerialName(value = "providerId") val providerId: kotlin.String? = null,

    @SerialName(value = "exactDeparture") val exactDeparture: RouteExactDeparture? = null,

    @SerialName(value = "intervalDeparture") val intervalDeparture: RouteIntervalDeparture? = null

)
