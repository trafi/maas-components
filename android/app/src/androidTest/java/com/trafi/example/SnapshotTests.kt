package com.trafi.example

import androidx.compose.ui.test.assertIsDisplayed
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.test.onNodeWithText
import androidx.compose.ui.unit.dp
import com.karumi.shot.ScreenshotTest
import com.trafi.ui.Button
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import org.junit.Rule
import org.junit.Test

class SnapshotTests: ScreenshotTest {

    @get: Rule
    val composeTestRule = createComposeRule()

    @Test
    fun renderButton(){
        composeTestRule.setContent {
            MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
                Button("Unlock now", onClick = {})
            }
        }
        compareScreenshot(composeTestRule, "test")
    }

    private fun renderButton(text: String){
        composeTestRule.setContent {
            MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
                Button("Unlock now", onClick = {})
            }
        }
        composeTestRule.onNodeWithText(text).assertIsDisplayed()
    }
}