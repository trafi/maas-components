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
 * @param transit
 * @param walking
 * @param transitWaiting
 * @param finished
 */
@Serializable
data class ActiveTripStepFeedbackConfig(

    @SerialName(value = "transit") @Required val transit: kotlin.collections.List<ActiveTripStepFeedbackCategory>,

    @SerialName(value = "walking") @Required val walking: kotlin.collections.List<ActiveTripStepFeedbackCategory>,

    @SerialName(value = "transitWaiting") @Required val transitWaiting: kotlin.collections.List<ActiveTripStepFeedbackCategory>,

    @SerialName(value = "finished") @Required val finished: kotlin.collections.List<ActiveTripStepFeedbackCategory>

)
