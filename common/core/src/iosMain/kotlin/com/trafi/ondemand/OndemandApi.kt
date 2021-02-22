package com.trafi.ondemand

import com.trafi.core.ApiResult
import com.trafi.core.CFlow
import com.trafi.core.cFlow
import com.trafi.core.model.CreateSharingBookingRequest
import com.trafi.core.model.SharedVehiclesResponse
import com.trafi.core.model.SharingBooking

fun OndemandApi.vehicles(): CFlow<ApiResult<SharedVehiclesResponse>> =
    cFlow { emit(vehicles()) }

fun OndemandApi.startBooking(request: CreateSharingBookingRequest): CFlow<ApiResult<SharingBooking>> =
    cFlow { emit(startBooking(request)) }