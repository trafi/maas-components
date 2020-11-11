package com.trafi.routes.ui

import androidx.compose.foundation.AmbientContentColor
import androidx.compose.foundation.Image
import androidx.compose.foundation.Text
import androidx.compose.foundation.layout.ExperimentalLayout
import androidx.compose.foundation.layout.IntrinsicSize
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.defaultMinSizeConstraints
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.preferredHeight
import androidx.compose.foundation.layout.preferredWidth
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Divider
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.VectorAsset
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import androidx.compose.ui.unit.sp
import androidx.ui.tooling.preview.Preview
import androidx.ui.tooling.preview.PreviewParameter
import com.trafi.core.android.model.RouteSegment
import com.trafi.routes.ui.mock.RouteSegmentPreviewParameterProvider
import com.trafi.ui.theme.MaasTheme

@Composable
fun RouteSegment(segment: RouteSegment, modifier: Modifier = Modifier) {
    when (segment.mode) {
        RouteSegment.Mode.TRANSIT -> {
            val transit = segment.transit ?: return
            val color = transit.schedule.color.parseColor()
            val vector = vectorResource(R.drawable.providers_bus_xs)
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
            val vector = vectorResource(R.drawable.providers_berlkonig_xs)
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
            val vector = vectorResource(R.drawable.providers_voi_xs)
            Badge(
                color = color,
                vector = vector,
                text = sharing.provider?.name,
                modifier = modifier
            )
        }
        RouteSegment.Mode.WALKING -> {
            val walking = segment.walking ?: return
            val vector = vectorResource(R.drawable.ic_route_search_walking_s)
            Row(modifier = modifier.defaultMinSizeConstraints(minHeight = 24.dp)) {
                Image(vector,
                    modifier = Modifier.align(Alignment.CenterVertically),
                colorFilter = ColorFilter.tint(AmbientContentColor.current))
                Text(
                    text = walking.distance.text,
                    style = MaasTheme.typography.textS,
                    fontSize = 8.sp,
                    modifier = Modifier.align(Alignment.Bottom)
                )
            }
        }
    }
}

private fun String.parseColor(): Color =
    Color(android.graphics.Color.parseColor("#$this"))

@OptIn(ExperimentalLayout::class)
@Composable
fun Badge(color: Color, vector: VectorAsset?, text: String?, modifier: Modifier = Modifier) {
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
fun RouteSegmentPreview(@PreviewParameter(RouteSegmentPreviewParameterProvider::class) segment: RouteSegment) {
    RouteSegment(segment)
}
