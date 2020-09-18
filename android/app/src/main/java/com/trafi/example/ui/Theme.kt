package com.trafi.example.ui

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.runtime.Composable
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.darkColors
import com.trafi.ui.theme.lightColors

@Composable
fun DemoMaasTheme(
    darkTheme: Boolean = isSystemInDarkTheme(),
    content: @Composable () -> Unit
) {
    MaasTheme(
        colors = if (darkTheme) MaasTheme.darkColors() else MaasTheme.lightColors(),
        content = content
    )
}
