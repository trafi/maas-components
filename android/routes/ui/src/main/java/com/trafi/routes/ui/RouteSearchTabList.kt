package com.trafi.routes.ui

import androidx.compose.foundation.ScrollableRow
import androidx.compose.foundation.layout.padding
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import com.trafi.ui.RouteSearchTab
import com.trafi.ui.TabItem
import com.trafi.ui.theme.MaasTheme

@Composable
fun VehiclesList(
    vehicleTypes: List<TabItem>?,
    selectedItemId: String,
    onVehicleClick: (String) -> Unit
) {
    ScrollableRow(
        modifier = Modifier.padding(horizontal = MaasTheme.spacing.globalMargin)
    ) {
        vehicleTypes?.forEach { tabItem ->
            RouteSearchTab(tabItem, selectedItemId == tabItem.id) {
                onVehicleClick(tabItem.id)
            }
        }
    }
}