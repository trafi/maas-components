package com.trafi.ui

import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.Grey200
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.isRound
import com.trafi.ui.theme.lightColors

object ButtonConstants {
    @Composable
    val defaultColor: Color
        get() = MaasTheme.colors.primary

    @Stable
    val disabledColor: Color
        get() = Grey200

    @Composable
    val defaultContentColor: Color
        get() = MaasTheme.colors.onPrimary

    @Composable
    val textStyle: TextStyle
        get() = MaasTheme.typography.textL.copy(fontWeight = FontWeight.Bold)

    @Stable
    val minHeight: Dp
        get() = 48.dp

    @Composable
    val cornerRadius: Dp
        get() = MaasTheme.cornerRadius.buttonRadius
}

@Composable
fun Button(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier,
    enabled: Boolean = true,
    color: Color = ButtonConstants.defaultColor,
    contentColor: Color = ButtonConstants.defaultContentColor,
) {
    androidx.compose.material.Button(
        onClick = onClick,
        modifier = modifier.heightIn(min = ButtonConstants.minHeight).fillMaxWidth(),
        enabled = enabled,
        shape = if (ButtonConstants.cornerRadius.isRound) {
            RoundedCornerShape(percent = 50)
        } else {
            RoundedCornerShape(ButtonConstants.cornerRadius)
        },
        colors = androidx.compose.material.ButtonConstants.defaultButtonColors(
            backgroundColor = color,
            disabledBackgroundColor = ButtonConstants.disabledColor,
            contentColor = contentColor
        )
    ) {
        Text(
            text,
            style = ButtonConstants.textStyle
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
