package com.trafi.ui

import androidx.compose.runtime.Composable
import com.trafi.ui.component.BadgePreview
import com.trafi.ui.component.BadgePreviewWithSubbadge
import com.trafi.ui.component.BadgeWithoutIconPreview
import com.trafi.ui.component.ButtonPreview
import com.trafi.ui.component.ButtonStyledCornerRadiusPreview
import com.trafi.ui.component.InfoButtonDisabledPreview
import com.trafi.ui.component.InfoButtonLongTextPreview
import com.trafi.ui.component.InfoButtonStyledDarkPreview
import com.trafi.ui.component.InfoButtonThemedPreview
import com.trafi.ui.component.SmallBadgePreview
import com.trafi.ui.component.SmallBadgeWithIconPreview
import com.trafi.ui.component.SmallDisabledBadgePreview
import com.trafi.ui.component.StackedBadgeDarkPreview
import com.trafi.ui.component.StackedBadgePreview
import com.trafi.ui.component.StackedBadgePreviewWithSubbadge

internal val testPreviews: List<Pair<@Composable () -> Unit, String>> = listOf(
    Pair({ ButtonPreview() }, "Button"),
    Pair({ ButtonStyledCornerRadiusPreview() }, "ButtonStyledCornerRadius"),
    Pair({ BadgePreview() }, "Badge"),
    Pair({ BadgeWithoutIconPreview() }, "BadgeWithoutIcon"),
    Pair({ BadgePreviewWithSubbadge() }, "BadgeWithSubbadge"),
    Pair({ SmallBadgePreview() }, "SmallBadge"),
    Pair({ SmallDisabledBadgePreview() }, "SmallDisabledBadge"),
    Pair({ SmallBadgeWithIconPreview() }, "SmallBadgeWithIcon"),
    Pair({ StackedBadgePreview() }, "StackedBadge"),
    Pair({ StackedBadgePreviewWithSubbadge() }, "StackedBadgeWithSubbadge"),
    Pair({ StackedBadgeDarkPreview() }, "StackedBadgeDark"),
    Pair({ InfoButtonDisabledPreview() }, "InfoButtonDisabled"),
    Pair({ InfoButtonLongTextPreview() }, "InfoButtonLongText"),
    Pair({ InfoButtonStyledDarkPreview() }, "InfoButtonStyledDark"),
    Pair({ InfoButtonThemedPreview() }, "InfoButtonThemed"),
)
