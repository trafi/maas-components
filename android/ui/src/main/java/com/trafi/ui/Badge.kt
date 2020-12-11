package com.trafi.ui

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.AmbientContentColor
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.dp
import com.trafi.ui.BadgeType.MEDIUM_BADGE
import com.trafi.ui.BadgeType.SMALL_BADGE
import com.trafi.ui.theme.LocalSpacing.badgeMediumHeight
import com.trafi.ui.theme.LocalSpacing.badgeMediumHorizontalPadding
import com.trafi.ui.theme.LocalSpacing.badgeSmallHeight
import com.trafi.ui.theme.LocalSpacing.badgeSmallHorizontalPadding
import com.trafi.ui.theme.LocalSpacing.badgeSpacer
import com.trafi.ui.theme.MaasTheme

@OptIn(ExperimentalLayout::class)
@Composable
fun Badge(
    modifier: Modifier = Modifier,
    color: Color,
    vector: ImageVector?,
    subbadge: ImageVector? = null,
    text: String?,
    badgeType: BadgeType
) {
    ConstraintLayout() {
        Surface(
            color = color,
            contentColor = Color.White,
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.width(50.dp).height(getBadgeHeight(badgeType).dp)
        ) {}
        Surface(
            color = color,
            contentColor = Color.White,
            border = BorderStroke(1.dp, color = Color.White),
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.width(50.dp).height(getBadgeHeight(badgeType).dp).padding(top = 2.dp)
        ) {}
        Surface(
            color = color,
            contentColor = Color.White,
            border = BorderStroke(1.dp, color = Color.White),
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.height(getBadgeHeight(badgeType).dp).padding(top = 5.dp)
        ) {
            Row(
                modifier = Modifier
                    .padding(horizontal = getBadgeHorizontalPadding(badgeType).dp)
                    .preferredHeight(IntrinsicSize.Min)
            ) {
                vector?.let {
                    Image(
                        vector,
                        colorFilter = ColorFilter.tint(AmbientContentColor.current),
                        modifier = Modifier.align(Alignment.CenterVertically)
                            .padding(end = badgeSpacer.dp)
                    )
                }
                text?.let {
                    Text(
                        text = text,
                        style = MaasTheme.typography.textM.copy(fontWeight = FontWeight.SemiBold),
                        modifier = Modifier.align(Alignment.CenterVertically)
                    )
                }
            }
        }
        subbadge?.let {
            Image(
                subbadge,
                modifier = Modifier
                    .constrainAs(createRef()) {
                        bottom.linkTo(parent.bottom)
                        top.linkTo(parent.bottom)
                        start.linkTo(parent.end)
                        end.linkTo(parent.end)
                    }
            )
        }
    }
}

private fun getBadgeHeight(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallHeight
        MEDIUM_BADGE -> badgeMediumHeight
    }
}

private fun getBadgeHorizontalPadding(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallHorizontalPadding
        MEDIUM_BADGE -> badgeMediumHorizontalPadding
    }
}

enum class BadgeType {
    SMALL_BADGE,
    MEDIUM_BADGE
}