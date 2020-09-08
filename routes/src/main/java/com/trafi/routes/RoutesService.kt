package com.trafi.routes

import com.trafi.core.model.LatLng
import com.trafi.core.model.RoutesResult
import retrofit2.http.GET
import retrofit2.http.Query

interface RoutesService {
    @GET("v1/routes")
    suspend fun search(
        @Query("start.lat") startLat: Double,
        @Query("start.lng") startLng: Double,
        @Query("start.name") startName: String? = null,
        @Query("end.lat") endLat: Double,
        @Query("end.lng") endLng: Double,
        @Query("end.name") endName: String? = null
    ): RoutesResult
}

suspend fun RoutesService.search(start: LatLng, end: LatLng): RoutesResult =
    search(start.lat, start.lng, null, end.lat, end.lng, null)
