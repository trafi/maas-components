package com.trafi.routes.ui.internal

import com.trafi.core.model.Route
import com.trafi.core.model.RouteSearchResponse
import com.trafi.core.model.RouteSegment
import java.text.SimpleDateFormat
import java.util.Locale
import java.util.TimeZone

internal object RouteSearchTime {
    val format: SimpleDateFormat by lazy {
        SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss", Locale.US).also {
            it.timeZone = TimeZone.getTimeZone("UTC")
        }
    }
}

internal val RouteSearchResponse.nowMillis: Long
    get() = RouteSearchTime.format.parse(now)?.time ?: 0L

internal val RouteSegment.startTimeMillis: Long
    get() = RouteSearchTime.format.parse(startTime)?.time ?: 0L
internal val RouteSegment.endTimeMillis: Long
    get() = RouteSearchTime.format.parse(endTime)?.time ?: 0L

internal val Route.startTimeMillis: Long
    get() = RouteSearchTime.format.parse(startTime)?.time ?: 0L
internal val Route.endTimeMillis: Long
    get() = RouteSearchTime.format.parse(endTime)?.time ?: 0L
