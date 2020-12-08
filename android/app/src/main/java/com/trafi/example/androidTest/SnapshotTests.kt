package com.trafi.example.androidTest

import androidx.compose.ui.test.junit4.createComposeRule
import com.karumi.shot.ScreenshotTest
import com.trafi.ui.Button
import org.junit.Rule
import org.junit.Test

class SnapshotTests: ScreenshotTest {

    @get: Rule
    val composeTestRule = createComposeRule()

    @Test
    fun renderButton(){
        renderButton("test")
        compareScreenshot(composeTestRule)
    }

    private fun renderButton(text: String){
        composeTestRule.setContent {
            Button(text = text, onClick = {})
        }
    }
}