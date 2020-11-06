package com.trafi.routes

import com.trafi.core.ApiResult
import com.trafi.core.model.Location
import com.trafi.core.model.RoutesResult
import io.ktor.client.HttpClient
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.get
import io.ktor.client.request.header
import io.ktor.client.request.parameter
import io.ktor.http.ContentType
import io.ktor.http.contentType
import kotlinx.serialization.json.Json

class RoutesApi(private val baseApiUrl: String, private val apiKey: String) {
    private val httpClient = HttpClient {
        install(JsonFeature) {
            val json = Json {
                isLenient = true
                ignoreUnknownKeys = true
            }
            serializer = KotlinxSerializer(json)
        }
    }

    suspend fun search(start: Location, end: Location): ApiResult<RoutesResult> = try {
        val result = httpClient.get<RoutesResult>(baseApiUrl + "v1/routes") {
            contentType(ContentType.Application.Json)
            header("x-api-key", apiKey)
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
