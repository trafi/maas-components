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
 * Values: BICYCLE,KICK_SCOOTER,CAR
 */
@Serializable
enum class PersonalVehicleType(val value: kotlin.String) {

    @SerialName(value = "BICYCLE")
    BICYCLE("BICYCLE"),

    @SerialName(value = "KICK_SCOOTER")
    KICK_SCOOTER("KICK_SCOOTER"),

    @SerialName(value = "CAR")
    CAR("CAR");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is PersonalVehicleType) "$data" else null

        /**
         * Returns a valid [PersonalVehicleType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): PersonalVehicleType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}