package com.trafi.core

import com.trafi.core.model.DrivingLicence
import com.trafi.core.model.Error
import com.trafi.core.model.Identity
import com.trafi.core.model.PhoneNumber
import com.trafi.core.model.Profile
import com.trafi.core.model.UpdateProfileParameters
import com.trafi.core.model.User
import com.trafi.core.model.UserTerms
import com.trafi.test.runBlocking
import com.trafi.users.UsersApi
import io.ktor.client.HttpClient
import io.ktor.client.engine.mock.MockEngine
import io.ktor.client.engine.mock.MockRequestHandleScope
import io.ktor.client.engine.mock.respond
import io.ktor.client.engine.mock.respondError
import io.ktor.client.request.HttpRequestData
import io.ktor.client.request.HttpResponseData
import io.ktor.content.TextContent
import io.ktor.http.ContentType
import io.ktor.http.Headers
import io.ktor.http.HttpStatusCode
import io.ktor.http.auth.HttpAuthHeader
import io.ktor.http.auth.parseAuthorizationHeader
import io.ktor.http.fullPath
import io.ktor.http.headersOf
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertTrue
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json

class ApiResultTests {
    @Test
    fun successfulResultReturns200(): Unit = runBlocking {
        val usersApi = MockUsersApi(ApiConfiguration(validApiKey, getIdToken = { validIdToken }))
        val result = usersApi.createOrGetUser()
        assertTrue(result is ApiResult.Success)
        assertEquals(mockUser, result.value)
    }

    @Test
    fun unauthorizedResultReturns401(): Unit = runBlocking {
        val usersApi = MockUsersApi(ApiConfiguration(validApiKey, getIdToken = { null }))
        val result = usersApi.createOrGetUser()
        assertTrue(result is ApiResult.Failure.Unauthorized)
        assertEquals(result.httpStatusCode, 401)
        assertNotNull(result.error)
    }

    @Test
    fun forbiddenResultReturns403(): Unit = runBlocking {
        val usersApi =
            MockUsersApi(ApiConfiguration(apiKey = "invalid", getIdToken = { validIdToken }))
        val result = usersApi.createOrGetUser()
        assertTrue(result is ApiResult.Failure.Forbidden)
        assertEquals(result.httpStatusCode, 403)
        assertNotNull(result.error)
    }

    @Test
    fun internalServerErrorReturns500(): Unit = runBlocking {
        val usersApi = MockUsersApi(ApiConfiguration(validApiKey, getIdToken = { validIdToken }))
        val result = usersApi.createOrGetUser(profile = bomb500)
        assertTrue(result is ApiResult.Failure.Error)
        assertEquals(result.httpStatusCode, 500)
    }
}

@Suppress("TestFunctionName")
private fun MockUsersApi(configuration: ApiConfiguration): UsersApi =
    UsersApi(configuration, configuration.mockHttpClient)

@Suppress("TestFunctionName")
private fun ApiConfiguration(
    apiKey: String,
    getIdToken: () -> String?,
): ApiConfiguration = ApiConfiguration(
    baseUrl = "https://trafi.com/",
    apiKey = apiKey,
    getIdToken = getIdToken,
)

private const val validApiKey = "123"
private const val validIdToken = "valid"

private val ApiConfiguration.mockHttpClient: HttpClient
    get() = httpClient(MockEngine) {
        engine {
            addHandler { request ->
                if (request.apiKey != validApiKey) {
                    respondErrorJson(
                        HttpStatusCode.Forbidden,
                        Error(developerMessage = "Invalid API key ${request.apiKey}")
                    )
                } else when (request.url.fullPath) {
                    "/v1/users/me" -> {
                        if (request.bearerToken == validIdToken) {
                            val profile = request.parseBodyJson
                            if (profile == bomb500) {
                                respondErrorJson(HttpStatusCode.InternalServerError)
                            } else {
                                respondJson(mockUser)
                            }
                        } else {
                            respondErrorJson(
                                HttpStatusCode.Unauthorized,
                                Error(developerMessage = "Invalid id token ${request.bearerToken}")
                            )
                        }
                    }
                    else -> error("Unhandled ${request.url}")
                }
            }
        }
    }

private val HttpRequestData.apiKey: String?
    get() = headers["x-api-key"]

private val HttpRequestData.bearerToken: String?
    get() {
        val rawHeader = headers["Authorization"] ?: return null
        val header = parseAuthorizationHeader(rawHeader) as? HttpAuthHeader.Single ?: return null
        if (header.authScheme != "Bearer") return null
        return header.blob
    }

private val HttpRequestData.parseBodyJson: Profile?
    get() {
        val string = (body as TextContent).text
        val params: UpdateProfileParameters = Json.decodeFromString(string)
        return params.profile
    }

private inline fun <reified T> MockRequestHandleScope.respondJson(
    content: T,
    status: HttpStatusCode = HttpStatusCode.OK,
    headers: Headers = headersOf("Content-Type" to listOf(ContentType.Application.Json.toString())),
): HttpResponseData = respond(Json.encodeToString(content), status, headers)

private inline fun MockRequestHandleScope.respondErrorJson(
    status: HttpStatusCode,
    content: Error? = null,
    headers: Headers = content?.let {
        headersOf("Content-Type" to listOf(ContentType.Application.Json.toString()))
    } ?: headersOf(),
): HttpResponseData =
    respondError(status, content?.let { Json.encodeToString(it) } ?: status.description, headers)

private val mockUser: User = User(
    id = "user_id",
    identity = Identity(
        verificationStatus = Identity.VerificationStatus.NOT_VERIFIED,
    ),
    profile = Profile(
        gender = Profile.Gender.NOT_SPECIFIED,
        ext = emptyMap(),
    ),
    phoneNumber = PhoneNumber(
        verificationStatus = PhoneNumber.VerificationStatus.NOT_VERIFIED,
    ),
    providerAccounts = emptyList(),
    drivingLicence = DrivingLicence(
        categories = emptyList(),
        verificationStatus = DrivingLicence.VerificationStatus.NOT_VERIFIED,
    ),
    terms = UserTerms(
        platformTerms = emptyList(),
        providerTerms = emptyList(),
        declinedPlatformTerms = emptyList(),
        declinedProviderTerms = emptyList(),
    ),
    paymentMethods = null,
    memberships = null,
)

private val bomb500: Profile = Profile(
    gender = Profile.Gender.NOT_SPECIFIED,
    ext = emptyMap(),
    firstName = "500"
)
