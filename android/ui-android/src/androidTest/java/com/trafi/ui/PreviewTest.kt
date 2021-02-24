package com.trafi.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeContentTestRule
import com.karumi.shot.ScreenshotTest

internal class PreviewTest(private val composeTestRule: ComposeContentTestRule) : ScreenshotTest {
    fun renderAndTestView(screenshotName: String, composable: @Composable () -> Unit) {
        composeTestRule.setContent(composable)
        compareScreenshot(composeTestRule, screenshotName)
    }
}
