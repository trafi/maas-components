package com.trafi.routes.ui

import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumnFor
import androidx.compose.material.Divider
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.ui.tooling.preview.Preview
import com.trafi.core.model.RoutesResult
import com.trafi.routes.ui.mock.mockResult
import com.trafi.ui.unit

@Composable
fun RoutesResult(result: RoutesResult, modifier: Modifier = Modifier) {
    LazyColumnFor(result.routes, modifier) { route ->
        Route(route, modifier = Modifier.fillParentMaxWidth())
        if (result.routes.indexOf(route) != result.routes.lastIndex) {
            Divider(modifier = Modifier.padding(horizontal = 6.unit))
        }
    }
}

@Preview
@Composable
fun RoutesResultPreview() {
    RoutesResult(mockResult)
}

