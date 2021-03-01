package com.trafi.ui

import androidx.compose.runtime.Composable
import androidx.compose.ui.test.junit4.ComposeContentTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import androidx.test.rule.GrantPermissionRule
import androidx.test.rule.GrantPermissionRule.grant
import com.karumi.shot.ScreenshotTest
import org.junit.Before
import org.junit.Rule
import org.junit.Test
import org.junit.runner.RunWith
import org.junit.runners.Parameterized

@RunWith(Parameterized::class)
public class PreviewTests(
    private val previewWithName: Pair<@Composable () -> Unit, String>,
) : ScreenshotTest {
    public companion object {
        @JvmStatic
        @Parameterized.Parameters
        public fun previews(): List<Pair<@Composable () -> Unit, String>> = testPreviews
    }

    private lateinit var previewTest: PreviewTest

    @get:Rule
    public val composeTestRule: ComposeContentTestRule = createComposeRule()

    @get:Rule
    public val grantPermissionRule: GrantPermissionRule = grant(
        android.Manifest.permission.READ_EXTERNAL_STORAGE,
        android.Manifest.permission.WRITE_EXTERNAL_STORAGE,
    )

    @Before
    public fun init() {
        previewTest = PreviewTest(composeTestRule)
    }

    @Test
    public fun previewTest() {
        val (preview, name) = previewWithName
        previewTest.renderAndTestView(name) { preview() }
    }
}
