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
 * Routes feedback rating response with a unique rating entry id
 *
 * @param feedbackEntryId Unique feedback entry ID
 */
@Serializable
data class RoutesFeedbackRateResponse(

    /* Unique feedback entry ID */
    @SerialName(value = "feedbackEntryId") @Required val feedbackEntryId: kotlin.String

)
