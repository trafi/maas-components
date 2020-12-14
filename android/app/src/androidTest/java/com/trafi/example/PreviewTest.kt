package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.test.platform.app.InstrumentationRegistry
import com.karumi.shot.ScreenshotTest
import com.trafi.example.dagger.TestComponent
import org.junit.Rule
import javax.inject.Inject

class PreviewTest(private val composable: @Composable () -> Unit): ScreenshotTest {
    @get: Rule
    private val composeTestRule: ComposeTestRule = createComposeRule()
    fun renderAndTestView() {
        composeTestRule.setContent(composable)
        compareScreenshot(composeTestRule, "test")
    }
}
