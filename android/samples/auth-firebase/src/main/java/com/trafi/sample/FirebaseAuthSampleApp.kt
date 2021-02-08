package com.trafi.sample

import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.navigate
import androidx.navigation.compose.rememberNavController
import kotlinx.coroutines.flow.collect

@Composable
fun FirebaseAuthSampleApp(
    viewModel: SampleViewModel,
    onContinueWithGoogleClick: () -> Unit,
) {
    val user by viewModel.user.collectAsState()
    val navController = rememberNavController()

    NavHost(navController, startDestination = "welcome") {
        composable("welcome") {
            WelcomeScreen(
                onLaterClick = { navController.popBackStack() },
                onContinueWithGoogleClick = onContinueWithGoogleClick,
            )
        }
        composable("profile") {
            ProfileScreen(user?.profile)
        }
    }

    LaunchedEffect(Unit) {
        viewModel.signInComplete.collect { complete ->
            if (complete) navController.navigate("profile")
        }
    }
}
