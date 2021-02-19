package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeContentTestRule
import com.karumi.shot.ScreenshotTest

class PreviewTest(private val composeTestRule: ComposeContentTestRule) : ScreenshotTest {
    fun renderAndTestView(screenshotName: String, composable: @Composable () -> Unit) {
        composeTestRule.setContent(composable)
        compareScreenshot(composeTestRule, screenshotName)
    }
}
