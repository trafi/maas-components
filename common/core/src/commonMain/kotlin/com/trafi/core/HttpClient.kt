package com.trafi.core

import io.ktor.client.HttpClient
import io.ktor.client.HttpClientConfig
import io.ktor.client.engine.HttpClientEngineConfig
import io.ktor.client.engine.HttpClientEngineFactory
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.header
import io.ktor.http.ContentType
import io.ktor.http.contentType
import kotlinx.serialization.json.Json

internal val ApiConfiguration.defaultHttpClientConfig: HttpClientConfig<*>.() -> Unit get() = {
    install(JsonFeature) {
        val json = Json {
            isLenient = true
            ignoreUnknownKeys = true
        }
        serializer = KotlinxSerializer(json)
    }
    logger?.let { logger ->
        install(Logging) {
            this.logger = logger
            level = logger.apiLogLevel
        }
    }
    defaultRequest {
        contentType(ContentType.Application.Json)
        header("x-api-key", apiKey)
    }
}

internal fun ApiConfiguration.defaultHttpClient(): HttpClient = HttpClient(defaultHttpClientConfig)

internal fun <T : HttpClientEngineConfig> ApiConfiguration.httpClient(
    engineFactory: HttpClientEngineFactory<T>,
    config: HttpClientConfig<T>.() -> Unit,
) = HttpClient(engineFactory) {
    defaultHttpClientConfig()
    config()
}

internal interface ConfiguredApi {
    val baseApiUrl: String
    val HttpClient.authorized: HttpClient
}

internal fun ApiConfiguration.api(): ConfiguredApi = object : ConfiguredApi {
    override val baseApiUrl: String
        get() = baseUrl
    override val HttpClient.authorized: HttpClient
        get() = config {
            defaultRequest {
                getIdToken()?.let { idToken ->
                    header("Authorization", "Bearer $idToken")
                }
            }
        }
}
