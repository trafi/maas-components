package com.trafi.sample

import android.os.Bundle
import androidx.activity.viewModels
import androidx.appcompat.app.AppCompatActivity
import androidx.compose.ui.platform.setContent

class MainActivity : AppCompatActivity() {

    private val viewModel: SampleViewModel by viewModels()
    private val googleIdp = GoogleIdentityProvider(
        activity = this,
        onSignInSuccess = { viewModel.onSignInSuccess(it) },
        onSignInError = { viewModel.onSignInError(it) },
    )

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            FirebaseAuthSampleApp(
                viewModel = viewModel,
                onContinueWithGoogleClick = { googleIdp.signIn() },
            )
        }
    }
}
