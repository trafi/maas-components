@file:Suppress("unused", "EXTENSION_SHADOWED_BY_MEMBER")

package com.trafi.routes

import com.trafi.core.ApiResult
import com.trafi.core.CFlow
import com.trafi.core.cFlow
import com.trafi.core.model.Location
import com.trafi.core.model.RouteSearchResponse

fun RoutesApi.search(start: Location, end: Location): CFlow<ApiResult<RouteSearchResponse>> =
    cFlow { emit(search(start, end)) }
