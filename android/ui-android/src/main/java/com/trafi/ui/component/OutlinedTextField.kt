package com.trafi.ui.component

import androidx.compose.foundation.interaction.MutableInteractionSource
import androidx.compose.foundation.interaction.collectIsFocusedAsState
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.sizeIn
import androidx.compose.foundation.text.BasicTextField
import androidx.compose.foundation.text.KeyboardOptions
import androidx.compose.material.LocalContentAlpha
import androidx.compose.material.LocalContentColor
import androidx.compose.material.LocalTextStyle
import androidx.compose.runtime.Composable
import androidx.compose.runtime.Stable
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.drawBehind
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.Path
import androidx.compose.ui.graphics.SolidColor
import androidx.compose.ui.graphics.drawscope.Stroke
import androidx.compose.ui.graphics.takeOrElse
import androidx.compose.ui.text.TextStyle
import androidx.compose.ui.text.input.TextFieldValue
import androidx.compose.ui.text.input.VisualTransformation
import androidx.compose.ui.tooling.preview.Preview
import androidx.compose.ui.unit.Dp
import androidx.compose.ui.unit.dp
import com.trafi.ui.theme.MaasTheme

@Composable
public fun OutlinedTextField(
    value: String,
    onValueChange: (String) -> Unit,
    modifier: Modifier = Modifier,
    textStyle: TextStyle = LocalTextStyle.current,
    visualTransformation: VisualTransformation = VisualTransformation.None,
    keyboardOptions: KeyboardOptions = KeyboardOptions.Default,
    activeColor: Color = MaasTheme.colors.primary,
    inactiveColor: Color = MaasTheme.colors.grayScale.gray300,
) {
    var textFieldValueState by remember { mutableStateOf(TextFieldValue(text = value)) }
    val textFieldValue = textFieldValueState.copy(text = value)

    val interactionSource = remember { MutableInteractionSource() }
    val isFocused = interactionSource.collectIsFocusedAsState().value

    val textFieldModifier = Modifier.padding(horizontal = 12.dp, vertical = 8.dp).fillMaxWidth()

    val borderColor = if (isFocused) activeColor else inactiveColor
    val borderWidth = 1.dp
    val borderRadius = 10.dp

    val outlinedBorderParams = remember {
        OutlinedBorderParams(
            borderWidth,
            borderColor,
            borderRadius,
        )
    }

    if (borderColor != outlinedBorderParams.color.value ||
        borderWidth != outlinedBorderParams.borderWidth.value
    ) {
        outlinedBorderParams.color.value = borderColor
        outlinedBorderParams.borderWidth.value = borderWidth
    }

    val textColor = textStyle.color.takeOrElse {
        LocalContentColor.current.copy(alpha = LocalContentAlpha.current)
    }

    Row(
        modifier = modifier
            .sizeIn(
                minWidth = TextFieldMinWidth,
                minHeight = TextFieldMinHeight
            )
            .drawOutlinedBorder(outlinedBorderParams),
        verticalAlignment = Alignment.CenterVertically
    ) {
        BasicTextField(
            value = textFieldValue,
            onValueChange = {
                textFieldValueState = it
                if (value != it.text) {
                    onValueChange(it.text)
                }
            },
            modifier = textFieldModifier,
            textStyle = textStyle.copy(color = textColor),
            keyboardOptions = keyboardOptions,
            visualTransformation = visualTransformation,
            interactionSource = interactionSource,
            cursorBrush = SolidColor(activeColor),
        )
    }
}

@Preview(showBackground = true, backgroundColor = 0xFFFFFF)
@Composable
private fun OutlinedTextFieldPreview() {
    MaasTheme {
        OutlinedTextField(
            value = "Insert text here..",
            onValueChange = {},
            modifier = Modifier.padding(16.dp)
        )
    }
}

private fun Modifier.drawOutlinedBorder(
    borderParams: OutlinedBorderParams
): Modifier = drawBehind {
    val lineWidth = borderParams.borderWidth.value.value * density
    val width: Float = size.width
    val height: Float = size.height

    val radius = borderParams.cornerRadius.value * density
    val dx = if (radius > width / 2) width / 2 else radius
    val dy = if (radius > height / 2) height / 2 else radius

    val path = Path().apply {
        // width and height minus corners and line width
        val effectiveWidth: Float = width - 2 * dx - lineWidth
        val effectiveHeight: Float = height - 2 * dy - lineWidth

        // top-right corner
        moveTo(width - lineWidth / 2, dy + lineWidth / 2)
        relativeQuadraticBezierTo(0f, -dy, -dx, -dy)

        // top line
        relativeLineTo(-effectiveWidth, 0f)

        // top-left corner and left line
        relativeQuadraticBezierTo(-dx, 0f, -dx, dy)
        relativeLineTo(0f, effectiveHeight)

        // bottom-left corner and bottom line
        relativeQuadraticBezierTo(0f, dy, dx, dy)
        relativeLineTo(effectiveWidth, 0f)

        // bottom-right corner and right line
        relativeQuadraticBezierTo(dx, 0f, dx, -dy)
        relativeLineTo(0f, -effectiveHeight)
    }

    drawPath(
        path = path,
        color = borderParams.color.value,
        style = Stroke(width = lineWidth)
    )
}

@Stable
private class OutlinedBorderParams(
    initialBorderWidth: Dp,
    initialColor: Color,
    val cornerRadius: Dp = 4.dp
) {
    val borderWidth = mutableStateOf(initialBorderWidth)
    val color = mutableStateOf(initialColor)
}

private val TextFieldMinHeight = 40.dp
private val TextFieldMinWidth = 280.dp
