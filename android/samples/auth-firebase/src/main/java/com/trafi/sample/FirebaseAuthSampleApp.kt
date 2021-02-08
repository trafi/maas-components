package com.trafi.sample

import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.ExperimentalMaterialApi
import androidx.compose.material.ModalBottomSheetLayout
import androidx.compose.material.ModalBottomSheetValue
import androidx.compose.material.rememberModalBottomSheetState
import androidx.compose.runtime.Composable
import androidx.compose.runtime.LaunchedEffect
import androidx.compose.runtime.collectAsState
import androidx.compose.runtime.getValue
import androidx.compose.runtime.mutableStateOf
import androidx.compose.runtime.remember
import androidx.compose.runtime.setValue
import androidx.navigation.compose.NavHost
import androidx.navigation.compose.composable
import androidx.navigation.compose.navigate
import androidx.navigation.compose.rememberNavController
import com.trafi.core.ApiResult
import com.trafi.ui.theme.CornerRadius
import com.trafi.ui.theme.MaasTheme
import kotlinx.coroutines.flow.collect

@OptIn(ExperimentalMaterialApi::class)
@Composable
fun FirebaseAuthSampleApp(
    viewModel: SampleViewModel,
    onContinueWithGoogleClick: () -> Unit,
) {
    val user by viewModel.user.collectAsState()
    val navController = rememberNavController()
    val sheetState = rememberModalBottomSheetState(ModalBottomSheetValue.Hidden)

    var errorText by remember { mutableStateOf(defaultErrorMessage) }

    fun showError(failure: SignInResult.Failure) {
        errorText = when (val result = failure.result) {
            is ApiResult.Failure.Unauthorized -> result.error?.developerMessage
            is ApiResult.Failure.Error -> result.error?.developerMessage
            is ApiResult.Failure.Generic -> result.throwable.message
        } ?: defaultErrorMessage
        sheetState.show()
    }

    fun showError(error: SignInResult.Error) {
        errorText = error.message ?: defaultErrorMessage
        sheetState.show()
    }

    ModalBottomSheetLayout(
        sheetState = sheetState,
        sheetBackgroundColor = MaasTheme.colors.surface,
        sheetShape = RoundedCornerShape(topLeft = CornerRadius.xl, topRight = CornerRadius.xl),
        sheetContent = { AlertBottomSheet(errorText, onClick = { sheetState.hide() }) },
        content = {
            NavHost(navController, startDestination = "welcome") {
                composable("welcome") {
                    WelcomeScreen(
                        onLaterClick = { showError(SignInResult.Error()) },
                        onContinueWithGoogleClick = onContinueWithGoogleClick,
                    )
                }
                composable("profile") {
                    ProfileScreen(user?.profile)
                }
            }
        })

    LaunchedEffect(Unit) {
        viewModel.signInComplete.collect { result ->
            when (result) {
                SignInResult.Success -> {
                    sheetState.hide()
                    navController.navigate("profile")
                }
                is SignInResult.Failure -> showError(result)
                is SignInResult.Error -> showError(result)
            }
        }
    }
}

private const val defaultErrorMessage = "Oh, dear\nOops, something went wrong"
