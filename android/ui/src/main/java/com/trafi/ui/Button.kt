package com.trafi.ui

import androidx.compose.foundation.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.ui.tooling.preview.Preview
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.lightColors

@Composable
fun Button(
    text: String,
    onClick: () -> Unit,
    color: Color = MaasTheme.colors.primary1,
    modifier: Modifier = Modifier
) {
    androidx.compose.material.Button(
        onClick = onClick,
        modifier = modifier,
        backgroundColor = color,
        contentColor = Color.White
    ) {
        Text(text)
    }
}

@Preview
@Composable
fun ButtonPreview() {
    MaasTheme {
        Button("Unlock now", onClick = {})
    }
}

@Preview
@Composable
fun ButtonStyledCornerRadiusPreview() {
    MaasTheme(cornerRadius = MaasCornerRadius(0.unit)) {
        Button("Unlock now", onClick = {})
    }
}

@Preview
@Composable
fun ButtonStyledColorPreview() {
    val jelbiColors = lightColors(
        primary1 = Color(0xff6ca130),
        primary2 = Color(0xfff0d722)
    )
    MaasTheme(colors = jelbiColors) {
        Button("Unlock now", onClick = {})
    }
}
