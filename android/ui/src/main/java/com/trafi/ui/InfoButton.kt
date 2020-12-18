package com.trafi.ui

import androidx.annotation.DrawableRes
import androidx.compose.foundation.layout.PaddingValues
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Icon
import androidx.compose.material.Text
import androidx.compose.material.TextButton
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.res.imageResource
import androidx.compose.ui.text.style.TextOverflow
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.dp
import com.trafi.ui.component.internal.InfoButtonConstants
import com.trafi.ui.theme.*
import com.trafi.ui.theme.internal.TextStyle
import com.trafi.ui.theme.isRound

@Composable
private val constants
    get() = InfoButtonConstants(currentTheme)

@Composable
fun InfoButton(
    text: String,
    modifier: Modifier = Modifier,
    @DrawableRes iconRes: Int = R.drawable.ic_help_info_s,
    onClick: () -> Unit,
    enabled: Boolean = true,
    backgroundColor: Color = Color.Transparent,
    contentColor: Color = constants.defaultContentColor,
    disabledContentColor: Color = constants.disabledContentColor,
    textStyle: TextStyle = constants.textStyle,
) {
    TextButton(
        onClick = onClick,
        enabled = enabled,
        shape = if (constants.cornerRadius.isRound) {
            RoundedCornerShape(percent = 50)
        } else {
            RoundedCornerShape(constants.cornerRadius)
        },
        colors = androidx.compose.material.ButtonConstants.defaultTextButtonColors(
            backgroundColor = backgroundColor,
            contentColor = contentColor,
            disabledContentColor = disabledContentColor,
        ),
        contentPadding = with(constants) {
            PaddingValues(
                start = paddingHorizontal,
                top = paddingVertical,
                end = paddingHorizontal,
                bottom = paddingVertical,
            )
        }
    ) {
        Icon(
            bitmap = imageResource(id = iconRes),
            modifier = modifier
                .padding(end = constants.spaceBetween)
                .size(width = constants.iconWidth, height = constants.iconHeight),
        )
        Text(
            text = text,
            overflow = TextOverflow.Ellipsis,
            maxLines = constants.maxLinesCount,
            style = textStyle,
        )
    }
}

@Preview(showBackground = true, backgroundColor = 0xffffffff, widthDp = 150)
@Composable
fun InfoButtonPreview() {
    MaasTheme {
        InfoButton(
            text = "Info view view view",
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

@Preview(showBackground = true, backgroundColor = 0xff000000)
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
