package com.trafi.example.androidTest

import org.junit.Rule
import org.junit.Test
import androidx.ui.test.createComposeRule

class SnapshotTests: ScreenshotTest {

    @get: Rule
    val composeTestRule = createComposeRule()

    @Test
    fun rendersStuff(){

    }
}