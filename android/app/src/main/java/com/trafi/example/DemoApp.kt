package com.trafi.example

import androidx.compose.animation.Crossfade
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import com.trafi.example.ui.DemoMaasTheme
import com.trafi.example.util.NavigationViewModel
import com.trafi.example.util.Screen
import com.trafi.routes.ui.RoutesScreen
import com.trafi.ui.theme.MaasTheme

@Composable
fun DemoApp(navigationViewModel: NavigationViewModel) {
    DemoMaasTheme {
        AppContent(navigationViewModel)
    }
}

@Composable
private fun AppContent(
    navigationViewModel: NavigationViewModel
) {
    Crossfade(navigationViewModel.currentScreen) { screen ->
        Surface(
            color = MaasTheme.colors.background,
            contentColor = MaasTheme.colors.onBackground
        ) {
            when (screen) {
                is Screen.Onboarding -> OnboardingScreen(
                    onComplete = { navigationViewModel.navigateTo(Screen.Routes) },
                )
                is Screen.Routes -> RoutesScreen(
                    baseUrl = BuildConfig.API_BASE_URL,
                    apiKey = BuildConfig.API_KEY,
                    regionId = BuildConfig.REGION_ID,
                    onRouteClick = {},
                    onBackClick = { navigationViewModel.onBack() },
                )
            }
        }
    }
}
