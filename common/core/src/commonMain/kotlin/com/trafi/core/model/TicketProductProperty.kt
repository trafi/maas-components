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
 * @param valueId
 * @param id
 * @param name
 * @param `value`
 * @param description
 */
@Serializable
data class TicketProductProperty(

    @SerialName(value = "valueId") @Required val valueId: kotlin.String,

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "name") @Required val name: kotlin.String,

    @SerialName(value = "value") @Required val `value`: kotlin.String,

    @SerialName(value = "description") @Required val description: kotlin.String

)