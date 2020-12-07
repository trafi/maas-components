// open-sdk schema version 2
// Generated with https://github.com/trafi/mammoth-kt
// Do not edit manually.
package com.trafi.analytics

import kotlin.String

private const val mammothSchemaVersion: String = "2"

object AnalyticsEvent {
    /**
     * Tap on a specific route
     *
     * @param routeResultId Route search result id
     * @param routeId Route id
     * @param screenName Name of the active screen
     */
    fun routeTap(
        routeResultId: String,
        routeId: String,
        screenName: String = Analytics.screenName
    ): Analytics.Event = Analytics.Event(
        business = RawEvent(
            name = "RouteTap",
            parameters = mapOf(
                "event_type" to "element_tap",
                "object_name" to "Route",
                "screen_name" to screenName,
                "route_result_id" to routeResultId,
                "route_id" to routeId,
                "schema_event_id" to "765",
                "schema_version" to mammothSchemaVersion
            )
        ),
        publish = RawEvent(
            name = "element_tap",
            parameters = mapOf(
                "content" to "Route",
                "screen_name" to screenName,
                "group_id" to routeResultId,
                "item_id" to routeId,
                "achievement_id" to "765",
                "score" to mammothSchemaVersion
            )
        )
    )
}

enum class EventType(
    val value: String
) {
    SCREEN_OPEN("screen_open"),

    ELEMENT_TAP("element_tap");
}
