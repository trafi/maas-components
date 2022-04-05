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
 * @param now
 * @param routes
 * @param preferredRouteId
 * @param groups
 */
@Serializable
data class RouteSearchResponse(

    @SerialName(value = "id") @Required val id: kotlin.String,

    @SerialName(value = "now") @Required val now: kotlin.String,

    @SerialName(value = "routes") @Required val routes: kotlin.collections.List<Route>,

    @SerialName(value = "preferredRouteId") val preferredRouteId: kotlin.String? = null,

    @SerialName(value = "groups") val groups: kotlin.collections.List<Group>? = null

)
