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
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.core.model.Provider
import com.trafi.core.model.Schedule
import com.trafi.ui.BadgeType.MEDIUM_BADGE
import com.trafi.ui.BadgeType.SMALL_BADGE
import com.trafi.ui.component.internal.BadgeConstants
import com.trafi.ui.theme.currentTheme
import com.trafi.ui.theme.parseColor

@Composable
private val constants
    get() = BadgeConstants(currentTheme)

data class BadgeInfo(
    val text: String?,
    val color: Color,
    val textColor: Color? = null
)

fun Schedule.toBadgeInfo(): BadgeInfo = BadgeInfo(
    text = name,
    color = color.parseColor(),
    textColor = textColor?.parseColor()
)

fun Provider.toBadgeInfo(): BadgeInfo = BadgeInfo(
    text = name,
    color = color?.parseColor() ?: Color.Black
)

@OptIn(ExperimentalLayout::class)
@Composable
fun Badge(
    modifier: Modifier = Modifier,
    badge: BadgeInfo?,
    alternativeBadges: List<BadgeInfo> = listOf(),
    vector: ImageVector? = null,
    subbadge: ImageVector? = null,
    badgeType: BadgeType,
    isDisabled: Boolean = false
) {
    if (alternativeBadges.isEmpty()) {
        SingleBadge(
            badge = badge,
            badgeType = badgeType,
            modifier = modifier,
            vector = vector,
            subbadge = subbadge,
            isDisabled = isDisabled
        )
    } else {
        StackedBadge(
            modifier = modifier,
            badge = badge,
            alternativeBadges = alternativeBadges,
            vector = vector,
            badgeType = badgeType
        )
    }

}

@OptIn(ExperimentalLayout::class)
@Composable
private fun SingleBadge(
    modifier: Modifier = Modifier,
    badge: BadgeInfo?,
    vector: ImageVector? = null,
    subbadge: ImageVector? = null,
    badgeType: BadgeType,
    isDisabled: Boolean = false
) {
    ConstraintLayout {
        Surface(
            color = if (isDisabled) constants.disabledColor else badge?.color ?: Color.Black,
            contentColor = badge?.textColor ?: constants.defaultContentColor,
            shape = RoundedCornerShape(getBadgeRounding(badgeType)),
            modifier = modifier.sizeIn(minHeight = getBadgeHeight(badgeType))
                .constrainAs(createRef()) {
                    bottom.linkTo(parent.bottom)
                }
        ) {
            BadgeFiller(
                badgeType = badgeType,
                vector = vector,
                text = badge?.text,
                isStackedBadge = false
            )
        }
        subbadge?.let {
            Image(
                subbadge,
                modifier = Modifier
                    .width(constants.subBadgeIconWidth)
                    .height(constants.subBadgeIconHeight)
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


@OptIn(ExperimentalLayout::class)
@Composable
private fun StackedBadge(
    modifier: Modifier = Modifier,
    badge: BadgeInfo?,
    alternativeBadges: List<BadgeInfo>,
    vector: ImageVector?,
    subbadge: ImageVector? = null,
    badgeType: BadgeType
) {
    ConstraintLayout {
        val altBadgesSublist =
            if (alternativeBadges.size > 2) alternativeBadges.subList(0, 2) else alternativeBadges
        altBadgesSublist.forEachIndexed { index, smallScheduleBadge ->
            Surface(
                color = smallScheduleBadge.color,
                contentColor = smallScheduleBadge.textColor ?: constants.defaultContentColor,
                border = BorderStroke(constants.borderWidth, color = constants.defaultContentColor),
                shape = RoundedCornerShape(getBadgeRounding(badgeType)),
                modifier = modifier.height(getBadgeHeight(badgeType) + (index * 4).dp)
                    .padding(top = (index * 4).dp)
            ) {
                BadgeFiller(
                    badgeType = badgeType,
                    vector = vector,
                    // This is not a mistype, it is a lifehack to make badges same size
                    text = badge?.text,
                    isHiddenLayoutFiller = true,
                    isStackedBadge = true
                )
            }
        }
        Surface(
            color = badge?.color ?: Color.Black,
            contentColor = badge?.textColor ?: constants.defaultContentColor,
            border = BorderStroke(constants.borderWidth, color = constants.defaultContentColor),
            shape = RoundedCornerShape(getBadgeRounding(badgeType)),
            modifier = modifier
                .height(getBadgeHeight(badgeType) + (altBadgesSublist.size * 4).dp + (constants.borderWidth * 2))
                .padding(top = (altBadgesSublist.size * 4).dp)
        ) {
            BadgeFiller(
                badgeType = badgeType,
                vector = vector,
                text = badge?.text,
                isHiddenLayoutFiller = false,
                isStackedBadge = true
            )
        }
        subbadge?.let {
            Image(
                subbadge,
                modifier = Modifier
                    .width(constants.subBadgeIconWidth)
                    .height(constants.subBadgeIconHeight)
                    .padding(end = 3.dp, bottom = 3.dp)
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

@Composable
private fun BadgeFiller(
    badgeType: BadgeType,
    vector: ImageVector?,
    text: String?,
    isHiddenLayoutFiller: Boolean = false,
    isStackedBadge: Boolean
) {
    Row(
        modifier = Modifier.padding(
            horizontal = getBadgeHorizontalPadding(badgeType, isStackedBadge),
            vertical = getBadgeVerticalPadding(badgeType)
        ),
        horizontalArrangement = Arrangement.spacedBy(constants.spacer)
    ) {
        vector?.let {
            Image(
                vector,
                colorFilter = ColorFilter.tint(AmbientContentColor.current),
                modifier = Modifier.align(Alignment.CenterVertically)
                    .width(constants.iconWidth)
                    .height(if (isHiddenLayoutFiller) 0.dp else constants.iconHeight)
            )
        }
        text?.let {
            Text(
                text = text,
                style = getBadgeTextStyle(badgeType).copy(fontWeight = FontWeight.Bold),
                modifier = Modifier.align(Alignment.CenterVertically)
                    .padding(bottom = 1.dp)
                    .wrapContentHeight(unbounded = true)
            )
        }
    }
}

@Composable
private fun getBadgeHeight(type: BadgeType): Dp {
    return when (type) {
        SMALL_BADGE -> constants.minHeightSmall
        MEDIUM_BADGE -> constants.minHeightMedium
    }
}

@Composable
private fun getBadgeRounding(type: BadgeType): Dp {
    return when (type) {
        SMALL_BADGE -> constants.cornerRadiusSmall
        MEDIUM_BADGE -> constants.cornerRadiusMedium
    }
}

@Composable
private fun getBadgeHorizontalPadding(type: BadgeType, isStackedBadge: Boolean): Dp {
    return when (type) {
        SMALL_BADGE -> constants.horizontalPaddingSmall + (constants.borderWidth * 2)
        MEDIUM_BADGE -> constants.horizontalPaddingMedium + (constants.borderWidth * 2)
    }
}

@Composable
private fun getBadgeVerticalPadding(type: BadgeType): Dp {
    return when (type) {
        SMALL_BADGE -> 0.dp
        MEDIUM_BADGE -> constants.verticalPaddingMedium
    }
}

@Composable
private fun getBadgeTextStyle(type: BadgeType): TextStyle {
    return when (type) {
        SMALL_BADGE -> constants.textStyleSmall
        MEDIUM_BADGE -> constants.textStyleMedium
    }
}

enum class BadgeType {
    SMALL_BADGE,
    MEDIUM_BADGE
}