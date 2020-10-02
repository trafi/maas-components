package com.trafi.routes

import com.trafi.core.android.model.RoutesResult
import retrofit2.http.GET
import retrofit2.http.Query

internal interface RoutesService {
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
