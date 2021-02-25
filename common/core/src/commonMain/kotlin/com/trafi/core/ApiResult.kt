@file:Suppress("unused")

package com.trafi.core

import com.trafi.core.model.Error
import io.ktor.client.features.ResponseException
import io.ktor.client.statement.readText
import io.ktor.http.HttpStatusCode
import kotlinx.serialization.SerializationException
import kotlinx.serialization.decodeFromString
import kotlinx.serialization.json.Json

/**
 * A discriminated union that encapsulates a successful result with a value of type [T]
 * or a failure with an arbitrary [Throwable] exception.
 *
 * The generic upper bound [Any] is specified due to limitations in
 * [interop with Objective-C](https://kotlinlang.org/docs/reference/native/objc_interop.html#generics).
 */
sealed class ApiResult<out T : Any> {
    class Success<T : Any>(val value: T) : ApiResult<T>()

    sealed class Failure<T : Any>(val throwable: Throwable) : ApiResult<T>() {
        /**
         * The server returned 401 Unauthorized.
         * The Authorization header Bearer token retrieved using [ApiConfiguration.getIdToken]
         * may be invalid or expired.
         */
        class Unauthorized<T : Any>(
            throwable: Throwable,
            val httpStatusCode: Int,
            val error: com.trafi.core.model.Error? = null,
        ) : Failure<T>(throwable)

        /**
         * The server returned 403 Forbidden.
         * The x-api-key header retrieved using [ApiConfiguration.apiKey]
         * may be invalid or not subscribed to the API.
         */
        class Forbidden<T : Any>(
            throwable: Throwable,
            val httpStatusCode: Int,
            val error: com.trafi.core.model.Error? = null,
        ) : Failure<T>(throwable)

        /**
         * The server returned an error not covered by the more specific [Failure] types.
         */
        class Error<T : Any>(
            throwable: Throwable,
            val httpStatusCode: Int,
            val error: com.trafi.core.model.Error? = null,
        ) : Failure<T>(throwable)

        /**
         * The server returned an error covered by [ErrorCode.Users] types.
         */
        class UserError<T : Any>(
            throwable: Throwable,
            val httpStatusCode: Int,
            val code: ErrorCode.Users,
            val error: com.trafi.core.model.Error,
        ) : Failure<T>(throwable)

        /**
         * The server returned an error covered by [ErrorCode.Msp] types.
         */
        class MspError<T : Any>(
            throwable: Throwable,
            val httpStatusCode: Int,
            val code: ErrorCode.Msp,
            val error: com.trafi.core.model.Error,
        ) : Failure<T>(throwable)

        /**
         * A generic failure not covered by the more specific [Failure] types.
         */
        class Generic<T : Any>(
            throwable: Throwable,
        ) : Failure<T>(throwable)
    }

    internal companion object {
        internal suspend fun <T : Any> ktorFailure(throwable: Throwable): Failure<T> {
            if (throwable !is ResponseException) {
                return Failure.Generic(throwable)
            }

            val error: Error? = try {
                Json.decodeFromString(throwable.response.readText())
            } catch (e: SerializationException) {
                null
            }

            error?.let { error
                ErrorCode.Msp.parse(error?.errorCode)?.let {
                    return Failure.MspError(
                        throwable = throwable,
                        httpStatusCode = throwable.response.status.value,
                        code = it,
                        error = error,
                    )
                }

                ErrorCode.Users.parse(error?.errorCode)?.let {
                    return Failure.UserError(
                        throwable = throwable,
                        httpStatusCode = throwable.response.status.value,
                        code = it,
                        error = error,
                    )
                }
            }

            return when (throwable.response.status) {
                HttpStatusCode.Unauthorized -> Failure.Unauthorized(
                    throwable = throwable,
                    httpStatusCode = throwable.response.status.value,
                    error = error,
                )
                HttpStatusCode.Forbidden -> Failure.Forbidden(
                    throwable = throwable,
                    httpStatusCode = throwable.response.status.value,
                    error = error,
                )
                else -> Failure.Error(
                    throwable = throwable,
                    httpStatusCode = throwable.response.status.value,
                    error = error,
                )
            }
        }
    }
}
