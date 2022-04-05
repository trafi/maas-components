package com.trafi.routes

import com.trafi.core.ApiConfiguration
import com.trafi.core.ApiResult
import com.trafi.core.ConfiguredApi
import com.trafi.core.api
import com.trafi.core.defaultHttpClient
import com.trafi.core.model.Location
import com.trafi.core.model.RouteSearchResponse
import io.ktor.client.HttpClient
import io.ktor.client.request.get
import io.ktor.client.request.parameter

class RoutesApi internal constructor(
    config: ApiConfiguration,
    private val httpClient: HttpClient,
) : ConfiguredApi by config.api() {

    constructor(config: ApiConfiguration) : this(config, config.defaultHttpClient())

    suspend fun search(start: Location, end: Location): ApiResult<RouteSearchResponse> = try {
        val result = httpClient.get<RouteSearchResponse>(baseApiUrl + "v2/routes") {
            parameter("startLat", start.coordinate.lat)
            parameter("startLng", start.coordinate.lng)
            parameter("startName", start.name ?: start.address)
            parameter("endLat", end.coordinate.lat)
            parameter("endLng", end.coordinate.lng)
            parameter("endName", end.name ?: end.address)
        }
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.ktorFailure(e)
    }
}
