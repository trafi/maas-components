package com.trafi.ui

import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.isRound
import com.trafi.ui.component.internal.ButtonConstants
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.currentTheme
import com.trafi.ui.theme.lightColors

@Composable
private val constants
    get() = ButtonConstants(currentTheme)

@Composable
fun Button(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier,
    enabled: Boolean = true,
    color: Color = constants.defaultBackgroundColor,
    disabledColor: Color = constants.disabledBackgroundColor,
    contentColor: Color = constants.defaultContentColor,
    disabledContentColor: Color = constants.disabledContentColor,
) {
    androidx.compose.material.Button(
        onClick = onClick,
        modifier = modifier.heightIn(min = constants.minHeight).fillMaxWidth(),
        enabled = enabled,
        shape = if (constants.cornerRadius.isRound) {
            RoundedCornerShape(percent = 50)
        } else {
            RoundedCornerShape(constants.cornerRadius)
        },
        colors = androidx.compose.material.ButtonConstants.defaultButtonColors(
            backgroundColor = color,
            disabledBackgroundColor = disabledColor,
            contentColor = contentColor,
            disabledContentColor = disabledContentColor
        )
    ) {
        Text(
            text,
            style = constants.textStyle
        )
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
    MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
        Button("Unlock now", onClick = {})
    }
}

@Preview
@Composable
fun ButtonStyledColorPreview() {
    val jelbiColors = MaasTheme.lightColors(
        primary = Color(0xff6ca130),
        primaryVariant = Color(0xfff0d722)
    )
    MaasTheme(colors = jelbiColors) {
        Button("Unlock now", onClick = {})
    }
}
