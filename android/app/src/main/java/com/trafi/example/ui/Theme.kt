package com.trafi.example.ui

import androidx.compose.foundation.isSystemInDarkTheme
import androidx.compose.runtime.Composable
import androidx.compose.ui.platform.AmbientConfiguration
import com.trafi.ui.theme.MaasSpacing
import com.trafi.ui.theme.MaasTheme
import com.trafi.ui.theme.Spacing
import com.trafi.ui.theme.darkColors
import com.trafi.ui.theme.lightColors

@Composable
fun DemoMaasTheme(
    darkTheme: Boolean = isSystemInDarkTheme(),
    narrowScreen: Boolean = isScreenWidthNarrow(),
    content: @Composable () -> Unit
) {
    MaasTheme(
        colors = if (darkTheme) MaasTheme.darkColors() else MaasTheme.lightColors(),
        spacing = MaasSpacing(globalMargin = if (narrowScreen) Spacing.md else Spacing.xl),
        content = content
    )
}

@Composable
fun isScreenWidthNarrow(): Boolean {
    val configuration = AmbientConfiguration.current
    return configuration.screenWidthDp <= 280
}
