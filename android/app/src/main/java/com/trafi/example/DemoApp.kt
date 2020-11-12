package com.trafi.example

import androidx.compose.runtime.Composable
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.navigate
import androidx.navigation.compose.rememberNavController
import com.trafi.example.ui.DemoMaasTheme
import com.trafi.routes.ui.RoutesScreen

@Composable
fun DemoApp() {
    DemoMaasTheme {
        AppContent()
    }
}

@Composable
private fun AppContent() {
    val navController = rememberNavController()

    NavHost(navController, startDestination = "onboarding") {
        composable("onboarding") {
            OnboardingScreen(
                onComplete = { navController.navigate("routes") },
            )
        }
        composable("routes") {
            RoutesScreen(
                baseUrl = BuildConfig.API_BASE_URL,
                apiKey = BuildConfig.API_KEY,
                regionId = BuildConfig.REGION_ID,
                onRouteClick = {},
                onBackClick = { navController.popBackStack() },
            )
        }
    }
}
