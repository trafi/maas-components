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
 * @param amount
 * @param currency
 * @param cycle
 */
@Serializable
data class Budget(

    @SerialName(value = "amount") @Required val amount: kotlin.Double,

    @SerialName(value = "currency") @Required val currency: kotlin.String,

    @SerialName(value = "cycle") @Required val cycle: BudgetCycle

)
