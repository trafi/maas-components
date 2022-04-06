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

import com.trafi.core.model.City
import com.trafi.core.model.ProviderTerms
import com.trafi.core.model.Region
import com.trafi.core.model.Term

import kotlinx.serialization.*
import kotlinx.serialization.descriptors.*
import kotlinx.serialization.encoding.*

/**
 * 
 *
 * @param regions 
 * @param cities 
 * @param terms 
 * @param providerTerms 
 */
@Serializable
data class Config (
    @SerialName(value = "regions") @Required val regions: kotlin.collections.List<Region>,

    @SerialName(value = "cities") @Required val cities: kotlin.collections.List<City>,

    @SerialName(value = "terms") @Required val terms: kotlin.collections.List<Term>,

    @SerialName(value = "providerTerms") @Required val providerTerms: kotlin.collections.List<ProviderTerms>
)
