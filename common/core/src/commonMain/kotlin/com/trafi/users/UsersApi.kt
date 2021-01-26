package com.trafi.users

import com.trafi.core.ApiConfiguration
import com.trafi.core.ApiResult
import com.trafi.core.CFlow
import com.trafi.core.ConfiguredApi
import com.trafi.core.api
import com.trafi.core.defaultHttpClient
import com.trafi.core.model.Profile
import com.trafi.core.model.UpdateProfileParameters
import com.trafi.core.model.User
import com.trafi.core.wrap
import io.ktor.client.HttpClient
import io.ktor.client.request.put
import kotlinx.coroutines.flow.flow

class UsersApi internal constructor(
    config: ApiConfiguration,
    private val httpClient: HttpClient,
) : ConfiguredApi by config.api() {

    constructor(config: ApiConfiguration) : this(config, config.defaultHttpClient())

    suspend fun createOrGetUser(profile: Profile? = null): ApiResult<User> = try {
        val result = httpClient.authorized.put<User>(baseApiUrl + "v1/users/me") {
            body = UpdateProfileParameters(profile)
        }
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }

    suspend fun updateProfile(profile: Profile? = null): ApiResult<User> = try {
        val result = httpClient.authorized.put<User>(baseApiUrl + "v1/users/me/profile") {
            body = UpdateProfileParameters(profile)
        }
        ApiResult.Success(result)
    } catch (e: Throwable) {
        ApiResult.Failure(e)
    }
}

fun UsersApi.createOrGetUser(profile: Profile? = null): CFlow<ApiResult<User>> = flow {
    emit(createOrGetUser(profile))
}.wrap()

fun UsersApi.updateProfile(profile: Profile? = null): CFlow<ApiResult<User>> = flow {
    emit(updateProfile(profile))
}.wrap()