package com.trafi.routes.ui

import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.ExperimentalLayout
import androidx.compose.foundation.layout.IntrinsicSize
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.preferredHeight
import androidx.compose.foundation.layout.preferredWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.AmbientContentColor
import androidx.compose.material.Divider
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.tooling.preview.PreviewParameter
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import com.trafi.core.model.RouteSegment
import com.trafi.core.model.RouteSegmentPersonalVehicle
import com.trafi.core.model.SharedVehicle
import com.trafi.routes.ui.internal.endTimeMillis
import com.trafi.routes.ui.internal.startTimeMillis
import com.trafi.routes.ui.mock.RouteSegmentPreviewParameterProvider
import com.trafi.ui.theme.MaasTheme

typealias PersonalVehicleType = RouteSegmentPersonalVehicle.Vehicle

@Composable
fun RouteSegment(segment: RouteSegment, modifier: Modifier = Modifier) {
    when (segment.mode) {
        RouteSegment.Mode.TRANSIT -> {
            val transit = segment.transit ?: return
            val color = transit.schedule.color.parseColor()
            val vector = vectorResource(
                when (transit.schedule.transportType) {
                    "ubahn" -> R.drawable.providers_ubahn_xs
                    "sbahn" -> R.drawable.providers_sbahn_xs
                    "bus" -> R.drawable.providers_bus_xs
                    "tram" -> R.drawable.providers_trams_xs
                    "train" -> R.drawable.providers_train_xs
                    "ferry" -> R.drawable.providers_ferry_xs
                    else -> R.drawable.providers_bus_xs
                }
            )
            Badge(
                color = color,
                vector = vector,
                text = transit.schedule.name,
                modifier = modifier
            )
        }
        RouteSegment.Mode.RIDE_HAILING -> {
            val hailing = segment.rideHailing ?: return
            val color = hailing.provider?.color?.parseColor() ?: Color.Black
            val vector = vectorResource(
                when (hailing.provider?.icon) {
                    "berlkonig" -> R.drawable.providers_berlkonig_xs
                    else -> R.drawable.transport_taxi_xs
                }
            )
            Badge(
                color = color,
                vector = vector,
                text = hailing.provider?.name,
                modifier = modifier
            )
        }
        RouteSegment.Mode.SHARING -> {
            val sharing = segment.sharing ?: return
            val color = sharing.provider?.color?.parseColor() ?: Color.Black
            val providerIconRes = when (sharing.provider?.icon) {
                "tier" -> R.drawable.providers_tier_xs
                "voi" -> R.drawable.providers_voi_xs
                "emmy" -> R.drawable.providers_emmy_xs
                "nextbike" -> R.drawable.providers_nextbike_xs
                "driveby" -> R.drawable.providers_driveby_xs
                else -> null
            }
            val transportIconRes = sharing.vehicle?.vehicleType?.let { vehicleType ->
                when (vehicleType) {
                    SharedVehicle.VehicleType.CAR -> R.drawable.transport_car_xs
                    SharedVehicle.VehicleType.BICYCLE -> R.drawable.transport_bike_xs
                    SharedVehicle.VehicleType.SCOOTER -> R.drawable.transport_scooter_xs
                    SharedVehicle.VehicleType.KICK_SCOOTER -> R.drawable.transport_kickscooter_xs
                }
            }
            val vector = (providerIconRes ?: transportIconRes)?.let { vectorResource(it) }
            Badge(
                color = color,
                vector = vector,
                text = sharing.provider?.name,
                modifier = modifier
            )
        }
        RouteSegment.Mode.WALKING -> {
            val vector = vectorResource(R.drawable.ic_route_search_walking_s)
            val durationMillis = segment.endTimeMillis - segment.startTimeMillis
            Row(modifier = modifier.defaultMinSizeConstraints(minHeight = 24.dp)) {
                Image(
                    vector,
                    modifier = Modifier.align(Alignment.CenterVertically),
                    colorFilter = ColorFilter.tint(AmbientContentColor.current)
                )
                Text(
                    text = durationMillis.millisToDurationText,
                    style = MaasTheme.typography.textS.copy(fontWeight = FontWeight.SemiBold),
                    fontSize = 8.sp,
                    modifier = Modifier.align(Alignment.Bottom)
                )
            }
        }
        RouteSegment.Mode.PERSONAL_VEHICLE -> {
            val personalVehicle = segment.personalVehicle ?: return
            val vector = vectorResource(
                when (personalVehicle.vehicle) {
                    PersonalVehicleType.BICYCLE -> R.drawable.ic_route_search_bike_s
                    PersonalVehicleType.KICK_SCOOTER -> R.drawable.ic_route_search_scooter_s
                }
            )
            val durationMillis = segment.endTimeMillis - segment.startTimeMillis
            Row(modifier = modifier.defaultMinSizeConstraints(minHeight = 24.dp)) {
                Image(
                    vector,
                    modifier = Modifier.align(Alignment.CenterVertically),
                    colorFilter = ColorFilter.tint(AmbientContentColor.current)
                )
                Text(
                    text = durationMillis.millisToDurationText,
                    style = MaasTheme.typography.textS.copy(fontWeight = FontWeight.SemiBold),
                    fontSize = 8.sp,
                    modifier = Modifier.align(Alignment.Bottom)
                )
            }
        }
    }
}

private val Long.millisToDurationText: String
    get() = maxOf(1, ((this / 1000 + 30) / 60)).toString()

private fun String.parseColor(): Color =
    Color(android.graphics.Color.parseColor("#$this"))

@OptIn(ExperimentalLayout::class)
@Composable
private fun Badge(
    color: Color,
    vector: ImageVector?,
    text: String?,
    modifier: Modifier = Modifier
) {
    Surface(
        color = color,
        contentColor = Color.White,
        shape = RoundedCornerShape(4.dp),
        modifier = modifier
    ) {
        Row(
            modifier = Modifier
                .padding(4.dp)
                .preferredHeight(IntrinsicSize.Min)
        ) {
            vector?.let {
                Image(
                    vector,
                    colorFilter = ColorFilter.tint(AmbientContentColor.current),
                    modifier = Modifier.align(Alignment.CenterVertically)
                )
                Divider(
                    color = AmbientContentColor.current,
                    modifier = Modifier
                        .padding(horizontal = 4.dp)
                        .fillMaxHeight()
                        .preferredWidth(1.dp)
                )
            }
            text?.let {
                Text(
                    text = text,
                    style = MaasTheme.typography.textM.copy(fontWeight = FontWeight.SemiBold)
                )
            }
        }
    }
}

@Preview(showBackground = false)
@Composable
private fun RouteSegmentPreview(
    @PreviewParameter(RouteSegmentPreviewParameterProvider::class) segment: RouteSegment
) {
    RouteSegment(segment)
}
