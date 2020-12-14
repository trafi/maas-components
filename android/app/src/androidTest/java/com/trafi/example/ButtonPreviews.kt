package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.karumi.shot.ScreenshotTest
import com.trafi.ui.Button
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import org.junit.Rule
import org.junit.Test

class ButtonPreviews: ScreenshotTest {
    @get: Rule
    val composeTestRule = createComposeRule()

    @Test
    fun buttonTest() {
        PreviewTest(
            {
                MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
                    Button("Unlock now", onClick = {})
                }
            },
            composeTestRule
        ).renderAndTestView()

    }
}

