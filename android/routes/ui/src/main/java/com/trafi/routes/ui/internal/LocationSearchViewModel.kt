package com.trafi.routes.ui.internal

import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.setValue
import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.trafi.core.ApiResult
import com.trafi.core.android.model.AutoCompleteLocation
import com.trafi.core.android.model.Location
import com.trafi.locations.android.LocationsApi
import com.trafi.routes.ui.BuildConfig
import kotlinx.coroutines.Job
import kotlinx.coroutines.launch

internal class LocationSearchViewModel(private val locationsApi: LocationsApi) : ViewModel() {

    private var job: Job? = null
    var state: LocationSearchResultState by mutableStateOf(LocationSearchResultState.NoResults)
        private set
    var resolvedLocation: Location? by mutableStateOf(null)
        private set

    fun search(query: String) {
        job?.cancel()
        state = LocationSearchResultState.Loading
        job = viewModelScope.launch {
            val result = locationsApi.search(query)
            state = when (result) {
                is ApiResult.Success -> {
                    val results = result.value
                    if (results.isNotEmpty()) {
                        LocationSearchResultState.Loaded(results)
                    } else {
                        LocationSearchResultState.NoResults
                    }
                }
                is ApiResult.Failure -> LocationSearchResultState.NoResults
            }
        }
    }

    fun resolveLocation(location: AutoCompleteLocation) {
        job?.cancel()
        state = LocationSearchResultState.Loading
        job = viewModelScope.launch {
            resolvedLocation = (locationsApi.resolveLocation(location) as? ApiResult.Success)?.value
        }
    }

    fun resolvedLocationHandled() {
        resolvedLocation = null
    }
}

internal sealed class LocationSearchResultState {
    object NoResults : LocationSearchResultState()
    object Loading : LocationSearchResultState()
    data class Loaded(val result: List<AutoCompleteLocation>) : LocationSearchResultState()
}
