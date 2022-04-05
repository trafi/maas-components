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
 * Values: RESERVE,LEASE,FINISH,CANCEL,UPDATE_TRIP_START_TIME,UPDATE_TRIP_END_TIME,UPDATE_TRIP_FROM,UPDATE_TRIP_TO,CREATE_PENDING
 */
@Serializable
enum class RentalBookingAction(val value: kotlin.String) {

    @SerialName(value = "RESERVE")
    RESERVE("RESERVE"),

    @SerialName(value = "LEASE")
    LEASE("LEASE"),

    @SerialName(value = "FINISH")
    FINISH("FINISH"),

    @SerialName(value = "CANCEL")
    CANCEL("CANCEL"),

    @SerialName(value = "UPDATE_TRIP_START_TIME")
    UPDATE_TRIP_START_TIME("UPDATE_TRIP_START_TIME"),

    @SerialName(value = "UPDATE_TRIP_END_TIME")
    UPDATE_TRIP_END_TIME("UPDATE_TRIP_END_TIME"),

    @SerialName(value = "UPDATE_TRIP_FROM")
    UPDATE_TRIP_FROM("UPDATE_TRIP_FROM"),

    @SerialName(value = "UPDATE_TRIP_TO")
    UPDATE_TRIP_TO("UPDATE_TRIP_TO"),

    @SerialName(value = "CREATE_PENDING")
    CREATE_PENDING("CREATE_PENDING");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is RentalBookingAction) "$data" else null

        /**
         * Returns a valid [RentalBookingAction] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): RentalBookingAction? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}
