package com.trafi.example

import androidx.compose.runtime.Composable
import com.trafi.ui.ButtonPreview
import com.trafi.ui.ButtonStyledCornerRadiusPreview

val testPreviews = listOf(
        arrayOf<Pair<@Composable () -> Unit, String>>(Pair({ButtonPreview()}, "ButtonPreview")),
        arrayOf<Pair<@Composable () -> Unit, String>>(Pair({ButtonStyledCornerRadiusPreview()}, "ButtonStyledCornerRadiusPreview"))
)