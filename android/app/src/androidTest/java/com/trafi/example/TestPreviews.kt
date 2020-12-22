package com.trafi.example

import androidx.compose.runtime.Composable
import com.trafi.ui.ButtonPreview
import com.trafi.ui.ButtonStyledCornerRadiusPreview
import com.trafi.ui.BadgePreview
import com.trafi.ui.BadgePreviewWithSubbadge
import com.trafi.ui.SmallBadgePreview
import com.trafi.ui.SmallDisabledBadgePreview
import com.trafi.ui.SmallBadgeWithIconPreview
import com.trafi.ui.BadgeWithoutIconPreview
import com.trafi.ui.InfoButtonDisabledPreview
import com.trafi.ui.InfoButtonLongTextPreview
import com.trafi.ui.InfoButtonStyledDarkPreview
import com.trafi.ui.InfoButtonThemedPreview
import com.trafi.ui.StackedBadgePreview
import com.trafi.ui.StackedBadgePreviewWithSubbadge
import com.trafi.ui.StackedBadgeDarkPreview

@Suppress("RemoveExplicitTypeArguments")
val testPreviews = listOf<Pair<@Composable () -> Unit, String>>(
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
