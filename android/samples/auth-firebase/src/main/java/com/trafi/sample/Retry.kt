package com.trafi.sample

import com.trafi.core.ApiResult

suspend fun <T : Any> retry(
    refresh: suspend () -> Unit,
    block: suspend () -> ApiResult<T>,
): ApiResult<T> = when (val result = block()) {
    is ApiResult.Failure.Unauthorized -> {
        refresh()
        block()
    }
    else -> result
}
