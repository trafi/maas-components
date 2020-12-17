package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeTestRule
import com.karumi.shot.ScreenshotTest

class PreviewTest(private val composeTestRule: ComposeTestRule): ScreenshotTest {
    fun renderAndTestView(screenshotName: String, composable: @Composable () -> Unit) {
        composeTestRule.setContent(composable)
        compareScreenshot(composeTestRule, screenshotName)
    }
}
