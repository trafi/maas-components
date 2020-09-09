package com.trafi.routes

import android.util.Log
import com.squareup.moshi.Moshi
import com.squareup.moshi.kotlin.reflect.KotlinJsonAdapterFactory
import com.trafi.core.ApiResult
import com.trafi.core.model.Location
import com.trafi.core.model.RoutesResult
import retrofit2.HttpException
import retrofit2.Retrofit
import retrofit2.converter.moshi.MoshiConverterFactory

class RoutesApi(baseUrl: String) {

    private val moshi = Moshi.Builder()
        .add(KotlinJsonAdapterFactory())
        .build()
    private val service: RoutesService = Retrofit.Builder()
        .addConverterFactory(MoshiConverterFactory.create(moshi))
        .baseUrl(baseUrl)
        .build()
        .create(RoutesService::class.java)

    suspend fun search(start: Location, end: Location): ApiResult<RoutesResult> = try {
        val result = service.search(
            startLat = start.coordinate.lat,
            startLng = start.coordinate.lng,
            startName = start.name ?: start.address,
            endLat = end.coordinate.lat,
            endLng = end.coordinate.lng,
            endName = end.name ?: end.address
        )
        ApiResult.Success(result)
    } catch (e: Throwable) {
        (e as? HttpException)?.let {
            Log.e("RoutesApi", e.response()?.errorBody()?.string().orEmpty())
        }
        ApiResult.Failure(e)
    }
}
