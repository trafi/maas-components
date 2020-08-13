package com.trafi.example.api

import com.trafi.core.model.RouteSearchResponse
import retrofit2.http.GET
import retrofit2.http.Query

interface RoutesService {
    @GET("v2/routes")
    suspend fun search(
        @Query("startLat") startLat: Double,
        @Query("startLng") startLng: Double,
        @Query("startName") startName: String? = null,
        @Query("endLat") endLat: Double,
        @Query("endLng") endLng: Double,
        @Query("endName") endName: String? = null
    ): RouteSearchResponse
}
