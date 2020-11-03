package com.trafi.locations

import com.trafi.core.android.model.AutoCompleteLocation
import com.trafi.core.android.model.AutoCompleteLocations
import com.trafi.core.android.model.ReverseGeocodeResponse
import com.trafi.core.android.model.RoutesResult
import retrofit2.http.GET
import retrofit2.http.Path
import retrofit2.http.Query

internal interface LocationsService {
    @GET("v1/autocomplete")
    suspend fun search(
        @Query("q") query: String,
        @Query("regionId") regionId: String,
        @Query("subregionId") subregionId: String? = null,
        @Query("lat") lat: Double? = null,
        @Query("lng") lng: Double? = null,
    ): AutoCompleteLocations

    @GET("v1/autocomplete/id/{locationId}")
    suspend fun resolveCoordinate(
        @Path("locationId") locationId: String,
    ): AutoCompleteLocation

    @GET("v1/location/reversegeocode")
    suspend fun reverseGeocode(
        @Query("lat") lat: Double,
        @Query("lng") lng: Double
    ): ReverseGeocodeResponse
}
