package com.trafi.routes.internal

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
import androidx.compose.material.AmbientContentColor
import androidx.compose.material.FloatingActionButton
import androidx.compose.material.Icon
import androidx.compose.material.IconButton
import androidx.compose.material.Text
import androidx.compose.material.TextButton
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.filled.ArrowBack
import androidx.compose.material.icons.filled.Place
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.SoftwareKeyboardController
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.routes.ui.R
import com.trafi.routes.mock.vilniusAirport
import com.trafi.routes.mock.vilniusCathedral
import com.trafi.ui.OutlinedTextField
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing

@Composable
internal fun RouteSearchHeader(
    startText: String,
    endText: String,
    onStartTextChange: (String) -> Unit,
    onEndTextChange: (String) -> Unit,
    onTextInputStarted: (SoftwareKeyboardController) -> Unit,
    onSwitchClick: () -> Unit,
    onBackClick: () -> Unit,
    modifier: Modifier = Modifier
) {
    val timeVector = vectorResource(R.drawable.ic_route_search_trip_time_s)
    val switchVector = vectorResource(R.drawable.ic_route_search_switch_20)

    ConstraintLayout(modifier) {
        val (back, title, startField, endField, switch) = createRefs()
        val (startIcon, endIcon) = createRefs()
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
                centerHorizontallyTo(endIcon)
                centerVerticallyTo(title)
            }
        ) {
            Icon(Icons.Filled.ArrowBack)
        }

        Box(
            modifier = Modifier
                .background(AmbientContentColor.current, CircleShape)
                .size(8.dp)
                .constrainAs(startIcon) {
                    start.linkTo(parent.start)
                    end.linkTo(startField.start)
                    centerVerticallyTo(startField)
                }
        )
        Icon(
            Icons.Filled.Place,
            tint = MaasTheme.colors.primary,
            modifier = Modifier
                .size(width = 32.dp, height = 16.dp)
                .constrainAs(endIcon) {
                    start.linkTo(parent.start)
                    end.linkTo(endField.start)
                    centerVerticallyTo(endField)
                }
        )

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
                        centerHorizontallyTo(startIcon)
                        top.linkTo(prev.bottom)
                        bottom.linkTo(next.top)
                    }
            )
        }

        val dotCount = 5
        var prevRef = startIcon
        var nextRef = createRef()
        for (i in 1..dotCount) {
            val ref = nextRef
            nextRef = if (i == dotCount) endIcon else createRef()
            Dot(ref = ref, prev = prevRef, next = nextRef)
            prevRef = ref
        }

        val barrier = createEndBarrier(startIcon, endIcon)

        OutlinedTextField(
            startText,
            modifier = Modifier.constrainAs(startField) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(title.bottom)
            },
            onValueChange = onStartTextChange,
            onTextInputStarted = onTextInputStarted,
            textStyle = MaasTheme.typography.textL,
        )
        OutlinedTextField(
            endText,
            modifier = Modifier.constrainAs(endField) {
                start.linkTo(barrier)
                end.linkTo(parent.end)
                width = Dimension.fillToConstraints
                top.linkTo(startField.bottom, margin = Spacing.xs)
            },
            onValueChange = onEndTextChange,
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
                    top.linkTo(startField.bottom)
                    bottom.linkTo(endField.top)
                    end.linkTo(parent.end, margin = Spacing.sm)
                }
        ) {
            Icon(switchVector)
        }
        TextButton(
            onClick = {},
            modifier = Modifier.constrainAs(departureTime) {
                top.linkTo(endField.bottom, margin = Spacing.sm)
                start.linkTo(parent.start)
            }
        ) {
            Row(verticalAlignment = Alignment.CenterVertically) {
                Icon(timeVector, modifier = Modifier.padding(end = Spacing.xs))
                Text("Leave now", style = MaasTheme.typography.textM)
            }
        }
    }
}

@Preview(showBackground = true, backgroundColor = 0xFFFFFF)
@Composable
private fun RouteSearchHeaderPreview() {
    MaasTheme {
        RouteSearchHeader(
            startText = vilniusAirport.displayText,
            endText = vilniusCathedral.displayText,
            onStartTextChange = {},
            onEndTextChange = {},
            onTextInputStarted = {},
            onSwitchClick = {},
            onBackClick = {},
            modifier = Modifier
                .fillMaxWidth()
                .padding(horizontal = MaasTheme.spacing.globalMargin)
        )
    }
}
