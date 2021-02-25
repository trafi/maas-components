package com.trafi.sample

import androidx.compose.foundation.background
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.rememberScrollState
import androidx.compose.foundation.verticalScroll
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.trafi.ui.theme.MaasTheme
import java.util.Locale

@Composable
fun TextScreen() {
    val styles = MaasTheme.typography.run {
        listOf(
            "headingXXL" to headingXXL,
            "headingXL" to headingXL,
            "headingL" to headingL,
            "headingM" to headingM,
            "textL" to textL,
            "textM" to textM,
            "textS" to textS
        )
    }
    Column(
        modifier = Modifier
            .background(MaasTheme.colors.background)
            .verticalScroll(rememberScrollState())
    ) {
        styles.forEach { (name, style) ->
            Text(
                name.toUpperCase(Locale.US),
                style = MaasTheme.typography.label,
                modifier = Modifier
                    .fillMaxWidth()
                    .background(MaasTheme.colors.grayScale.gray300)
            )
            Text(
                text = "Lorum ipsum",
                style = style
            )
            Text(
                "$name multiline".toUpperCase(Locale.US),
                style = MaasTheme.typography.label,
                modifier = Modifier
                    .fillMaxWidth()
                    .background(MaasTheme.colors.grayScale.gray300)
            )
            Text(
                text = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod " +
                    "tempor incididunt ut labore et dolore magna aliqua.",
                style = style
            )
        }
    }
}

@Preview
@Composable
fun TextScreenPreview() {
    MaasTheme {
        TextScreen()
    }
}
