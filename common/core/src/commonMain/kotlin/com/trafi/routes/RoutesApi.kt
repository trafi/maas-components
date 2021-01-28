package com.trafi.routes

import com.trafi.core.ApiConfiguration
import com.trafi.core.ApiResult
import com.trafi.core.ConfiguredApi
import com.trafi.core.api
import com.trafi.core.defaultHttpClient
import com.trafi.core.model.Location
import com.trafi.core.model.RoutesResult
import io.ktor.client.HttpClient
import io.ktor.client.request.get
import io.ktor.client.request.parameter

class RoutesApi internal constructor(
    config: ApiConfiguration,
    private val httpClient: HttpClient,
) : ConfiguredApi by config.api() {

    constructor(config: ApiConfiguration) : this(config, config.defaultHttpClient())

    suspend fun search(start: Location, end: Location): ApiResult<RoutesResult> = try {
        val result = httpClient.get<RoutesResult>(baseApiUrl + "v1/routes") {
            parameter("start.lat", start.coordinate.lat)
            parameter("start.lng", start.coordinate.lng)
            parameter("start.name", start.name ?: start.address)
            parameter("end.lat", end.coordinate.lat)
            parameter("end.lng", end.coordinate.lng)
            parameter("end.name", end.name ?: end.address)
        }
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }
}
