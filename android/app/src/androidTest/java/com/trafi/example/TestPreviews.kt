package com.trafi.example

import androidx.compose.runtime.Composable
import com.trafi.ui.ButtonPreview
import com.trafi.ui.ButtonStyledCornerRadiusPreview

@Suppress("RemoveExplicitTypeArguments")
val testPreviews = listOf<Pair<@Composable () -> Unit, String>>(
        Pair({ ButtonPreview() }, "ButtonPreview"),
        Pair({ ButtonStyledCornerRadiusPreview() }, "ButtonStyledCornerRadiusPreview")
)