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
 * @param currency Currency of the given prices and money amounts.
 * @param originalPrice The total original price of the refund offer.  This is the original price of all bookings for which a refund offer is requested.
 * @param refundableAmount The refundable amount of the refund offer.  This is the actual amount that can be refunded -  taking into account the excess and the used part.  If this refundable amount is 0, then nothing is refundable.
 * @param refundOfferId The refund offer id.  This id can be used to refund the ticket.
 */
@Serializable
data class GetTicketRefundOfferResponse(

    /* Currency of the given prices and money amounts. */
    @SerialName(value = "currency") @Required val currency: kotlin.String,

    /* The total original price of the refund offer.  This is the original price of all bookings for which a refund offer is requested. */
    @SerialName(value = "originalPrice") @Required val originalPrice: kotlin.Double,

    /* The refundable amount of the refund offer.  This is the actual amount that can be refunded -  taking into account the excess and the used part.  If this refundable amount is 0, then nothing is refundable. */
    @SerialName(value = "refundableAmount") @Required val refundableAmount: kotlin.Double,

    /* The refund offer id.  This id can be used to refund the ticket. */
    @SerialName(value = "refundOfferId") @Required val refundOfferId: kotlin.String

)