package com.trafi.routes.ui.internal

import androidx.compose.foundation.AmbientContentColor
import androidx.compose.foundation.Text
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Box
import androidx.compose.foundation.layout.ConstrainedLayoutReference
import androidx.compose.foundation.layout.ConstraintLayout
import androidx.compose.foundation.layout.Dimension
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.CircleShape
import androidx.compose.material.FloatingActionButton
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.TextButton
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material.icons.filled.Place
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.SoftwareKeyboardController
import androidx.compose.ui.unit.dp
import androidx.ui.tooling.preview.Preview
import com.trafi.routes.ui.R
import com.trafi.routes.ui.mock.vilniusAirport
import com.trafi.routes.ui.mock.vilniusCathedral
import com.trafi.ui.OutlinedTextField
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing

@Composable
internal fun RouteSearchHeader(
    originText: String,
    destinationText: String,
    onOriginTextChange: (String) -> Unit,
    onDestinationTextChange: (String) -> Unit,
    onTextInputStarted: (SoftwareKeyboardController) -> Unit,
    onSwitchClick: () -> Unit,
    onBackClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    val timeVector = vectorResource(R.drawable.ic_route_search_trip_time_s)
    val switchVector = vectorResource(R.drawable.ic_route_search_switch_20)

    ConstraintLayout(modifier) {
        val (back, title, origin, destination, switch) = createRefs()
        val (originIcon, destinationIcon) = createRefs()
        val (dot1, dot2, dot3) = createRefs()
        val departureTime = createRef()

        Text(
            "Where to?",
            style = MaasTheme.typography.headingM,
            modifier = Modifier
                .padding(vertical = 16.dp)
                .constrainAs(title) {
                    centerHorizontallyTo(parent)
                }
        )

        IconButton(
            onClick = onBackClick,
            modifier = Modifier.size(32.dp).constrainAs(back) {
                centerHorizontallyTo(destinationIcon)
                centerVerticallyTo(title)
            }) {
            Icon(Icons.Filled.ArrowBack)
        }

        Box(
            modifier = Modifier
                .background(AmbientContentColor.current, CircleShape)
                .size(8.dp)
                .constrainAs(originIcon) {
                    start.linkTo(parent.start)
                    end.linkTo(origin.start)
                    centerVerticallyTo(origin)
                })
        Icon(
            Icons.Filled.Place,
            tint = MaasTheme.colors.primary,
            modifier = Modifier
                .size(width = 32.dp, height = 16.dp)
                .constrainAs(destinationIcon) {
                    start.linkTo(parent.start)
                    end.linkTo(destination.start)
                    centerVerticallyTo(destination)
                })

        @Composable
        fun Dot(
            ref: ConstrainedLayoutReference,
            prev: ConstrainedLayoutReference,
            next: ConstrainedLayoutReference
        ) {
            Box(
                modifier = Modifier
                    .background(AmbientContentColor.current, CircleShape)
                    .size(2.dp)
                    .constrainAs(ref) {
                        centerHorizontallyTo(originIcon)
                        top.linkTo(prev.bottom)
                        bottom.linkTo(next.top)
                    })
        }

        val dotCount = 5
        var prevRef = originIcon
        var nextRef = createRef()
        for (i in 1..dotCount) {
            val ref = nextRef
            nextRef = if (i == dotCount) destinationIcon else createRef()
            Dot(ref = ref, prev = prevRef, next = nextRef)
            prevRef = ref
        }

        val barrier = createEndBarrier(originIcon, destinationIcon)

        OutlinedTextField(
            originText,
            modifier = Modifier.constrainAs(origin) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(title.bottom)
            },
            onValueChange = onOriginTextChange,
            onTextInputStarted = onTextInputStarted,
            textStyle = MaasTheme.typography.textL,
        )
        OutlinedTextField(
            destinationText,
            modifier = Modifier.constrainAs(destination) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(origin.bottom, margin = Spacing.xs)
            },
            onValueChange = onDestinationTextChange,
            onTextInputStarted = onTextInputStarted,
            textStyle = MaasTheme.typography.textL,
        )
        FloatingActionButton(
            backgroundColor = MaasTheme.colors.background,
            contentColor = MaasTheme.colors.onBackground,
            onClick = onSwitchClick,
            modifier = Modifier
                .size(40.dp)
                .constrainAs(switch) {
                    top.linkTo(origin.bottom)
                    bottom.linkTo(destination.top)
                    end.linkTo(parent.end, margin = Spacing.sm)
                }
        ) {
            Icon(switchVector)
        }
        TextButton(
            onClick = {},
            modifier = Modifier.constrainAs(departureTime) {
                top.linkTo(destination.bottom, margin = Spacing.sm)
                start.linkTo(parent.start)
            }) {
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(timeVector, modifier = Modifier.padding(end = Spacing.xs))
                Text("Leave now", style = MaasTheme.typography.textM)
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
private fun RouteSearchHeaderPreview() {
    MaasTheme {
        RouteSearchHeader(
            originText = vilniusAirport.displayText,
            destinationText = vilniusCathedral.displayText,
            onOriginTextChange = {},
            onDestinationTextChange = {},
            onTextInputStarted = {},
            onSwitchClick = {},
            onBackClick = {},
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = MaasTheme.spacing.globalMargin)
        )
    }
}
