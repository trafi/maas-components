package com.trafi.core

sealed class ApiResult<out T> {
    class Success<T>(val value: T) : ApiResult<T>()
    class Failure<T>(val exception: Throwable) : ApiResult<T>()
}
