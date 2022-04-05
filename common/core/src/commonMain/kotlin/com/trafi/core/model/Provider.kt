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
 * @param color
 * @param features
 * @param transportIcon
 * @param wheelchairAccessible
 * @param idPrefix
 * @param accentColor
 * @param about
 * @param icon
 * @param isLevel3
 * @param supportInfo
 * @param faq
 * @param howItWorks
 * @param providerPricing
 * @param sharingPricing
 * @param rentalPricing
 * @param instantUnlockData
 * @param sharingOptions
 * @param rentalOptions
 * @param ticketOptions
 */
@Serializable
data class Provider(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "name") @Required val name: kotlin.String,

    @SerialName(value = "color") @Required val color: kotlin.String,

    @SerialName(value = "features") @Required val features: ProviderFeatures,

    @SerialName(value = "transportIcon") @Required val transportIcon: kotlin.String,

    @SerialName(value = "wheelchairAccessible") @Required val wheelchairAccessible: kotlin.Boolean,

    @SerialName(value = "idPrefix") val idPrefix: kotlin.String? = null,

    @SerialName(value = "accentColor") val accentColor: kotlin.String? = null,

    @SerialName(value = "about") val about: kotlin.String? = null,

    @SerialName(value = "icon") val icon: kotlin.String? = null,

    @SerialName(value = "isLevel3") val isLevel3: kotlin.Boolean? = null,

    @SerialName(value = "supportInfo") val supportInfo: SupportInfo? = null,

    @SerialName(value = "faq") val faq: Faq? = null,

    @SerialName(value = "howItWorks") val howItWorks: HowItWorks? = null,

    @SerialName(value = "providerPricing") val providerPricing: ProviderPricing? = null,

    @SerialName(value = "sharingPricing") val sharingPricing: VehiclePricing? = null,

    @SerialName(value = "rentalPricing") val rentalPricing: VehiclePricing? = null,

    @SerialName(value = "instantUnlockData") val instantUnlockData: InstantUnlockData? = null,

    @SerialName(value = "sharingOptions") val sharingOptions: kotlin.collections.List<SharingProviderOptions>? = null,

    @SerialName(value = "rentalOptions") val rentalOptions: kotlin.collections.List<RentalProviderOptions>? = null,

    @SerialName(value = "ticketOptions") val ticketOptions: TicketsProviderOptions? = null

)
