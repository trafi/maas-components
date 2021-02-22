package com.trafi.sample

import android.os.Bundle
import androidx.activity.viewModels
import androidx.appcompat.app.AppCompatActivity
import androidx.compose.ui.platform.setContent
import androidx.lifecycle.lifecycleScope
import kotlinx.coroutines.flow.collect
import kotlinx.coroutines.launch

class MainActivity : AppCompatActivity() {

    private val viewModel: SampleViewModel by viewModels()
    private val googleIdp = GoogleIdentityProvider(
        activity = this,
        onSignInSuccess = { viewModel.onSignInSuccess(it) },
        onSignInError = { viewModel.onSignInError(it) },
    )

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        lifecycleScope.launch {
            viewModel.signInWithGoogle.collect { signIn ->
                if (signIn) {
                    googleIdp.signIn()
                } else {
                    googleIdp.signOut()
                }
            }
        }
        setContent {
            FirebaseAuthSampleApp(
                viewModel = viewModel,
            )
        }
    }
}
