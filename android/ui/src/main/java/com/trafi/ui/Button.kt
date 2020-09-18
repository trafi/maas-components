package com.trafi.ui

import androidx.compose.foundation.Text
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import androidx.ui.tooling.preview.Preview
import com.trafi.ui.theme.Grey200
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.lightColors

object ButtonConstants {
    @Composable
    val defaultColor: Color
        get() = MaasTheme.colors.primary

    @Composable
    val disabledColor: Color
        get() = Grey200

    @Composable
    val textStyle: TextStyle
        get() = MaasTheme.typography.textL.copy(fontWeight = FontWeight.Bold)

    @Composable
    val cornerRadius: Dp
        get() = MaasTheme.cornerRadius.buttonRadius

    @Composable
    internal val isRound: Boolean
        get() = cornerRadius == Dp.Infinity
}

@Composable
fun Button(
    text: String,
    onClick: () -> Unit,
    modifier: Modifier = Modifier,
    enabled: Boolean = true,
    color: Color = ButtonConstants.defaultColor,
) {
    androidx.compose.material.Button(
        onClick = onClick,
        modifier = modifier.heightIn(minHeight = 48.dp).fillMaxWidth(),
        enabled = enabled,
        shape = if (ButtonConstants.isRound) {
            RoundedCornerShape(percent = 50)
        } else {
            RoundedCornerShape(ButtonConstants.cornerRadius)
        },
        backgroundColor = color,
        contentColor = Color.White,
        disabledBackgroundColor = ButtonConstants.disabledColor
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
