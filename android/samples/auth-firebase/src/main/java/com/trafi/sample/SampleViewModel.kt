package com.trafi.sample

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.google.firebase.auth.AuthCredential
import com.google.firebase.auth.FirebaseAuthInvalidCredentialsException
import com.google.firebase.auth.FirebaseAuthInvalidUserException
import com.google.firebase.auth.FirebaseAuthUserCollisionException
import com.google.firebase.auth.FirebaseUser
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.trafi.core.AndroidLogger
import com.trafi.core.ApiConfiguration
import com.trafi.core.ApiResult
import com.trafi.core.model.Profile
import com.trafi.core.model.User
import com.trafi.users.UsersApi
import kotlinx.coroutines.flow.MutableSharedFlow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharedFlow
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.launch
import kotlinx.coroutines.tasks.await

class SampleViewModel : ViewModel() {

    private var idToken: String? = null
    private val _user: MutableStateFlow<User?> = MutableStateFlow(null)
    val user: StateFlow<User?> get() = _user

    private val _signInComplete: MutableSharedFlow<SignInResult> = MutableSharedFlow()
    val signInComplete: SharedFlow<SignInResult> get() = _signInComplete

    private val config = ApiConfiguration(
        baseUrl = BuildConfig.API_BASE_URL,
        apiKey = BuildConfig.API_KEY,
        getIdToken = { idToken },
        logger = AndroidLogger(),
    )
    private val usersApi = UsersApi(config)
    private val firebaseAuth = Firebase.auth

    private suspend fun signInWithFirebaseUser(user: FirebaseUser) {
        val result = try {
            user.getIdToken(false).await()
        } catch (e: FirebaseAuthInvalidUserException) {
            _signInComplete.emit(SignInResult.Error(e.message))
            null
        }
        result?.token?.let { idToken -> createOrGetUser(idToken) }
    }

    private suspend fun createOrGetUser(idToken: String) {
        this.idToken = idToken
        when (val result = usersApi.createOrGetUser()) {
            is ApiResult.Success -> {
                _user.value = result.value
                _signInComplete.emit(SignInResult.Success)
            }
            is ApiResult.Failure -> {
                _signInComplete.emit(SignInResult.Failure(result))
            }
        }
    }

    fun onSignInSuccess(credential: AuthCredential) = viewModelScope.launch {
        val user = try {
            val result = firebaseAuth.signInWithCredential(credential).await()
            result.user
        } catch (e: FirebaseAuthInvalidUserException) {
            _signInComplete.emit(SignInResult.Error(e.message))
            null
        } catch (e: FirebaseAuthInvalidCredentialsException) {
            _signInComplete.emit(SignInResult.Error(e.message))
            null
        } catch (e: FirebaseAuthUserCollisionException) {
            _signInComplete.emit(SignInResult.Error(e.message))
            null
        }

        user?.let { signInWithFirebaseUser(it) }
    }

    fun onSignInError(throwable: Throwable) = viewModelScope.launch {
        _signInComplete.emit(SignInResult.Error(throwable.message))
    }

    fun updateProfile(profile: Profile) = viewModelScope.launch {
        when (val result = usersApi.updateProfile(profile)) {
            is ApiResult.Success -> {
                _user.value = result.value
            }
            is ApiResult.Failure -> {
            }
        }
    }

    fun signOut() {}

    fun corruptToken() {}
}

sealed class SignInResult {
    object Success : SignInResult()
    class Failure(val result: ApiResult.Failure<User>) : SignInResult()
    class Error(val message: String? = null) : SignInResult()
}
