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
 * @param title
 * @param date
 * @param payment
 * @param supportContacts
 * @param providerBenefits
 */
@Serializable
data class HistorySubscriptionItem(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "title") @Required val title: kotlin.String,

    @SerialName(value = "date") @Required val date: kotlin.String,

    @SerialName(value = "payment") @Required val payment: HistoryPayment,

    @SerialName(value = "supportContacts") @Required val supportContacts: kotlin.collections.List<SupportContact>,

    @SerialName(value = "providerBenefits") @Required val providerBenefits: kotlin.collections.List<HistorySubscriptionBenefit>

)