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
 * @param id
 * @param name
 * @param namePlural
 * @param icon
 * @param color
 * @param transportType
 */
@Serializable
data class Transport(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "name") @Required val name: kotlin.String,

    @SerialName(value = "namePlural") @Required val namePlural: kotlin.String,

    @SerialName(value = "icon") @Required val icon: kotlin.String,

    @SerialName(value = "color") @Required val color: kotlin.String,

    @SerialName(value = "transportType") @Required val transportType: kotlin.String

)
