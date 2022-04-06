package com.trafi.sample

import android.os.Bundle
import androidx.activity.compose.setContent
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.lifecycleScope
import com.trafi.core.ApiConfiguration
import com.trafi.core.ApiResult
import com.trafi.core.model.LatLng
import com.trafi.core.model.Location
import com.trafi.routes.RoutesApi
import com.trafi.routes.ui.RoutesResult
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        val configuration = ApiConfiguration()
        val routesApi = RoutesApi(configuration)
        lifecycleScope.launch {
            val result = routesApi.search(
                Location(LatLng(47.3769, 8.5417)),
                Location(LatLng(47.39910, 8.53346))
            )
            when (result) {
                is ApiResult.Success -> setContent {
                    RoutesResult(result.value, { route -> println(route)})
                }
                is ApiResult.Failure -> throw result.throwable
            }
        }
    }
}
