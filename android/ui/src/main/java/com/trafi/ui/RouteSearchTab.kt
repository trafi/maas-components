package com.trafi.ui

import androidx.compose.foundation.Image
import androidx.compose.foundation.ScrollableRow
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.AmbientContentColor
import androidx.compose.material.Card
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.internal.CornerRadiusScale
import com.trafi.ui.theme.internal.SpacingScale


data class TabItem(
    val id: String,
    val icon: String,
    val name: String,
    val duration: String?,
    val price: String?,
    val active: Boolean
)

@Composable
fun RouteSearchTab(
    tabItem: TabItem,
    isTabSelected: Boolean,
    onVehicleClick: () -> Unit
) {
    Card(
        shape = RoundedCornerShape(CornerRadiusScale.xxs),
        modifier = Modifier
            .widthIn(min = 70.dp)
            .padding(SpacingScale.xxs)
            .clickable(onClick = onVehicleClick)
    ) {
        Column(
            modifier = Modifier.background(if (isTabSelected) Color.Green else Color.Blue)
        ) {
            Image(
                vectorResource(id = R.drawable.ic_route_search_bike_s),
                colorFilter = ColorFilter.tint(AmbientContentColor.current),
                modifier = Modifier.align(Alignment.CenterHorizontally).padding(top = 4.dp)
            )
            Text(
                tabItem.duration ?: "--",
                modifier = Modifier.align(Alignment.CenterHorizontally),
                style = MaasTheme.typography.textL.copy(fontWeight = FontWeight.Bold),
            )
            Text(
                tabItem.price ?: "--",
                modifier = Modifier.align(Alignment.CenterHorizontally).padding(bottom = 4.dp),
                style = MaasTheme.typography.textM
            )
        }
    }
}

@Preview(showBackground = true)
@Composable
fun PreviewTransportTypeSegment() {
    RouteSearchTab(TabItem(
        id = "1",
        icon = "",
        name = "Bus",
        duration = "13min",
        price = "$15",
        active = true
    ), true) {}
}

@Preview(showBackground = true)
@Composable
fun PreviewVehiclesList() {
//    VehiclesList(mockVehicleTypes){}
}