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
 * @param bookingId
 * @param providerId
 * @param userLocation
 */
@Serializable
data class ResumeSharingLeaseRequest(

    @SerialName(value = "bookingId") @Required val bookingId: kotlin.String,

    @SerialName(value = "providerId") val providerId: kotlin.String? = null,

    @SerialName(value = "userLocation") val userLocation: LatLng? = null

)
