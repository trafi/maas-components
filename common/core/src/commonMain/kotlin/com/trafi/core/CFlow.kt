package com.trafi.core

import io.ktor.utils.io.core.Closeable
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.ExperimentalCoroutinesApi
import kotlinx.coroutines.Job
import kotlinx.coroutines.channels.awaitClose
import kotlinx.coroutines.flow.Flow
import kotlinx.coroutines.flow.FlowCollector
import kotlinx.coroutines.flow.callbackFlow
import kotlinx.coroutines.flow.flow
import kotlinx.coroutines.flow.launchIn
import kotlinx.coroutines.flow.onCompletion
import kotlinx.coroutines.flow.onEach

/**
 * An extension to [Flow] that adds a [watch] method which allows collecting
 * the [Flow] using a callback. The flow is collected on [Dispatchers.Main].
 *
 * Samples of a similar mechanism used by other Kotlin multiplatform projects.
 * - [KotlinConf App](https://github.com/JetBrains/kotlinconf-app/blob/d56c3383d52dfdc32ba449d8daf9b9f633dd1d08/common/src/mobileMain/kotlin/org/jetbrains/kotlinconf/FlowUtils.kt)
 * - [GitFox SDK](https://gitlab.com/terrakok/gitlab-client/-/blob/33181b71776eae2cc2d8f598f7b19f7f5620687c/sdk/src/iosMain/kotlin/gitfox/adapter/IosCoroutineUtils.kt)
 *
 * The generic upper bound [Any] is specified due to limitations in
 * [interop with Objective-C](https://kotlinlang.org/docs/reference/native/objc_interop.html#generics).
 */
class CFlow<out T : Any>(private val origin: Flow<T>) : Flow<T> by origin {
    fun watch(block: (T) -> Unit, completion: () -> Unit): Closeable {
        val job = Job()

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

    /**
     * [producer] is called with a lambda to produce elements and must return a cancellation lambda to call on close.
     * [onCompleted] is called with a lambda that must be called when the producer completes.
     */
    @Suppress("unused")
    @ExperimentalCoroutinesApi
    constructor(producer: ((T) -> Unit) -> () -> Unit, onCompleted: (() -> Unit) -> Unit) : this(
        callbackFlow {
            onCompleted { close() }
            val cancellation = producer { offer(it) }
            awaitClose { cancellation() }
        }
    )
}

internal fun <T : Any> Flow<T>.wrap(): CFlow<T> = CFlow(this)
internal fun <T : Any> cFlow(block: suspend FlowCollector<T>.() -> Unit): CFlow<T> =
    flow(block).wrap()
