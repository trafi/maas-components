@file:Suppress("unused", "EXTENSION_SHADOWED_BY_MEMBER")

package com.trafi.users

import com.trafi.core.ApiResult
import com.trafi.core.CFlow
import com.trafi.core.cFlow
import com.trafi.core.model.Profile
import com.trafi.core.model.ProvidersRequirementStatusResponse
import com.trafi.core.model.RequirementStatusResponse
import com.trafi.core.model.User

fun UsersApi.createOrGetUser(profile: Profile? = null): CFlow<ApiResult<User>> =
    cFlow { emit(createOrGetUser(profile)) }

fun UsersApi.updateProfile(profile: Profile? = null): CFlow<ApiResult<User>> =
    cFlow { emit(updateProfile(profile)) }

fun UsersApi.requirements(): CFlow<ApiResult<ProvidersRequirementStatusResponse>> =
    cFlow { emit(requirements()) }

fun UsersApi.providersRequirements(providerId: String): CFlow<ApiResult<RequirementStatusResponse>> =
    cFlow { emit(providersRequirements(providerId)) }
