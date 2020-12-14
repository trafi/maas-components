package com.trafi.example

import androidx.compose.ui.test.junit4.ComposeTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.unit.dp
import com.karumi.shot.ScreenshotTest
import com.trafi.ui.Button
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import org.junit.Before
import org.junit.Rule
import org.junit.Test

class ButtonPreviews: ScreenshotTest {
    lateinit var previewTest: PreviewTest

    @get:Rule
    val composeTestRule: ComposeTestRule = createComposeRule()

    @Before
    fun init() {
        previewTest = PreviewTest(composeTestRule = composeTestRule)
    }

    @Test
    fun buttonTest() {
        previewTest
            .renderAndTestView {
                MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
                    Button("Unlock now", onClick = {})
                }
            }
    }
}

