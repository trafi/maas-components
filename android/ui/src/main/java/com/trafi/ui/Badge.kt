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
import androidx.compose.ui.unit.dp
import com.trafi.core.model.Provider
import com.trafi.core.model.Schedule
import com.trafi.ui.BadgeType.MEDIUM_BADGE
import com.trafi.ui.BadgeType.SMALL_BADGE
import com.trafi.ui.theme.Grey300
import com.trafi.ui.theme.LocalSpacing.badgeMediumCornerRadius
import com.trafi.ui.theme.LocalSpacing.badgeMediumHeight
import com.trafi.ui.theme.LocalSpacing.badgeMediumHorizontalPadding
import com.trafi.ui.theme.LocalSpacing.badgeMediumIconSize
import com.trafi.ui.theme.LocalSpacing.badgeSmallCornerRadius
import com.trafi.ui.theme.LocalSpacing.badgeSmallHeight
import com.trafi.ui.theme.LocalSpacing.badgeSmallHorizontalPadding
import com.trafi.ui.theme.LocalSpacing.badgeSmallIconSize
import com.trafi.ui.theme.LocalSpacing.badgeSpacer
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.internal.TypographyScale.textM
import com.trafi.ui.theme.internal.TypographyScale.textS
import com.trafi.ui.theme.parseColor
import com.trafi.ui.theme.toTextStyle

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
fun SingleBadge(
    modifier: Modifier = Modifier,
    badge: BadgeInfo?,
    vector: ImageVector? = null,
    subbadge: ImageVector? = null,
    badgeType: BadgeType,
    isDisabled: Boolean = false
) {
    ConstraintLayout {
        Surface(
            color = if (isDisabled) Grey300 else badge?.color ?: Color.Black,
            contentColor = badge?.textColor ?: Color.White,
            shape = RoundedCornerShape(getBadgeRounding(badgeType).dp),
            modifier = modifier.height(getBadgeHeight(badgeType).dp)
        ) {
            BadgeFiller(badgeType = badgeType, vector = vector, text = badge?.text)
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


@OptIn(ExperimentalLayout::class)
@Composable
fun StackedBadge(
    modifier: Modifier = Modifier,
    badge: BadgeInfo?,
    alternativeBadges: List<BadgeInfo>,
    vector: ImageVector?,
    subbadge: ImageVector? = null,
    badgeType: BadgeType
) {
    ConstraintLayout {
        val altBadgesSublist = alternativeBadges.subList(0, 2)
        altBadgesSublist.forEachIndexed { index, smallScheduleBadge ->
            Surface(
                color = smallScheduleBadge.color,
                contentColor = smallScheduleBadge.textColor ?: Color.White,
                border = BorderStroke((1.5).dp, color = Color.White),
                shape = RoundedCornerShape(getBadgeRounding(badgeType).dp),
                modifier = modifier.height((getBadgeHeight(badgeType) + (index * 4)).dp)
                    .padding(top = (index * 4).dp)
            ) {
                BadgeFiller(
                    badgeType = badgeType,
                    vector = vector,
                    // This is not a mistype, it is a lifehack to make badges same size
                    text = badge?.text,
                    isHiddenLayoutFiller = true
                )
            }
        }
        Surface(
            color = badge?.color ?: Color.Black,
            contentColor = badge?.textColor ?: Color.White,
            border = BorderStroke((1.5).dp, color = Color.White),
            shape = RoundedCornerShape(getBadgeRounding(badgeType).dp),
            modifier = modifier.height((getBadgeHeight(badgeType) + (altBadgesSublist.size * 4)).dp)
                .padding(top = (altBadgesSublist.size * 4).dp)
        ) {
            BadgeFiller(
                badgeType = badgeType,
                vector = vector,
                text = badge?.text,
                isHiddenLayoutFiller = false
            )
        }
        subbadge?.let {
            Image(
                subbadge,
                modifier = Modifier
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
    isHiddenLayoutFiller: Boolean = false
) {
    Row(
        modifier = Modifier.padding(horizontal = getBadgeHorizontalPadding(badgeType).dp),
        horizontalArrangement = Arrangement.spacedBy(badgeSpacer.dp)
    ) {
        vector?.let {
            Image(
                vector,
                colorFilter = ColorFilter.tint(AmbientContentColor.current),
                modifier = Modifier.align(Alignment.CenterVertically)
                    .width(getBadgeIconSize(badgeType).dp)
                    .height(if (isHiddenLayoutFiller) 0.dp else getBadgeIconSize(badgeType).dp)
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

private fun getBadgeHeight(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallHeight
        MEDIUM_BADGE -> badgeMediumHeight
    }
}

private fun getBadgeRounding(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallCornerRadius
        MEDIUM_BADGE -> badgeMediumCornerRadius
    }
}

private fun getBadgeHorizontalPadding(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallHorizontalPadding
        MEDIUM_BADGE -> badgeMediumHorizontalPadding
    }
}

private fun getBadgeTextStyle(type: BadgeType): TextStyle {
    return when (type) {
        SMALL_BADGE -> textS.toTextStyle()
        MEDIUM_BADGE -> textM.toTextStyle()
    }
}

private fun getBadgeIconSize(type: BadgeType): Int {
    return when (type) {
        SMALL_BADGE -> badgeSmallIconSize
        MEDIUM_BADGE -> badgeMediumIconSize
    }
}

enum class BadgeType {
    SMALL_BADGE,
    MEDIUM_BADGE
}

@OptIn(ExperimentalLayout::class)
@Composable
fun TestStackedBadge(
    modifier: Modifier = Modifier,
    color: Color,
    vector: ImageVector?,
    subbadge: ImageVector? = null,
    text: String?,
    badgeType: BadgeType
) {
    ConstraintLayout(
        modifier = Modifier.fillMaxWidth()
    ) {
//        Column(modifier = Modifier.preferredWidth(IntrinsicSize.Max).fillMaxWidth(),
//        ) {
        Surface(
            color = color,
            contentColor = Color.White,
            border = BorderStroke(1.dp, color = Color.White),
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.height(getBadgeHeight(badgeType).dp).fillMaxWidth()
        ) {}
        Surface(
            color = color,
            contentColor = Color.White,
            border = BorderStroke(1.dp, color = Color.White),
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.height(getBadgeHeight(badgeType).dp).padding(top = 3.dp)
                .fillMaxWidth()
        ) {}
        Surface(
            color = color,
            contentColor = Color.White,
            border = BorderStroke(1.dp, color = Color.White),
            shape = RoundedCornerShape(6.dp),
            modifier = modifier.height((getBadgeHeight(badgeType) + 8).dp).padding(top = 6.dp)
                .preferredWidth(IntrinsicSize.Min).fillMaxWidth()
        ) {
            Row(
                modifier = Modifier
                    .padding(horizontal = getBadgeHorizontalPadding(badgeType).dp)
//                    horizontalArrangement = Arrangement.spacedBy(badgeSpacer.dp)
            ) {
                vector?.let {
                    Image(
                        vector,
                        colorFilter = ColorFilter.tint(AmbientContentColor.current),
                        modifier = Modifier.align(Alignment.CenterVertically).fillMaxWidth()
                            .weight(1f).padding(end = badgeSpacer.dp)
                    )
                }
                text?.let {
                    Text(
                        text = text,
                        style = MaasTheme.typography.textM.copy(fontWeight = FontWeight.SemiBold),
                        modifier = Modifier.align(Alignment.CenterVertically).fillMaxWidth()
                            .weight(1f)
                    )
                }
            }
        }
//        }

//        subbadge?.let {
//            Image(
//                subbadge,
//                modifier = Modifier
//                    .constrainAs(createRef()) {
//                        bottom.linkTo(parent.bottom)
//                        top.linkTo(parent.bottom)
//                        start.linkTo(parent.end)
//                        end.linkTo(parent.end)
//                    }
//            )
//        }
    }
}