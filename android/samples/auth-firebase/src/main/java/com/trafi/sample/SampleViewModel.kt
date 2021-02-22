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
import kotlinx.coroutines.delay
import kotlinx.coroutines.flow.MutableSharedFlow
import kotlinx.coroutines.flow.MutableStateFlow
import kotlinx.coroutines.flow.SharedFlow
import kotlinx.coroutines.flow.SharingStarted
import kotlinx.coroutines.flow.StateFlow
import kotlinx.coroutines.flow.distinctUntilChanged
import kotlinx.coroutines.flow.drop
import kotlinx.coroutines.flow.map
import kotlinx.coroutines.flow.shareIn
import kotlinx.coroutines.launch
import kotlinx.coroutines.sync.Mutex
import kotlinx.coroutines.sync.withLock
import kotlinx.coroutines.tasks.await

class SampleViewModel : ViewModel() {

    private var idToken: String? = null
    private val _user: MutableStateFlow<User?> = MutableStateFlow(null)
    val user: StateFlow<User?> get() = _user

    private val _error: MutableSharedFlow<Error> = MutableSharedFlow()
    val error: SharedFlow<Error> get() = _error

    val userSignedIn: SharedFlow<Boolean> = _user.map { it != null }
        .drop(1)
        .distinctUntilChanged()
        .shareIn(viewModelScope, SharingStarted.Eagerly)

    private val _signInWithGoogle: MutableSharedFlow<Boolean> = MutableSharedFlow()
    val signInWithGoogle: SharedFlow<Boolean> get() = _signInWithGoogle

    private val config = ApiConfiguration(
        baseUrl = BuildConfig.API_BASE_URL,
        apiKey = BuildConfig.API_KEY,
        getIdToken = { idToken },
        logger = AndroidLogger(),
    )
    private val usersApi = UsersApi(config)
    private val firebaseAuth = Firebase.auth

    private val mutex: Mutex = Mutex()
    private suspend fun refresh() {
        val token = idToken
        mutex.withLock {
            if (idToken == token) {
                delay(3000)
                firebaseAuth.currentUser?.let { signInWithFirebaseUser(it) }
            } // else, the id token was already refreshed before us
        }
    }

    private suspend fun signInWithFirebaseUser(user: FirebaseUser) {
        val result = try {
            user.getIdToken(false).await()
        } catch (e: FirebaseAuthInvalidUserException) {
            _error.emit(Error.Message(e.message))
            null
        }
        result?.token?.let { idToken -> createOrGetUser(idToken) }
    }

    private suspend fun createOrGetUser(idToken: String) {
        this.idToken = idToken
        when (val result = usersApi.createOrGetUser()) {
            is ApiResult.Success -> {
                _user.value = result.value
            }
            is ApiResult.Failure -> {
                _error.emit(Error.Failure(result))
            }
        }
    }

    fun onContinueWithGoogleClick() = viewModelScope.launch {
        _signInWithGoogle.emit(true)
    }

    fun onSignInSuccess(credential: AuthCredential) = viewModelScope.launch {
        val user = try {
            val result = firebaseAuth.signInWithCredential(credential).await()
            result.user
        } catch (e: FirebaseAuthInvalidUserException) {
            _error.emit(Error.Message(e.message))
            null
        } catch (e: FirebaseAuthInvalidCredentialsException) {
            _error.emit(Error.Message(e.message))
            null
        } catch (e: FirebaseAuthUserCollisionException) {
            _error.emit(Error.Message(e.message))
            null
        }

        user?.let { signInWithFirebaseUser(it) }
    }

    fun onSignInError(throwable: Throwable) = viewModelScope.launch {
        _error.emit(Error.Message(throwable.message))
    }

    fun updateProfile(profile: Profile) = viewModelScope.launch {
        when (val result = retry(::refresh) { usersApi.updateProfile(profile) }) {
            is ApiResult.Success -> {
                _user.value = result.value
            }
            is ApiResult.Failure -> {
                _error.emit(Error.Failure(result))
            }
        }
    }

    fun signOut() = viewModelScope.launch {
        firebaseAuth.signOut()
        _user.value = null
        _signInWithGoogle.emit(false)
    }

    fun corruptToken() {
        idToken = null
    }
}

sealed class Error {
    class Failure(val result: ApiResult.Failure<User>) : Error()
    class Message(val message: String? = null) : Error()
}
