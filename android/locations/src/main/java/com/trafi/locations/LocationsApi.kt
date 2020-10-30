package com.trafi.locations

import android.util.Log
import com.squareup.moshi.Moshi
import com.squareup.moshi.kotlin.reflect.KotlinJsonAdapterFactory
import com.trafi.core.ApiResult
import com.trafi.core.android.model.AutoCompleteLocation
import com.trafi.core.android.model.LatLng
import com.trafi.core.android.model.Location
import okhttp3.OkHttpClient
import retrofit2.HttpException
import retrofit2.Retrofit
import retrofit2.converter.moshi.MoshiConverterFactory

class LocationsApi(baseUrl: String, apiKey: String, private val regionId: String) {

    private val moshi = Moshi.Builder()
        .add(KotlinJsonAdapterFactory())
        .build()
    private val okhttp = OkHttpClient.Builder()
        .addInterceptor { chain ->
            val request = chain.request().newBuilder()
                .addHeader("accept-language", "en") // required for v1/autocomplete
                .addHeader("x-api-key", apiKey)
                .build()
            chain.proceed(request)
        }
        .build()
    private val service: LocationsService = Retrofit.Builder()
        .client(okhttp)
        .addConverterFactory(MoshiConverterFactory.create(moshi))
        .baseUrl(baseUrl)
        .build()
        .create(LocationsService::class.java)

    suspend fun search(
        query: String,
        coordinate: LatLng? = null
    ): ApiResult<List<AutoCompleteLocation>> = try {
        val result = service.search(
            query = query,
            regionId = regionId,
            lat = coordinate?.lat,
            lng = coordinate?.lng,
        )
        ApiResult.Success(result.locations)
    } catch (e: Throwable) {
        e.logError()
        ApiResult.Failure(e)
    }

    suspend fun resolveLocation(location: AutoCompleteLocation): ApiResult<Location> = try {
        location.toLocation()?.let { ApiResult.Success(it) }
            ?: service.resolveCoordinate(location.id).toLocation()?.let { ApiResult.Success(it) }
            ?: ApiResult.Failure(IllegalArgumentException("Failed to resolve coordinate for location id ${location.id}"))
    } catch (e: Throwable) {
        e.logError()
        ApiResult.Failure(e)
    }

    suspend fun resolveAddress(coordinate: LatLng): ApiResult<String?> = try {
        val result = service.reverseGeocode(coordinate.lat, coordinate.lng)
        ApiResult.Success(result.address)
    } catch (e: Throwable) {
        e.logError()
        ApiResult.Failure(e)
    }
}

private fun Throwable.logError() = (this as? HttpException)?.let {
    Log.e("LocationsApi", response()?.errorBody()?.string().orEmpty())
}

private fun AutoCompleteLocation.toLocation(): Location? = coordinate?.let { coordinate ->
    Location(coordinate = coordinate, name = name, address = address)
}
