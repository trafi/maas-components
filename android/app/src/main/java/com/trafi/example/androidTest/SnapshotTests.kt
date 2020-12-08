package com.trafi.example.androidTest

import androidx.test.ext.junit.runners.AndroidJUnit4
import androidx.ui.test.createComposeRule
import com.karumi.shot.ScreenshotTest
import com.trafi.ui.Button
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith

@RunWith(AndroidJUnit4::class)
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