@file:Suppress("unused", "EXTENSION_SHADOWED_BY_MEMBER")

package com.trafi.locations

import com.trafi.core.ApiResult
import com.trafi.core.CFlow
import com.trafi.core.cFlow
import com.trafi.core.model.AutoCompleteLocation
import com.trafi.core.model.AutoCompleteLocations
import com.trafi.core.model.LatLng
import com.trafi.core.model.Location
import com.trafi.core.model.ReverseGeocodeResponse

fun LocationsApi.search(
    query: String,
    coordinate: LatLng? = null,
): CFlow<ApiResult<AutoCompleteLocations>> =
    cFlow { emit(search(query, coordinate)) }

fun LocationsApi.resolveLocation(
    location: AutoCompleteLocation,
): CFlow<ApiResult<Location>> =
    cFlow { emit(resolveLocation(location)) }

fun LocationsApi.resolveAddress(
    coordinate: LatLng,
): CFlow<ApiResult<ReverseGeocodeResponse>> =
    cFlow { emit(resolveAddress(coordinate)) }
