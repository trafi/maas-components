package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeTestRule
import com.karumi.shot.ScreenshotTest

class PreviewTest(private val composable: @Composable () -> Unit, val composeTestRule: ComposeTestRule): ScreenshotTest {
    fun renderAndTestView() {
        composeTestRule.setContent(composable)
        compareScreenshot(composeTestRule, "test")
    }
}
