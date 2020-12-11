package com.trafi.ui

import androidx.annotation.DrawableRes
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.heightIn
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.ContentAlpha
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.ui.Modifier
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.font.FontWeight
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.*
import com.trafi.ui.theme.isRound

object InfoButtonConstants {

    @Composable
    val textStyle: TextStyle
        get() = MaasTheme.typography.textM.copy(fontWeight = FontWeight.SemiBold)

    @Stable
    val minHeight: Dp
        get() = 48.dp

    @Composable
    val cornerRadius: Dp
        get() = MaasTheme.cornerRadius.buttonRadius
}

@Composable
fun InfoButton(
    text: String,
    modifier: Modifier = Modifier,
    @DrawableRes iconRes: Int = R.drawable.ic_help_info_s,
    onClick: () -> Unit,
    enabled: Boolean = true
) {
    androidx.compose.material.Button(
        onClick = onClick,
        modifier = modifier.heightIn(min = InfoButtonConstants.minHeight),
        enabled = enabled,
        shape = if (InfoButtonConstants.cornerRadius.isRound) {
            RoundedCornerShape(percent = 50)
        } else {
            RoundedCornerShape(ButtonConstants.cornerRadius).copy()
        },
        colors = androidx.compose.material.ButtonConstants.defaultButtonColors(
            backgroundColor = MaasTheme.colors.background,
            disabledBackgroundColor = MaasTheme.colors.background,
            contentColor = MaasTheme.colors.onBackground,
            disabledContentColor = MaasTheme.colors.onBackground.copy(alpha = ContentAlpha.disabled)
        ),
        contentPadding = PaddingValues(Spacing.sm)
    ) {
        val iconTint = MaasTheme.colors.onBackground.let {
            if (!enabled) it.copy(alpha = ContentAlpha.disabled) else it
        }
        Icon(
            imageVector = vectorResource(id = iconRes),
            modifier = modifier.padding(end = Spacing.xs),
            tint = iconTint
        )
        Text(
            text,
            style = InfoButtonConstants.textStyle
        )
    }
}

@Preview
@Composable
fun InfoButtonPreview() {
    MaasTheme {
        InfoButton(
            text = "Info",
            onClick = {}
        )
    }
}

@Preview
@Composable
fun InfoButtonStyledCornerRadiusPreview() {
    MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
        InfoButton(
            text = "Info",
            onClick = {}
        )
    }
}

@Preview
@Composable
fun InfoButtonDisabledPreview() {
    MaasTheme {
        InfoButton(
            text = "Info",
            enabled = false,
            onClick = {}
        )
    }
}

@Preview
@Composable
fun InfoButtonStyledDarkPreview() {
    MaasTheme(colors = MaasTheme.darkColors()) {
        InfoButton(
            text = "How it works",
            onClick = {}
        )
    }
}

@Preview
@Composable
fun InfoButtonStyledDarkDisabledPreview() {
    MaasTheme(colors = MaasTheme.darkColors()) {
        InfoButton(
            text = "How it works",
            enabled = false,
            onClick = {}
        )
    }
}
