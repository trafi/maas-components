package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import com.karumi.shot.ScreenshotTest
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import org.junit.runners.Parameterized

@RunWith(Parameterized::class)
class ComposablePreviewsTests(
    private val previewWithName: Pair<@Composable () -> Unit, String>,
) : ScreenshotTest {
    companion object {
        @JvmStatic
        @Parameterized.Parameters
        fun previews() = testPreviews
    }

    lateinit var previewTest: PreviewTest

    @get:Rule
    val composeTestRule: ComposeTestRule = createComposeRule()

    @Before
    fun init() {
        previewTest = PreviewTest(composeTestRule = composeTestRule)
    }

    @Test
    fun previewTest() {
        val (preview, name) = previewWithName
        previewTest
            .renderAndTestView(name) {
                preview()
            }
    }
}
