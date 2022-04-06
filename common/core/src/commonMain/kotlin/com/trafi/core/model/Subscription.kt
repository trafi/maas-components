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
 * @param actionableId
 * @param providerBenefits
 * @param isCancelled
 * @param howItWorks
 * @param supportContacts
 * @param title
 * @param remainingTitle
 * @param subtitle
 * @param supportEmail
 * @param supportPhone
 */
@Serializable
data class Subscription(

    @SerialName(value = "actionableId") @Required val actionableId: kotlin.String,

    @SerialName(value = "providerBenefits") @Required val providerBenefits: kotlin.collections.List<SubscriptionProviderBenefit>,

    @SerialName(value = "isCancelled") @Required val isCancelled: kotlin.Boolean,

    @SerialName(value = "howItWorks") @Required val howItWorks: SubscriptionHowItWorks,

    @SerialName(value = "supportContacts") @Required val supportContacts: kotlin.collections.List<SupportContact>,

    @SerialName(value = "title") val title: kotlin.String? = null,

    @SerialName(value = "remainingTitle") val remainingTitle: kotlin.String? = null,

    @SerialName(value = "subtitle") val subtitle: kotlin.String? = null,

    @SerialName(value = "supportEmail") val supportEmail: kotlin.String? = null,

    @SerialName(value = "supportPhone") val supportPhone: kotlin.String? = null

)