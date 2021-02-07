@file:Suppress("unused")

package com.trafi.core

import com.trafi.core.model.PlatformError
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
    class Success<T : Any> internal constructor(val value: T) : ApiResult<T>()

    sealed class Failure<T : Any>(val throwable: Throwable) : ApiResult<T>() {
        class Unauthorized<T : Any> internal constructor(
            throwable: Throwable,
            val httpStatusCode: Int,
            val error: PlatformError? = null,
        ) : Failure<T>(throwable)

        class Error<T : Any> internal constructor(
            throwable: Throwable,
            val httpStatusCode: Int,
            val error: PlatformError? = null,
        ) : Failure<T>(throwable)

        class Generic<T : Any> internal constructor(
            throwable: Throwable,
        ) : Failure<T>(throwable)
    }

    internal companion object {
        internal suspend fun <T : Any> ktorFailure(throwable: Throwable): Failure<T> =
            when (throwable) {
                is ResponseException -> {
                    val error: PlatformError? = try {
                        Json.decodeFromString(throwable.response.readText())
                    } catch (e: SerializationException) {
                        null
                    }

                    if (throwable.response.status == HttpStatusCode.Unauthorized) {
                        Failure.Unauthorized(
                            throwable = throwable,
                            httpStatusCode = throwable.response.status.value,
                            error = error,
                        )
                    } else {
                        Failure.Error(
                            throwable = throwable,
                            httpStatusCode = throwable.response.status.value,
                            error = error,
                        )
                    }
                }
                else -> Failure.Generic(throwable)
            }
    }
}
