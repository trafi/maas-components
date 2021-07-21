package com.trafi.ui.component

import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.lazy.LazyRow
import androidx.compose.foundation.lazy.items
import androidx.compose.material.ExperimentalMaterialApi
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color

@OptIn(ExperimentalMaterialApi::class)
@Composable
private fun <T> ScrollableTappableView(
    items: List<T>,
    onItemClick: (T) -> Unit,
    modifier: Modifier = Modifier,
    itemContent: @Composable (T) -> Unit,
) {
    LazyRow(modifier = modifier.fillMaxWidth()) {
        items(items) { item ->
            Surface(
                onClick = { onItemClick(item) },
                color = Color.Transparent,
            ) {
                itemContent(item)
            }
        }
    }
}

@Composable
public fun <T> MultiSelectFilter(
    items: List<T>,
    enabledItems: List<T>,
    onItemClick: (T) -> Unit,
    modifier: Modifier = Modifier,
    itemContent: @Composable (T, Boolean) -> Unit,
) {
    ScrollableTappableView(
        modifier = modifier,
        items = items,
        itemContent = { item ->
            itemContent(item, enabledItems.find { it == item } != null)
        },
        onItemClick = onItemClick,
    )
}

@Composable
public fun <T> SingleSelectFilter(
    items: List<T>,
    enabledItem: T,
    onItemClick: (T) -> Unit,
    modifier: Modifier = Modifier,
    itemContent: @Composable (item: T, isEnabled: Boolean) -> Unit,
) {
    ScrollableTappableView(
        modifier = modifier,
        items = items,
        itemContent = { item ->
            itemContent(item, enabledItem == item)
        },
        onItemClick = onItemClick,
    )
}
