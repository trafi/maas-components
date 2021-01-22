package com.trafi.core

/**
 * A discriminated union that encapsulates a successful result with a value of type [T]
 * or a failure with an arbitrary [Throwable] exception.
 *
 * The generic upper bound [Any] is specified due to limitations in
 * [interop with Objective-C](https://kotlinlang.org/docs/reference/native/objc_interop.html#generics).
 */
sealed class ApiResult<out T : Any> {
    class Success<T : Any>(val value: T) : ApiResult<T>()
    class Failure<T : Any>(val exception: Throwable) : ApiResult<T>()
}
