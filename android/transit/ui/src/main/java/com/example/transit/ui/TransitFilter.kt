package com.example.transit.ui

import androidx.annotation.ColorInt
import androidx.annotation.DrawableRes
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.height
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.sizeIn
import androidx.compose.foundation.layout.width
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.core.model.FilterItem
import com.trafi.transit.ui.R
import com.trafi.ui.component.internal.nearby.transit.NearbyTransitFilterItemConstants
import com.trafi.ui.components.MultiSelectFilter
import com.trafi.ui.components.SingleSelectFilter
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.currentTheme
import com.trafi.ui.theme.isRound

@Composable
private val constants
    get() = NearbyTransitFilterItemConstants(currentTheme)

@Composable
fun NearbyTransitFilterItem(
    isEnabled: Boolean,
    filterItem: FilterItem
) {
    Box(
        contentAlignment = Alignment.Center,
        modifier = Modifier.sizeIn(
            minWidth = constants.itemMinWidth,
            minHeight = constants.itemMinHeight
        )
    ) {
        Surface(
            shape = if (constants.cornerRadius.isRound) {
                RoundedCornerShape(percent = 50)
            } else {
                RoundedCornerShape(constants.cornerRadius)
            },
            color = if (isEnabled) filterItem.color.toColorInt() else constants.disabledColor,
            modifier = Modifier
                .sizeIn(
                    minWidth = constants.minHeight,
                    minHeight = constants.minWidth
                )
        ) {
            val image = vectorResource(id = filterItem.icon.iconRes())
            Image(
                imageVector = image,
                modifier = Modifier
                    .width(constants.imageWidth)
                    .height(constants.imageHeight),
                colorFilter = ColorFilter.tint(color = filterItem.accentColor.toColorInt())
            )
        }
    }
}

@DrawableRes
private fun String.iconRes(): Int {
    return when (this) {
        "ubahn" -> R.drawable.providers_ubahn_xs
        "sbahn" -> R.drawable.providers_sbahn_xs
        "bus" -> R.drawable.providers_bus_xs
        "tram" -> R.drawable.providers_trams_xs
        "train" -> R.drawable.providers_train_xs
        "ferry" -> R.drawable.providers_ferry_xs
        else -> R.drawable.providers_bus_xs
    }
}

// Todo to ui?
@ColorInt
fun String?.toColorInt(@ColorInt fallback: Int = 0xFF_000000.toInt()): Color {
    var color = this?.toLongOrNull(radix = 16) ?: return Color(fallback)
    if (length == 6) {
        // if transparency is not specified, default to opaque
        color = color or 0x00000000_FF000000
    }
    return Color(color.toInt())
}

@Preview
@Composable
fun MultiFilterPreview() {
    val filters = listOfFilters()
    Column {
        Text(
            text = "Multi select",
            style = MaasTheme.typography.headingM,
            modifier = Modifier.padding(8.dp)
        )
        Text(
            text = "Deselected",
            style = MaasTheme.typography.textS,
            modifier = Modifier.padding(8.dp)
        )
        MultiSelectFilter(
            viewsItems = filters,
            enabledItems = emptyList(),
            itemView = { item, isEnabled ->
                NearbyTransitFilterItem(
                    isEnabled = isEnabled,
                    filterItem = item
                )
            },
            onItemClick = { }
        )
        Text(
            text = "Half selected",
            style = MaasTheme.typography.textS,
            modifier = Modifier.padding(8.dp)
        )
        MultiSelectFilter(
            viewsItems = filters,
            enabledItems = filters.take(3),
            itemView = { item, isEnabled ->
                NearbyTransitFilterItem(
                    isEnabled = isEnabled,
                    filterItem = item
                )
            },
            onItemClick = { }
        )
        Text(
            text = "All selected",
            style = MaasTheme.typography.textS,
            modifier = Modifier.padding(8.dp)
        )
        MultiSelectFilter(
            viewsItems = filters,
            enabledItems = filters,
            itemView = { item, isEnabled ->
                NearbyTransitFilterItem(
                    isEnabled = isEnabled,
                    filterItem = item
                )
            },
            onItemClick = { }
        )
    }
}

@Preview
@Composable
fun SingleFilterPreview() {
    val enabledFilter = listOfFilters()
    val filters = listOfFilters()
    Column {
        Text(
            text = "Single select",
            style = MaasTheme.typography.headingM,
            modifier = Modifier.padding(8.dp)
        )
        SingleSelectFilter(
            viewsItems = filters,
            enabledItem = enabledFilter.first(),
            itemView = { item, isEnabled ->
                NearbyTransitFilterItem(isEnabled = isEnabled, filterItem = item)
            },
            onItemClick = { }
        )
    }
}
