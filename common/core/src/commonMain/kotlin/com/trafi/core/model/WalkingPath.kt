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
 * @param distance
 * @param start
 * @param end
 * @param startTime
 * @param endTime
 * @param shape
 * @param walkType
 */
@Serializable
data class WalkingPath(

    @SerialName(value = "distance") @Required val distance: Distance,

    @SerialName(value = "start") @Required val start: Location,

    @SerialName(value = "end") @Required val end: Location,

    @SerialName(value = "startTime") @Required val startTime: kotlin.String,

    @SerialName(value = "endTime") @Required val endTime: kotlin.String,

    @SerialName(value = "shape") @Required val shape: kotlin.String,

    @SerialName(value = "walkType") @Required val walkType: WalkType

)
