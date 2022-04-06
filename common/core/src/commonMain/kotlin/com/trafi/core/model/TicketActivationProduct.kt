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
 * @param name
 * @param description
 * @param properties
 * @param arguments
 * @param remainingCount
 */
@Serializable
data class TicketActivationProduct(

    @SerialName(value = "name") @Required val name: kotlin.String,

    @SerialName(value = "description") @Required val description: kotlin.String,

    @SerialName(value = "properties") @Required val properties: kotlin.collections.List<TicketProductProperty>,

    @SerialName(value = "arguments") val arguments: TicketProductArguments? = null,

    @SerialName(value = "remainingCount") val remainingCount: kotlin.Int? = null

)