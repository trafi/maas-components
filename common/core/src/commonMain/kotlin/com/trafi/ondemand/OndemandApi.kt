package com.trafi.ondemand

import com.trafi.core.*
import com.trafi.core.ConfiguredApi
import com.trafi.core.api
import com.trafi.core.model.*
import io.ktor.client.*
import io.ktor.client.request.*

//class UsersApi internal constructor(
//    config: ApiConfiguration,
//    private val httpClient: HttpClient,
//) : ConfiguredApi by config.api() {

class OndemandApi internal constructor(
    config: ApiConfiguration,
    private val httpClient: HttpClient,
) : ConfiguredApi by config.api() {

    constructor(config: ApiConfiguration) : this(config, config.defaultHttpClient())

    suspend fun vehicles(): ApiResult<SharedVehiclesResponse> = try {
        val result = httpClient.authorized.get<SharedVehiclesResponse>(baseApiUrl + "v1/ondemand/sharing/vehicles")
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.ktorFailure(e)
    }

    suspend fun startBooking(request: CreateSharingBookingRequest): ApiResult<SharingBooking> = try {
        val result = httpClient.authorized.post<SharingBooking>(baseApiUrl + "v1/ondemand/sharing/bookings") {
            body = request
        }
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.ktorFailure(e)
    }
}
