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

import com.trafi.core.model.Provider
import com.trafi.core.model.ProviderPaymentMethods
import com.trafi.core.model.SharedVehicle
import com.trafi.core.model.WalkPath
import com.trafi.core.model.Zone
import com.trafi.core.model.ZoneType

import kotlinx.serialization.*
import kotlinx.serialization.descriptors.*
import kotlinx.serialization.encoding.*

/**
 * 
 *
 * @param vehicle 
 * @param provider 
 * @param zones 
 * @param zoneTypes 
 * @param walkPath 
 * @param providerPaymentMethods 
 */
@Serializable
data class OnDemandVehicleResponse (

    @SerialName(value = "vehicle") @Required val vehicle: SharedVehicle,

    @SerialName(value = "provider") @Required val provider: Provider,

    @SerialName(value = "zones") @Required val zones: kotlin.collections.List<Zone>,

    @SerialName(value = "zoneTypes") @Required val zoneTypes: kotlin.collections.List<ZoneType>,

    @SerialName(value = "walkPath") val walkPath: WalkPath? = null,

    @SerialName(value = "providerPaymentMethods") val providerPaymentMethods: ProviderPaymentMethods? = null

)

