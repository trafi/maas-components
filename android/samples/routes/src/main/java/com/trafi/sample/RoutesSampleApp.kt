package com.trafi.sample

import androidx.compose.animation.ExperimentalAnimationApi
import androidx.compose.animation.core.tween
import androidx.compose.animation.slideInHorizontally
import androidx.compose.animation.slideOutHorizontally
import androidx.compose.runtime.Composable
import com.google.accompanist.navigation.animation.AnimatedNavHost
import com.google.accompanist.navigation.animation.composable
import com.google.accompanist.navigation.animation.rememberAnimatedNavController
import com.trafi.core.AndroidLogger
import com.trafi.core.ApiConfiguration
import com.trafi.routes.ui.RoutesScreen

@Composable
fun RoutesSampleApp() {
    SampleTheme {
        AppContent()
    }
}

@OptIn(ExperimentalAnimationApi::class)
@Composable
private fun AppContent() {
    val navController = rememberAnimatedNavController()

    AnimatedNavHost(navController, startDestination = "onboarding",
        enterTransition = { _, _ ->
            slideInHorizontally(initialOffsetX = { it }, animationSpec = tween(700))
        },
        exitTransition = { _, _ ->
            slideOutHorizontally(targetOffsetX = { -it }, animationSpec = tween(700))
        },
        popEnterTransition = { _, _ ->
            slideInHorizontally(initialOffsetX = { -it }, animationSpec = tween(700))
        },
        popExitTransition = { _, _ ->
            slideOutHorizontally(targetOffsetX = { it }, animationSpec = tween(700))
        }) {
        composable("onboarding") {
            OnboardingScreen(
                onComplete = { navController.navigate("routes") },
            )
        }
        composable("routes") {
            RoutesScreen(
                apiConfig = apiConfig,
                regionId = BuildConfig.REGION_ID,
                onRouteClick = {},
                onBackClick = { navController.popBackStack() },
            )
        }
    }
}

private val apiConfig: ApiConfiguration =
    ApiConfiguration(
        baseUrl = BuildConfig.API_BASE_URL,
        apiKey = BuildConfig.API_KEY,
        logger = AndroidLogger(tag = "demo-app"),
    )
