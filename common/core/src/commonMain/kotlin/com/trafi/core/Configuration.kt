package com.trafi.core

import kotlin.native.concurrent.ThreadLocal

// TODO does @ThreadLocal make sense??
@ThreadLocal
object Configuration {
    var api: ApiConfig? = null
    var identity: IdentityConfig? = null
}

class ApiConfig(val baseUrl: String, val apiKey: String)
class IdentityConfig(val getIdToken: () -> String?)
