package com.trafi.routes.android

import android.util.Log
import com.squareup.moshi.Moshi
import com.squareup.moshi.kotlin.reflect.KotlinJsonAdapterFactory
import com.trafi.core.ApiResult
import com.trafi.core.android.model.Location
import com.trafi.core.android.model.RoutesResult
import com.trafi.routes.RoutesService
import okhttp3.OkHttpClient
import retrofit2.HttpException
import retrofit2.Retrofit
import retrofit2.converter.moshi.MoshiConverterFactory

class RoutesApi(baseUrl: String, apiKey: String) {

    private val moshi = Moshi.Builder()
        .add(KotlinJsonAdapterFactory())
        .build()
    private val okhttp = OkHttpClient.Builder()
        .addInterceptor { chain ->
            val request = chain.request().newBuilder().addHeader("x-api-key", apiKey).build()
            chain.proceed(request)
        }
        .build()
    private val service: RoutesService = Retrofit.Builder()
        .client(okhttp)
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
