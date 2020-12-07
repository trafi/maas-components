package com.trafi.example.androidTest

import org.junit.Rule
import org.junit.Test
import androidx.ui.test.createComposeRule
import com.karumi.shot.ScreenshotTest

class SnapshotTests: ScreenshotTest {

    @get: Rule
    val composeTestRule = createComposeRule()

    @Test
    fun rendersStuff(){

    }
}