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

/**
 *
 *
 * Values: UNKNOWN,TRANSIT,RIDE_HAILING,SHARING,WALKING,PERSONAL_VEHICLE
 */
@Serializable
enum class RouteSegmentMode(val value: kotlin.String) {

    @SerialName(value = "UNKNOWN")
    UNKNOWN("UNKNOWN"),

    @SerialName(value = "TRANSIT")
    TRANSIT("TRANSIT"),

    @SerialName(value = "RIDE_HAILING")
    RIDE_HAILING("RIDE_HAILING"),

    @SerialName(value = "SHARING")
    SHARING("SHARING"),

    @SerialName(value = "WALKING")
    WALKING("WALKING"),

    @SerialName(value = "PERSONAL_VEHICLE")
    PERSONAL_VEHICLE("PERSONAL_VEHICLE");

    /**
     * Override toString() to avoid using the enum variable name as the value, and instead use
     * the actual value defined in the API spec file.
     *
     * This solves a problem when the variable name and its value are different, and ensures that
     * the client sends the correct enum values to the server always.
     */
    override fun toString(): String = value

    companion object {
        /**
         * Converts the provided [data] to a [String] on success, null otherwise.
         */
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is RouteSegmentMode) "$data" else null

        /**
         * Returns a valid [RouteSegmentMode] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): RouteSegmentMode? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}