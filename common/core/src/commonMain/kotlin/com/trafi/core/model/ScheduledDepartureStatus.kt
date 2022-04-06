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
 * Values: CANCELED,REPLACED_BY_REALTIME,COVERED_BY_REALTIME,UNCHANGED,UNMAPPED
 */
@Serializable
enum class ScheduledDepartureStatus(val value: kotlin.String) {

    @SerialName(value = "CANCELED")
    CANCELED("CANCELED"),

    @SerialName(value = "REPLACED_BY_REALTIME")
    REPLACED_BY_REALTIME("REPLACED_BY_REALTIME"),

    @SerialName(value = "COVERED_BY_REALTIME")
    COVERED_BY_REALTIME("COVERED_BY_REALTIME"),

    @SerialName(value = "UNCHANGED")
    UNCHANGED("UNCHANGED"),

    @SerialName(value = "UNMAPPED")
    UNMAPPED("UNMAPPED");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is ScheduledDepartureStatus) "$data" else null

        /**
         * Returns a valid [ScheduledDepartureStatus] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): ScheduledDepartureStatus? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}