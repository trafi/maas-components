package com.trafi.ui.component

import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.lazy.LazyRowFor
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color

@Composable
private fun <T> ScrollableTappableView(
    items: List<T>,
    onItemClick: (T) -> Unit,
    itemView: @Composable (T) -> Unit,
    modifier: Modifier = Modifier,
) {
    LazyRowFor(
        items = items,
        modifier = modifier
            .fillMaxWidth()
    ) { item ->
        Surface(
            color = Color.Transparent,
            modifier = Modifier.clickable(onClick = { onItemClick(item) })
        ) {
            itemView(item)
        }
    }
}

@Composable
fun <T> MultiSelectFilter(
    items: List<T>,
    enabledItems: List<T>,
    onItemClick: (T) -> Unit,
    itemView: @Composable (T, Boolean) -> Unit,
    modifier: Modifier = Modifier,
) {
    ScrollableTappableView(
        modifier = modifier,
        items = items,
        itemView = { item ->
            itemView(item, enabledItems.find { it == item } != null)
        },
        onItemClick = onItemClick
    )
}

@Composable
fun <T> SingleSelectFilter(
    items: List<T>,
    enabledItem: T,
    onItemClick: (T) -> Unit,
    itemView: @Composable (item: T, isEnabled: Boolean) -> Unit,
    modifier: Modifier = Modifier,
) {
    ScrollableTappableView(
        modifier = modifier,
        items = items,
        itemView = { item ->
            itemView(item, enabledItem == item)
        },
        onItemClick = onItemClick
    )
}
