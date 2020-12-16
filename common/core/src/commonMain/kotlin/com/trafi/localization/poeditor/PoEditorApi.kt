package com.trafi.localization.poeditor

import com.trafi.core.ApiResult
import com.trafi.localization.poeditor.model.PoEditorExportResponse
import com.trafi.localization.poeditor.model.PoEditorLanguagesResponse
import com.trafi.localization.poeditor.model.PoEditorTranslation
import io.ktor.client.HttpClient
import io.ktor.client.features.defaultRequest
import io.ktor.client.features.json.JsonFeature
import io.ktor.client.features.json.serializer.KotlinxSerializer
import io.ktor.client.features.logging.DEFAULT
import io.ktor.client.features.logging.LogLevel
import io.ktor.client.features.logging.Logger
import io.ktor.client.features.logging.Logging
import io.ktor.client.request.HttpRequestBuilder
import io.ktor.client.request.accept
import io.ktor.client.request.get
import io.ktor.client.request.post
import io.ktor.client.statement.HttpResponse
import io.ktor.client.statement.readText
import io.ktor.http.ContentType
import io.ktor.http.contentType
import io.ktor.http.formUrlEncode
import io.ktor.http.isSuccess
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json

class PoEditorApi(
    private val baseApiUrl: String = "https://api.poeditor.com/",
    private val apiKey: String,
) {
    private val json = Json {
        isLenient = true
        ignoreUnknownKeys = true
    }
    private val httpClient = HttpClient {
        install(JsonFeature) {
            serializer = KotlinxSerializer(json)
        }
        defaultRequest {
            accept(ContentType.Application.Json)
        }
    }

    private fun HttpRequestBuilder.formUrlBody(vararg properties: Pair<String, String?>) {
        contentType(ContentType.Application.FormUrlEncoded)
        val tokenProperty = "api_token" to apiKey
        body = (properties.toList() + tokenProperty).formUrlEncode()
    }

    internal suspend fun languages(projectId: String) = try {
        val result = httpClient.post<PoEditorLanguagesResponse>(baseApiUrl + "v2/languages/list") {
            formUrlBody("id" to projectId)
        }
        result.result?.languages?.let {
            ApiResult.Success(it)
        } ?: ApiResult.Failure(Throwable(result.response.message))
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }

    internal suspend fun exportJsonToUrl(projectId: String, languageCode: String) = try {
        val result = httpClient.post<PoEditorExportResponse>(baseApiUrl + "v2/projects/export") {
            formUrlBody(
                "id" to projectId,
                "language" to languageCode,
                "filters" to "translated",
                "type" to "json",
            )
        }
        result.result?.url?.let {
            ApiResult.Success(it)
        } ?: ApiResult.Failure(Throwable(result.response.message))
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }

    internal suspend fun parseExportedJson(url: String) = try {
        val result = httpClient.get<HttpResponse>(url)
        if (result.status.isSuccess()) {
            val jsonString = result.readText().ifBlank { "[]" }
            ApiResult.Success(json.decodeFromString<List<PoEditorTranslation>>(jsonString))
        } else {
            ApiResult.Failure(Throwable(result.readText()))
        }
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }
}
