package com.trafi.routes.ui

import androidx.compose.foundation.Text
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.ui.tooling.preview.Preview
import com.trafi.core.model.Route
import com.trafi.routes.ui.mock.mockRoute

@Composable
fun Route(route: Route) {
    Surface(modifier = Modifier.clickable(onClick = {})) {
        Column(modifier = Modifier.padding(8.dp)) {
            Row {
                route.segments.forEachIndexed { index, segment ->
                    RouteSegment(segment, modifier = Modifier.gravity(Alignment.CenterVertically))
                    if (index != route.segments.lastIndex) {
                        Spacer(modifier = Modifier.size(4.dp))
                    }
                }
            }
            route.disruption?.let { disruption ->
                disruption.title?.let { disruptionTitle ->
                    Row {
                        Text(disruption.severity.toString())
                        Spacer(modifier = Modifier.size(4.dp))
                        Text(disruptionTitle)
                    }
                }
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun RoutePreview() {
    Route(mockRoute)
}
