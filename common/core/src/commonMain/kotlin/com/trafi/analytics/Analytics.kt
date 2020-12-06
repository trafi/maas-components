package com.trafi.analytics

import kotlin.native.concurrent.ThreadLocal

interface AnalyticsDelegate {
    fun dispatchEvent(event: Analytics.Event)

    val screenName: String?
    val modalName: String?
}

@ThreadLocal
object Analytics {

    private var delegate: AnalyticsDelegate? = null

    val screenName: String get() = delegate?.screenName ?: ""
    val modalName: String get() = delegate?.modalName ?: ""

    fun consume(event: Event) {
        delegate?.dispatchEvent(event)
    }

    fun set(delegate: AnalyticsDelegate) {
        this.delegate = delegate
    }

    data class Event(val business: RawEvent?, val publish: RawEvent)
}

data class RawEvent(val name: String, val parameters: Map<String, String>)
