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
import com.trafi.ui.StackedBadgePreview
import com.trafi.ui.StackedBadgePreviewWithSubbadge
import com.trafi.ui.StackedBadgeDarkPreview

@Suppress("RemoveExplicitTypeArguments")
val testPreviews = listOf<Pair<@Composable () -> Unit, String>>(
        Pair({ ButtonPreview() }, "ButtonPreview"),
        Pair({ ButtonStyledCornerRadiusPreview() }, "ButtonStyledCornerRadiusPreview"),
        Pair({ BadgePreview() }, "BadgePreview"),
        Pair({ BadgePreviewWithSubbadge() }, "BadgePreviewWithSubbadge"),
        Pair({ SmallBadgePreview() }, "SmallBadgePreview"),
        Pair({ SmallDisabledBadgePreview() }, "SmallDisabledBadgePreview"),
        Pair({ SmallBadgeWithIconPreview() }, "SmallBadgeWithIconPreview"),
        Pair({ BadgeWithoutIconPreview() }, "BadgeWithoutIconPreview"),
        Pair({ StackedBadgePreview() }, "StackedBadgePreview"),
        Pair({ StackedBadgePreviewWithSubbadge() }, "StackedBadgePreviewWithSubbadge"),
        Pair({ StackedBadgeDarkPreview()}, "StackedBadgeDarkPreview")
)