package com.trafi.routes.ui

import androidx.compose.foundation.Text
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.ColumnScope
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.ui.tooling.preview.Preview
import com.trafi.core.model.Route
import com.trafi.routes.ui.mock.mockRoute
import com.trafi.ui.theme.MaasTheme

@Composable
fun Route(route: Route, modifier: Modifier = Modifier) {
    Surface(modifier = modifier.clickable(onClick = {})) {
        Cell(
            modifier = Modifier
                .defaultMinSizeConstraints(minHeight = 64.dp)
                .padding(horizontal = MaasTheme.spacing.globalMargin, vertical = 12.dp),
            body = {
                Row {
                    route.segments.forEachIndexed { index, segment ->
                        RouteSegment(
                            segment,
                            modifier = Modifier.align(Alignment.CenterVertically)
                        )
                        if (index != route.segments.lastIndex) {
                            Spacer(modifier = Modifier.size(4.dp))
                        }
                    }
                }
                route.disruption?.let { disruption ->
                    disruption.title?.let { disruptionTitle ->
                        Row(modifier = Modifier.padding(top = 8.dp)) {
                            Text(
                                disruption.severity.toString(),
                                style = MaasTheme.typography.textM
                            )
                            Spacer(modifier = Modifier.size(4.dp))
                            Text(
                                disruptionTitle,
                                style = MaasTheme.typography.textM
                            )
                        }
                    }
                }
            },
            suffix = {
                Text(
                    route.duration.text,
                    modifier = Modifier.align(Alignment.End),
                    style = MaasTheme.typography.textL.copy(fontWeight = FontWeight.Bold),
                )
                route.fare?.total?.text?.let {
                    Text(
                        it,
                        modifier = Modifier.align(Alignment.End),
                        style = MaasTheme.typography.textM
                    )
                }
            }
        )
    }
}

@Preview(showBackground = true, widthDp = 320)
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
        Column(modifier = Modifier.weight(1f)) { body() }
        suffix?.let { Column { it() } }
    }
}
