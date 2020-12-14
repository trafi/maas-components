package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.compose.ui.unit.dp
import com.trafi.ui.Button
import com.trafi.ui.theme.MaasCornerRadius
import com.trafi.ui.theme.MaasTheme

val testPreviews = listOf<@Composable () -> Unit> (
    {
        MaasTheme(cornerRadius = MaasCornerRadius(buttonRadius = 0.dp)) {
            Button("Unlock now", onClick = {})
        }
    },
    {
        MaasTheme {
            Button("Unlock now", onClick = {})
        }
    }
)