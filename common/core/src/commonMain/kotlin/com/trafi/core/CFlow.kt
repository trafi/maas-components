package com.trafi.core

import io.ktor.utils.io.core.Closeable
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.Job
import kotlinx.coroutines.channels.awaitClose
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.callbackFlow
import kotlinx.coroutines.flow.launchIn
import kotlinx.coroutines.flow.onCompletion
import kotlinx.coroutines.flow.onEach

class CFlow<T>(private val origin: Flow<T>, val cancellationId: String? = null, val cancelInFlight: Boolean = true) : Flow<T> by origin {
    fun watch(block: (T) -> Unit, completion: () -> Unit): Closeable {
        val job = Job(/*ConferenceService.coroutineContext[Job]*/)

        onEach {
            block(it)
        }.onCompletion {
            completion()
        }.launchIn(CoroutineScope(Dispatchers.Main + job))

        return object : Closeable {
            override fun close() {
                job.cancel()
            }
        }
    }

    constructor(producer: ((T) -> Unit) -> () -> Unit, completed: (() -> Unit) -> Unit, cancellationId: String?, cancelInFlight: Boolean) : this(
        callbackFlow {
            completed { close() }
            val cancellation = producer { offer(it) }
            awaitClose { cancellation() }
        },
        cancellationId,
        cancelInFlight
    )

}

val <T> Flow<T>.asCFlow get(): CFlow<T> = CFlow(this)
