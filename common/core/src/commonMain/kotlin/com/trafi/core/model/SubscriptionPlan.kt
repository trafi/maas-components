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
 * @param providerBenefits
 * @param benefits
 * @param price
 * @param subscribeModal
 * @param subscribeButton
 */
@Serializable
data class SubscriptionPlan(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "providerBenefits") @Required val providerBenefits: kotlin.collections.List<SubscriptionProviderBenefit>,

    @SerialName(value = "benefits") @Required val benefits: kotlin.collections.List<SubscriptionBenefit>,

    @SerialName(value = "price") @Required val price: SubscriptionPrice,

    @SerialName(value = "subscribeModal") @Required val subscribeModal: SubscribeModal,

    @SerialName(value = "subscribeButton") @Required val subscribeButton: SubscribeButton

)