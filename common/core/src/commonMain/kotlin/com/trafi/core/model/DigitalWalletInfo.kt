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
 * @param paymentTitle
 * @param paymentSubtitle
 * @param holderName
 * @param mobileNumber
 */
@Serializable
data class DigitalWalletInfo(

    @SerialName(value = "paymentTitle") @Required val paymentTitle: kotlin.String,

    @SerialName(value = "paymentSubtitle") @Required val paymentSubtitle: kotlin.String,

    @SerialName(value = "holderName") val holderName: kotlin.String? = null,

    @SerialName(value = "mobileNumber") val mobileNumber: kotlin.String? = null

)