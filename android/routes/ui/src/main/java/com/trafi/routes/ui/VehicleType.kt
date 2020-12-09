package com.trafi.routes.ui

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
import com.trafi.routes.data.TabItem
import com.trafi.routes.internal.RoutesViewModel
import com.trafi.routes.mock.group1
import com.trafi.routes.mock.mockVehicleTypes
import com.trafi.ui.theme.Grey200
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.internal.CornerRadiusScale
import com.trafi.ui.theme.internal.SpacingScale

@Composable
fun VehiclesList(routesViewModel: RoutesViewModel, onVehicleClick: (String) -> Unit) {
    ScrollableRow(
        modifier = Modifier.padding(horizontal = MaasTheme.spacing.globalMargin)
    ) {
        routesViewModel.vehicleTypes?.forEach {
            VehicleTypeSegment(
                it,
                onVehicleClick
            )
        }
    }
}

@Composable
fun VehicleTypeSegment(
    tabItem: TabItem,
    onVehicleClick: (String) -> Unit
) {
    Card(
        shape = RoundedCornerShape(CornerRadiusScale.xxs.dp),
        modifier = Modifier
            .widthIn(min = 70.dp)
            .padding(SpacingScale.xxs.dp)
            .clickable(onClick = {
                onVehicleClick(tabItem.id)
            })
    ) {
        Column(
            modifier = Modifier.background(if (tabItem.active) Color.Green else Grey200 )
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
    VehicleTypeSegment(group1) {}
}

@Preview(showBackground = true)
@Composable
fun PreviewVehiclesList() {
//    VehiclesList(mockVehicleTypes){}
}