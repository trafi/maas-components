package com.trafi.test

import kotlinx.coroutines.CoroutineScope

expect fun <T> runBlocking(block: suspend CoroutineScope.() -> T): T
