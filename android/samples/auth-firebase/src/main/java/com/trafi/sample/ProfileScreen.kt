package com.trafi.sample

import androidx.compose.foundation.Interaction
import androidx.compose.foundation.InteractionState
import androidx.compose.foundation.background
import androidx.compose.foundation.clickable
import androidx.compose.foundation.layout.Arrangement
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.shape.CornerSize
import androidx.compose.foundation.shape.ZeroCornerSize
import androidx.compose.material.Icon
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.material.TextField
import androidx.compose.material.icons.Icons
import androidx.compose.material.icons.rounded.AddCircle
import androidx.compose.runtime.Composable
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.getValue
import androidx.compose.runtime.setValue
import androidx.compose.ui.Modifier
import androidx.compose.ui.draw.rotate
import androidx.compose.ui.res.vectorResource
import androidx.compose.ui.tooling.preview.Preview
import com.trafi.core.model.Profile
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing
import com.trafi.ui.theme.internal.CornerRadiusScale
import com.trafi.ui.theme.internal.SpacingScale

@Composable
fun ProfileScreen(profile: Profile? = null) {
    var name by remember(profile) { mutableStateOf(profile?.firstName ?: "John") }
    var surname by remember(profile) { mutableStateOf(profile?.lastName ?: "Smith") }

    Column(
        modifier = Modifier
            .background(MaasTheme.colors.background)
            .fillMaxSize()
            .padding(top = SpacingScale.xl)
            .padding(horizontal = MaasTheme.spacing.globalMargin),
        verticalArrangement = Arrangement.spacedBy(Spacing.md),
    ) {
        Text(
            "My account",
            color = MaasTheme.colors.onBackground,
            style = MaasTheme.typography.headingXL,
        )

        Input(
            text = name,
            onTextChange = { name = it },
            label = "Name",
            modifier = Modifier.fillMaxWidth(),
        )
        Input(
            text = surname,
            onTextChange = { surname = it },
            label = "Surname",
            modifier = Modifier.fillMaxWidth(),
        )
    }
}

@Composable
private fun Input(
    text: String,
    onTextChange: (String) -> Unit,
    label: String,
    modifier: Modifier = Modifier,
) {
    val interactionState = remember { InteractionState() }
    val isFocused = interactionState.contains(Interaction.Focused)
    TextField(
        value = text,
        onValueChange = onTextChange,
        label = { Text(label) },
        singleLine = true,
        interactionState = interactionState,
        trailingIcon = if (text.isNotEmpty() && isFocused) {
            {
                Icon(
                    vectorResource(id = R.drawable.input_fields_remove),
                    contentDescription = "Clear",
                    modifier = Modifier.clickable { onTextChange("") }
                )
            }
        } else null,
        backgroundColor = if (isFocused) {
            MaasTheme.colors.grayScale.gray300
        } else {
            MaasTheme.colors.grayScale.gray100
        },
        shape = MaterialTheme.shapes.small.copy(
            topLeft = CornerSize(CornerRadiusScale.lg),
            topRight = CornerSize(CornerRadiusScale.lg),
            bottomLeft = ZeroCornerSize,
            bottomRight = ZeroCornerSize,
        ),
        modifier = modifier,
    )
}

@Preview
@Composable
private fun ProfileScreenPreview() {
    ProfileScreen()
}
