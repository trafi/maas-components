package com.trafi.routes.ui

import androidx.compose.foundation.Text
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.ui.tooling.preview.Preview
import com.trafi.core.model.Route
import com.trafi.routes.ui.mock.mockRoute
import com.trafi.ui.unit

@Composable
fun Route(route: Route) {
    Surface(modifier = Modifier.clickable(onClick = {})) {
        Cell(
            modifier = Modifier
                .padding(horizontal = 6.unit, vertical = 3.unit),
            body = {
                Row {
                    route.segments.forEachIndexed { index, segment ->
                        RouteSegment(
                            segment,
                            modifier = Modifier.gravity(Alignment.CenterVertically)
                        )
                        if (index != route.segments.lastIndex) {
                            Spacer(modifier = Modifier.size(1.unit))
                        }
                    }
                }
                route.disruption?.let { disruption ->
                    disruption.title?.let { disruptionTitle ->
                        Row(modifier = Modifier.padding(top = 2.unit)) {
                            Text(disruption.severity.toString())
                            Spacer(modifier = Modifier.size(1.unit))
                            Text(disruptionTitle)
                        }
                    }
                }
            },
            suffix = {
                Text(
                    route.duration.text,
                    modifier = Modifier.gravity(Alignment.End),
                    style = MaterialTheme.typography.body1.copy(fontWeight = FontWeight.Bold)
                )
                route.fare?.total?.text?.let {
                    Text(
                        it,
                        modifier = Modifier.gravity(Alignment.End)
                    )
                }
            }
        )
    }
}

@Preview(showBackground = true)
@Composable
fun RoutePreview() {
    Route(mockRoute)
}

@Composable
fun Cell(
    modifier: Modifier = Modifier,
    prefix: (@Composable ColumnScope.() -> Unit)? = null,
    suffix: (@Composable ColumnScope.() -> Unit)? = null,
    body: @Composable ColumnScope.() -> Unit
) {
    Row(modifier) {
        prefix?.let { Column { it() } }
        Column { body() }
        suffix?.let { Column { it() } }
    }
}
