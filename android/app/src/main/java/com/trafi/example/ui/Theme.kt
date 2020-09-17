package com.trafi.example.ui

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.runtime.Composable
import com.trafi.ui.theme.MaasTheme

@Composable
fun DemoMaasTheme(
    darkTheme: Boolean = isSystemInDarkTheme(),
    content: @Composable () -> Unit
) {
    MaasTheme(
        typography = typography,
        content = content
    )
}
