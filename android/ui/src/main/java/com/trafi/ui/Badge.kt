package com.trafi.ui

import androidx.compose.foundation.BorderStroke
import androidx.compose.foundation.Image
import androidx.compose.foundation.layout.*
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Surface
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.graphics.vector.ImageVector
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.BadgeType.Medium
import com.trafi.ui.BadgeType.Small
import com.trafi.ui.component.internal.BadgeConstants
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.currentTheme
import com.trafi.ui.theme.darkColors

/**
 *
 * Badge does not work with LazyColumn and LazyColumnFor, because parent ConstraintLayout of badge
 * has parameter preferredWidth(IntrinsicSize.Min). Without this parameter it is not possible to
 * to set custom width to badge.
 *
 * One of the options is to use same modifier for ConstraintLayout and child layout
 * (Surface or other) but then subbadgeIcon flies away from badge.
 */

@Composable
private val constants
    get() = BadgeConstants(currentTheme)

data class BadgeInfo(
    val text: String?,
    val backgroundColor: Color,
    val contentColor: Color? = null,
)

@OptIn(ExperimentalLayout::class)
@Composable
fun Badge(
    badge: BadgeInfo,
    modifier: Modifier = Modifier,
    badgeType: BadgeType = Medium,
    icon: ImageVector? = null,
    isEnabled: Boolean = true,
    subbadgeIcon: ImageVector? = null,
    alternativeBadges: List<BadgeInfo> = listOf(),
) {
    if (alternativeBadges.isEmpty()) {
        SingleBadge(
            badge = badge,
            badgeType = badgeType,
            modifier = modifier,
            icon = icon,
            subbadgeIcon = subbadgeIcon,
            isEnabled = isEnabled,
        )
    } else {
        StackedBadge(
            modifier = modifier,
            badge = badge,
            alternativeBadges = alternativeBadges,
            icon = icon,
            badgeType = badgeType,
            subbadgeIcon = subbadgeIcon,
        )
    }
}

