package com.trafi.routes.ui.internal

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.trafi.core.ApiResult
import com.trafi.core.model.Location
import com.trafi.core.model.RoutesResult
import com.trafi.routes.RoutesApi
import kotlinx.coroutines.launch

internal class RoutesViewModel(private val routesApi: RoutesApi) : ViewModel() {

    var state: RoutesResultState by mutableStateOf(RoutesResultState.NoResults)
        private set

    fun search(start: Location, end: Location) {
        state = RoutesResultState.Loading
        viewModelScope.launch {
            val result = routesApi.search(start, end)
            state = when (result) {
                is ApiResult.Success -> RoutesResultState.Loaded(result.value)
                is ApiResult.Failure -> RoutesResultState.NoResults
            }
        }
    }
}

internal sealed class RoutesResultState {
    object NoResults : RoutesResultState()
    object Loading : RoutesResultState()
    data class Loaded(val result: RoutesResult) : RoutesResultState()
}
