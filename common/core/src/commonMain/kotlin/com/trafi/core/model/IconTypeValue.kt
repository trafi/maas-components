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
 * Values: SINGLE,FOUR_SINGLE,SHORT_TRIP,DAY,MONTHLY,FOUR_SHORT_TRIP,TICKET_EXTENSION,SMALL_GROUP_DAY,SEVEN_DAY,BIKE_SINGLE_TRIP,BIKE_DAY,BIKE_SHORT_TRIP,MONTHLY_BICYCLE,TOURIST,TOURIST_DAY,TOURIST_GROUP,CATEGORY_SINGLE,CATEGORY_DAY,CHILDREN_DAY,CHILDREN_SINGLE,EIGHT_FLEX
 */
@Serializable
enum class IconTypeValue(val value: kotlin.String) {

    @SerialName(value = "SINGLE")
    SINGLE("SINGLE"),

    @SerialName(value = "FOUR_SINGLE")
    FOUR_SINGLE("FOUR_SINGLE"),

    @SerialName(value = "SHORT_TRIP")
    SHORT_TRIP("SHORT_TRIP"),

    @SerialName(value = "DAY")
    DAY("DAY"),

    @SerialName(value = "MONTHLY")
    MONTHLY("MONTHLY"),

    @SerialName(value = "FOUR_SHORT_TRIP")
    FOUR_SHORT_TRIP("FOUR_SHORT_TRIP"),

    @SerialName(value = "TICKET_EXTENSION")
    TICKET_EXTENSION("TICKET_EXTENSION"),

    @SerialName(value = "SMALL_GROUP_DAY")
    SMALL_GROUP_DAY("SMALL_GROUP_DAY"),

    @SerialName(value = "SEVEN_DAY")
    SEVEN_DAY("SEVEN_DAY"),

    @SerialName(value = "BIKE_SINGLE_TRIP")
    BIKE_SINGLE_TRIP("BIKE_SINGLE_TRIP"),

    @SerialName(value = "BIKE_DAY")
    BIKE_DAY("BIKE_DAY"),

    @SerialName(value = "BIKE_SHORT_TRIP")
    BIKE_SHORT_TRIP("BIKE_SHORT_TRIP"),

    @SerialName(value = "MONTHLY_BICYCLE")
    MONTHLY_BICYCLE("MONTHLY_BICYCLE"),

    @SerialName(value = "TOURIST")
    TOURIST("TOURIST"),

    @SerialName(value = "TOURIST_DAY")
    TOURIST_DAY("TOURIST_DAY"),

    @SerialName(value = "TOURIST_GROUP")
    TOURIST_GROUP("TOURIST_GROUP"),

    @SerialName(value = "CATEGORY_SINGLE")
    CATEGORY_SINGLE("CATEGORY_SINGLE"),

    @SerialName(value = "CATEGORY_DAY")
    CATEGORY_DAY("CATEGORY_DAY"),

    @SerialName(value = "CHILDREN_DAY")
    CHILDREN_DAY("CHILDREN_DAY"),

    @SerialName(value = "CHILDREN_SINGLE")
    CHILDREN_SINGLE("CHILDREN_SINGLE"),

    @SerialName(value = "EIGHT_FLEX")
    EIGHT_FLEX("EIGHT_FLEX");

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
        fun encode(data: kotlin.Any?): kotlin.String? = if (data is IconTypeValue) "$data" else null

        /**
         * Returns a valid [IconTypeValue] for [data], null otherwise.
         */
        fun decode(data: kotlin.Any?): IconTypeValue? = data?.let {
          val normalizedData = "$it".lowercase()
          values().firstOrNull { value ->
            it == value || normalizedData == "$value".lowercase()
          }
        }
    }
}

