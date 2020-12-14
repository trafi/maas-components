package com.trafi.state

import com.trafi.core.ApiResult
import com.trafi.state.AppAction.*
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.flow

data class AppState(
    var count: Int,
    var numberFactAlert: String?,
) : State<AppState, AppAction, AppEnvironment> {
    override fun reduce(
        action: AppAction,
        environment: AppEnvironment,
    ): Pair<AppState, Effect<AppAction>> = when (action) {
        FactAlertDismissed -> {
            copy(numberFactAlert = null) to Effect.None()
        }
        DecrementButtonTapped -> {
            copy(count = this.count - 1) to Effect.None()
        }
        IncrementButtonTapped -> {
            copy(count = this.count + 1) to Effect.None()
        }
        NumberFactButtonTapped -> {
            this to environment.fetchNumberFact(count)
        }
        is NumberFactResponse -> {
            copy(
                numberFactAlert = action.result.value ?: "Could not load a number fact"
            ) to Effect.None()
        }
    }
}

sealed class AppAction {
    object FactAlertDismissed : AppAction()
    object DecrementButtonTapped : AppAction()
    object IncrementButtonTapped : AppAction()
    object NumberFactButtonTapped : AppAction()
    class NumberFactResponse(val result: ApiResult<String>) : AppAction()
}

class AppEnvironment {
    var fetchNumberFact: (count: Int) -> Effect<AppAction> = { count ->
        flow<AppAction> {
            delay(1000)
            emit(NumberFactResponse(ApiResult.Success("Number $count is great")))
        }.effect("fetch-number-fact", cancelInFlight = true)
    }
}

private val <T : Any> ApiResult<T>.value: T? get() = (this as? ApiResult.Success)?.value
