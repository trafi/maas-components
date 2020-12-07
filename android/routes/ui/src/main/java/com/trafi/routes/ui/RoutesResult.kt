package com.trafi.routes.ui

import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumnFor
import androidx.compose.material.Divider
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.ui.tooling.preview.Preview
import com.trafi.analytics.Analytics
import com.trafi.analytics.AnalyticsEvent
import com.trafi.core.model.Route
import com.trafi.core.model.RoutesResult
import com.trafi.core.model.mockResult
import com.trafi.ui.theme.MaasTheme

@Composable
fun RoutesResult(
    result: RoutesResult,
    onRouteClick: (Route) -> Unit,
    modifier: Modifier = Modifier
) {
    LazyColumnFor(result.routes, modifier) { route ->
        Route(route, onClick = {
            Analytics.consume(
                AnalyticsEvent.routeTap(
                    routeResultId = result.id,
                    routeId = route.id
                )
            )
            onRouteClick(route)
        }, modifier = Modifier.fillParentMaxWidth())
        if (result.routes.indexOf(route) != result.routes.lastIndex) {
            Divider(
                modifier = Modifier
                    .padding(horizontal = MaasTheme.spacing.globalMargin)
            )
        }
    }
}

@Preview
@Composable
private fun RoutesResultPreview() {
    RoutesResult(mockResult, onRouteClick = {})
}
