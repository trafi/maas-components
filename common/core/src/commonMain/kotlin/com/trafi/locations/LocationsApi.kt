package com.trafi.locations

import com.trafi.core.ApiResult
import com.trafi.core.httpClient
import com.trafi.core.model.AutoCompleteLocation
import com.trafi.core.model.AutoCompleteLocations
import com.trafi.core.model.LatLng
import com.trafi.core.model.Location
import com.trafi.core.model.ReverseGeocodeResponse
import io.ktor.client.features.defaultRequest
import io.ktor.client.request.get
import io.ktor.client.request.header
import io.ktor.client.request.parameter

class LocationsApi(
    private val baseApiUrl: String,
    apiKey: String,
    private val regionId: String
) {
    private val httpClient = httpClient(apiKey = apiKey).config {
        defaultRequest {
            header("accept-language", "en") // required for v1/autocomplete
        }
    }

    suspend fun search(
        query: String,
        coordinate: LatLng? = null
    ): ApiResult<List<AutoCompleteLocation>> = try {
        val result = httpClient.get<AutoCompleteLocations>(baseApiUrl + "v1/autocomplete") {
            parameter("q", query)
            parameter("regionId", regionId)
            parameter("subregionId", null)
            parameter("lat", coordinate?.lat)
            parameter("lng", coordinate?.lng)
        }
        ApiResult.Success(result.locations)
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }

    suspend fun resolveLocation(location: AutoCompleteLocation): ApiResult<Location> = try {
        location.toLocation()?.let { ApiResult.Success(it) }
            ?: httpClient.get<AutoCompleteLocation>(baseApiUrl + "v1/autocomplete/id/${location.id}")
                .toLocation()?.let { ApiResult.Success(it) }
            ?: ApiResult.Failure(IllegalArgumentException("Failed to resolve coordinate for location id ${location.id}"))
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }

    suspend fun resolveAddress(coordinate: LatLng): ApiResult<String?> = try {
        val result =
            httpClient.get<ReverseGeocodeResponse>(baseApiUrl + "v1/location/reversegeocode") {
                parameter("lat", coordinate.lat)
                parameter("lng", coordinate.lng)
            }
        ApiResult.Success(result.address)
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }
}

private fun AutoCompleteLocation.toLocation(): Location? = coordinate?.let { coordinate ->
    Location(coordinate = coordinate, name = name, address = address)
}
