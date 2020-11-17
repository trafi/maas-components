package com.trafi.example

import androidx.compose.foundation.ScrollableColumn
import androidx.compose.foundation.background
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.ui.tooling.preview.Preview
import com.trafi.ui.theme.Grey300
import com.trafi.ui.theme.MaasTheme

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
    ScrollableColumn(modifier = Modifier.background(MaasTheme.colors.background)) {
        styles.forEach { (name, style) ->
            Text(
                name.toUpperCase(),
                style = MaasTheme.typography.label,
                modifier = Modifier
                    .fillMaxWidth()
                    .background(Grey300)
            )
            Text(
                text = "Lorum ipsum",
                style = style
            )
            Text(
                "$name multiline".toUpperCase(),
                style = MaasTheme.typography.label,
                modifier = Modifier
                    .fillMaxWidth()
                    .background(Grey300)
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
