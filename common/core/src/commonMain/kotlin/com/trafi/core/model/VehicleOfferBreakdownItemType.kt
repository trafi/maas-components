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
 * Values: OTHER,MEMBERSHIP,SUBSCRIPTION,ADDITIONAL,YOUNG_DRIVER,DELIVERY
 */
@Serializable
enum class VehicleOfferBreakdownItemType(val value: kotlin.String) {

    @SerialName(value = "OTHER")
    OTHER("OTHER"),

    @SerialName(value = "MEMBERSHIP")
    MEMBERSHIP("MEMBERSHIP"),

    @SerialName(value = "SUBSCRIPTION")
    SUBSCRIPTION("SUBSCRIPTION"),

    @SerialName(value = "ADDITIONAL")
    ADDITIONAL("ADDITIONAL"),

    @SerialName(value = "YOUNG_DRIVER")
    YOUNG_DRIVER("YOUNG_DRIVER"),

    @SerialName(value = "DELIVERY")
    DELIVERY("DELIVERY");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is VehicleOfferBreakdownItemType) "$data" else null

        /**
         * Returns a valid [VehicleOfferBreakdownItemType] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): VehicleOfferBreakdownItemType? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}