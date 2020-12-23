package com.trafi.ui

import androidx.compose.foundation.*
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.ui.component.internal.RouteSearchTabConstants
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.currentTheme
import com.trafi.ui.theme.darkColors

@Composable
private val constants
    get() = RouteSearchTabConstants(currentTheme)

data class TabItem(
    val id: String,
    val icon: String,
    val active: Boolean,
    val duration: String?,
    val price: String?,
)

@OptIn(ExperimentalLayout::class)
@Composable
fun RouteSearchTab(
    tabItem: TabItem,
    isSelected: Boolean,
    onRouteTabClick: () -> Unit,
    modifier: Modifier = Modifier,
) {
    Card(
        shape = RoundedCornerShape(constants.borderRadius),
        border = BorderStroke(constants.borderWidth,
            color = if (isSelected) constants.borderColorActive else constants.defaultBackgroundColor),
        modifier = modifier
            .preferredWidth(IntrinsicSize.Min)
            .padding(constants.padding)
            .widthIn(min = constants.minTabWidth)
            .heightIn(min = constants.minTabHeight),
    ) {
        Box(
            modifier = Modifier
                .fillMaxWidth()
                .clickable(onClick = onRouteTabClick)
                .background(if (isSelected) constants.activeBackgroundColor else constants.defaultBackgroundColor)
        ) {
            Column(
                modifier = Modifier
                    .align(Alignment.Center)
                    .padding(constants.padding)
            ) {
                Image(
                    vectorResource(id = R.drawable.ic_route_search_bike_s),
                    colorFilter = ColorFilter.tint(constants.contentColorPrimary),
                    modifier = Modifier
                        .align(Alignment.CenterHorizontally)
                        .width(constants.iconWidth)
                        .height(constants.iconHeight)
                        .padding(bottom = constants.spacerBelowIcon)
                )
                Text(
                    text = tabItem.duration ?: "--",
                    color = constants.contentColorPrimary,
                    modifier = Modifier
                        .align(Alignment.CenterHorizontally)
                        .padding(bottom = constants.spacerBelowTitle),
                    style = constants.titleStyle,
                )
                Text(
                    tabItem.price ?: "--",
                    color = constants.contentColorSecondary,
                    modifier = Modifier.align(Alignment.CenterHorizontally),
                    style = constants.subtitleStyle
                )
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun ActiveRouteSearchTabPreview() {
    RouteSearchTab(
        tabItem = TabItem(
            id = "1",
            icon = "",
            duration = "13min",
            price = "$15",
            active = true
        ),
        isSelected = true,
        modifier = Modifier.width(150.dp).padding(10.dp),
        onRouteTabClick = {},
    )
}

@Preview(showBackground = true)
@Composable
fun RouteSearchTabPreview() {
    RouteSearchTab(
        tabItem = TabItem(
            id = "1",
            icon = "",
            duration = "13min",
            price = "$15",
            active = true
        ),
        isSelected = false,
        onRouteTabClick = {},
    )
}

@Preview(showBackground = true)
@Composable
fun ActiveRouteSearchTabDarkPreview() {
    MaasTheme(colors = MaasTheme.darkColors()) {
        RouteSearchTab(
            tabItem = TabItem(
                id = "1",
                icon = "",
                duration = "13min",
                price = "$15",
                active = true
            ),
            isSelected = true,
            onRouteTabClick = {},
        )
    }
}

@Preview(showBackground = true)
@Composable
fun RouteSearchTabDarkPreview() {
    MaasTheme(colors = MaasTheme.darkColors()) {
        RouteSearchTab(
            tabItem = TabItem(
                id = "1",
                icon = "",
                duration = "13min",
                price = "$15",
                active = true
            ),
            isSelected = false,
            onRouteTabClick = {},
        )
    }
}