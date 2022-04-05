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
 * Initial happiness feedback request, with user id and a rating
 *
 * @param rating
 * @param willParticipate
 * @param comment Optional comment
 */
@Serializable
data class HappinessFeedbackRateRequest(

    @SerialName(value = "rating") @Required val rating: HappinessFeedbackRating,

    @SerialName(value = "willParticipate") @Required val willParticipate: kotlin.Boolean,

    /* Optional comment */
    @SerialName(value = "comment") val comment: kotlin.String? = null

)
