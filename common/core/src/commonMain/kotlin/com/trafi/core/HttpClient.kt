package com.trafi.core

import io.ktor.client.HttpClient
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.request.header
import io.ktor.http.ContentType
import io.ktor.http.contentType
import kotlinx.serialization.json.Json

internal fun httpClient(apiKey: String) = HttpClient {
    install(JsonFeature) {
        val json = Json {
            isLenient = true
            ignoreUnknownKeys = true
        }
        serializer = KotlinxSerializer(json)
    }
    defaultRequest {
        contentType(ContentType.Application.Json)
        header("x-api-key", apiKey)
    }
}

internal interface ConfiguredApi {
    val apiKey: String
    val baseApiUrl: String

    val HttpClient.authorized: HttpClient
}

internal val Configuration.configure: ConfiguredApi get() = object : ConfiguredApi {
    override val apiKey: String
        get() = api.apiKey
    override val baseApiUrl: String
        get() = api.baseUrl
    override val HttpClient.authorized: HttpClient
        get() = config {
            defaultRequest {
                identity.getIdToken()?.let { idToken ->
                    header("Authorization", "Bearer $idToken")
                }
            }
        }
}