@OptIn(ExperimentalLayout::class)
@Composable
private fun SingleBadge(
    badge: BadgeInfo,
    badgeType: BadgeType,
    modifier: Modifier = Modifier,
    icon: ImageVector? = null,
    subbadgeIcon: ImageVector? = null,
    isEnabled: Boolean = true,
) {
    ConstraintLayout(
        modifier = modifier.preferredWidth(IntrinsicSize.Min)
    ) {
        Surface(
            color = if (isEnabled) badge.backgroundColor else constants.disabledColor,
            contentColor = badge.contentColor ?: constants.defaultContentColor,
            shape = RoundedCornerShape(badgeType.badgeRounding),
            modifier = Modifier.sizeIn(minHeight = badgeType.badgeHeight)
                .fillMaxWidth()
        ) {
            BadgeFiller(
                badgeType = badgeType,
                icon = icon,
                badge = badge,
                isStackedBadge = false
            )
        }
        subbadgeIcon?.let {
            Image(
                subbadgeIcon,
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
    badge: BadgeInfo,
    badgeType: BadgeType,
    modifier: Modifier = Modifier,
    icon: ImageVector? = null,
    subbadgeIcon: ImageVector? = null,
    alternativeBadges: List<BadgeInfo> = listOf(),
) {
    ConstraintLayout(
        modifier = modifier.preferredWidth(IntrinsicSize.Min)
    ) {
        val altBadgesSublist = alternativeBadges.take(constants.maxStackedBadgesNumber)
        altBadgesSublist.forEachIndexed { index, smallScheduleBadge ->
            Surface(
                color = smallScheduleBadge.backgroundColor,
                contentColor = smallScheduleBadge.contentColor ?: constants.defaultContentColor,
                border = BorderStroke(constants.borderWidth, color = constants.borderColor),
                shape = RoundedCornerShape(badgeType.badgeRounding),
                modifier = Modifier.height(badgeType.badgeHeight + (index * 4).dp)
                    .fillMaxWidth()
                    .padding(top = (index * 4).dp)
            ) {
                BadgeFiller(
                    badgeType = badgeType,
                    icon = icon,
                    // This is not a mistype, it is a lifehack to make badges same size
                    badge = badge,
                    isHiddenLayoutFiller = true,
                    isStackedBadge = true
                )
            }
        }
        Surface(
            color = badge.backgroundColor,
            contentColor = badge.contentColor ?: constants.defaultContentColor,
            border = BorderStroke(constants.borderWidth, color = constants.borderColor),
            shape = RoundedCornerShape(badgeType.badgeRounding),
            modifier = Modifier
                .sizeIn(minHeight = badgeType.badgeHeight + (altBadgesSublist.size * 4).dp + (constants.borderWidth * 2))
                .padding(top = (altBadgesSublist.size * 4).dp)
                .fillMaxWidth()
        ) {
            BadgeFiller(
                badgeType = badgeType,
                icon = icon,
                badge = badge,
                isHiddenLayoutFiller = false,
                isStackedBadge = true
            )
        }
        subbadgeIcon?.let {
            Image(
                subbadgeIcon,
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

@ExperimentalLayout
@Composable
private fun BadgeFiller(
    badgeType: BadgeType,
    isStackedBadge: Boolean,
    badge: BadgeInfo,
    icon: ImageVector?,
    isHiddenLayoutFiller: Boolean = false,
) {
    Box(
        contentAlignment = Alignment.Center,
    ) {
        Row(
            modifier = Modifier
                .padding(
                    horizontal = badgeType.getHorizontalPadding(isStackedBadge),
                    vertical = badgeType.verticalPadding
                ),
        ) {
            if (isHiddenLayoutFiller) {
                Box(modifier = Modifier.align(Alignment.CenterVertically)
                    .width(constants.iconWidth)) {}
            } else {
                icon?.let {
                    Image(
                        icon,
                        colorFilter = ColorFilter.tint(badge.contentColor
                            ?: constants.defaultContentColor),
                        modifier = Modifier.align(Alignment.CenterVertically)
                            .width(constants.iconWidth)
                            .padding(bottom = 1.dp)
                            .height(constants.iconHeight)
                    )
                }
            }
            badge.text?.let {
                Text(
                    text = badge.text,
                    color = badge.contentColor ?: constants.defaultContentColor,
                    style = badgeType.textStyle,
                    modifier = Modifier.align(Alignment.CenterVertically)
                        .padding(bottom = 1.dp,
                            start = if (icon != null) constants.spacer else 0.dp)
                        .wrapContentHeight(unbounded = true)
                )
            }
        }
    }
}

@Composable
private val BadgeType.badgeHeight: Dp
    get() = when (this) {
        Small -> constants.minHeightSmall
        Medium -> constants.minHeightMedium
    }

@Composable
private val BadgeType.badgeRounding: Dp
    get() = when (this) {
        Small -> constants.cornerRadiusSmall
        Medium -> constants.cornerRadiusMedium
    }

@Composable
private fun BadgeType.getHorizontalPadding(isStackedBadge: Boolean): Dp {
    return when (this) {
        Small -> constants.horizontalPaddingSmall.plusIf(isStackedBadge,
            constants.borderWidth)
        Medium -> constants.horizontalPaddingMedium.plusIf(isStackedBadge,
            constants.borderWidth)
    }
}

@Composable
private val BadgeType.verticalPadding: Dp
    get() = when (this) {
        Small -> constants.verticalPaddingSmall
        Medium -> constants.verticalPaddingMedium
    }

@Composable
private val BadgeType.textStyle: TextStyle
    get() = when (this) {
        Small -> constants.textStyleSmall
        Medium -> constants.textStyleMedium
    }

enum class BadgeType {
    Small,
    Medium,
}

private fun Dp.plusIf(shouldInclude: Boolean, other: Dp) = if (shouldInclude) this + other else this

@Preview
@Composable
fun BadgePreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        icon = vectorResource(R.drawable.providers_ubahn_xs),
        badgeType = Medium
    )
}

@Preview
@Composable
fun BadgePreviewWithSubbadge() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        icon = vectorResource(R.drawable.providers_ubahn_xs),
        subbadgeIcon = vectorResource(id = R.drawable.warning_warning_s),
        modifier = Modifier.width(120.dp).padding(12.dp),
        badgeType = Medium,
    )
}

@Preview
@Composable
fun SmallBadgePreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        badgeType = Small
    )
}

@Preview
@Composable
fun SmallDisabledBadgePreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        badgeType = Small,
        isEnabled = false
    )
}

@Preview
@Composable
fun SmallBadgeWithIconPreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        icon = vectorResource(R.drawable.providers_ubahn_xs),
        badgeType = Small
    )
}

@Preview
@Composable
fun BadgeWithoutIconPreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        badgeType = Medium
    )
}

@Preview
@Composable
fun StackedBadgePreview() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        alternativeBadges = listOf(
            BadgeInfo("5G", Color.Magenta),
        ),
        icon = vectorResource(R.drawable.providers_ubahn_xs),
        badgeType = Medium
    )
}

@Preview
@Composable
fun StackedBadgeDarkPreview() {
    val darkColors = MaasTheme.darkColors()
    MaasTheme(colors = darkColors) {
        Badge(
            badge = BadgeInfo("5G", Color.Magenta),
            alternativeBadges = listOf(
                BadgeInfo("5G", Color.Magenta),
            ),
            icon = vectorResource(R.drawable.providers_ubahn_xs),
            badgeType = Medium
        )
    }
}

@Preview
@Composable
fun StackedBadgePreviewWithSubbadge() {
    Badge(
        badge = BadgeInfo("5G", Color.Magenta),
        alternativeBadges = listOf(BadgeInfo("135", Color.Green),
            BadgeInfo("13585", Color.Magenta),
            BadgeInfo("1", Color.Green),
            BadgeInfo("135", Color.Magenta),
            BadgeInfo("135", Color.Magenta),
            BadgeInfo("135", Color.Magenta)),
        icon = vectorResource(R.drawable.providers_ubahn_xs),
        subbadgeIcon = vectorResource(id = R.drawable.warning_warning_s),
        modifier = Modifier.width(150.dp).padding(12.dp),
        badgeType = Medium,
    )
}