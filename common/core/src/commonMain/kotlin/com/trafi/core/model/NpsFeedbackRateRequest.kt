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
 * Initial NPS feedback request, with user id and a rating
 *
 * @param rating Rating: 0-10
 * @param comment Additional comment for NPS rating, optional
 * @param contactMe User agrees for us to reach them
 */
@Serializable
data class NpsFeedbackRateRequest(

    /* Rating: 0-10 */
    @SerialName(value = "rating") @Required val rating: kotlin.Int,

    /* Additional comment for NPS rating, optional */
    @SerialName(value = "comment") val comment: kotlin.String? = null,

    /* User agrees for us to reach them */
    @SerialName(value = "contactMe") val contactMe: kotlin.Boolean? = null

)