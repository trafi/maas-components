package com.trafi.core

sealed class ErrorCode {
    enum class Msp(val value: String) {
        PhoneNumberAlreadyRegisteredWithProvider("msp:phone_number_already_registered_with_provider"),
        UserDoesNotHaveProviderAccount("msp:user_does_not_have_provider_account"),
        UserHasUnfulfilledRequirements("msp:user_has_unfulfilled_requirements"),
        UnsupportedResourceSpecifier("msp:unsupported_resource_specifier");
//        RefreshTokenRejected("msp:refresh_token_rejected"),
//        AccessTokenRejected("msp:access_token_rejected"),
//        AuthDataRejected("msp:auth_data_rejected"),
//        AccountRegistrationInProgress("msp:account_registration_in_progress"),
//        AccountConnectionInProgress("msp:account_connection_in_progress"),
//        ProviderAccountAlreadyConnected("msp:account_already_connected"),
//        UserAlreadyHasAccountWithProvider("msp:user_already_has_account_with_provider"),
//        UserHasDifferentAccountWithProvider("msp:user_has_different_account_with_provider");

        companion object {
            fun parse(value: String?): Msp? {
                return values().firstOrNull { it.value == value }
            }
        }
    }

    enum class Users(val value: String) {
        TokenInvalidOrExpired("users:token_invalid_or_expired"),
        RefreshTokenInvalidOrExpired("users:refresh_token_invalid_or_expired"),
        UsernameAlreadyExists("users:username_already_exists"),
        UsernameOrPasswordWrong("users:username_or_password_wrong"),
        AccountInactive("users:account_inactive"),
        UserIdpAccountUnregistered("users:identity_provider_account_unregistered"),
        UserIdpAccountSuspended("users:identity_provider_account_suspended"),
        UserAlreadyHasMembership("users:user_already_has_membership"),
        PhoneIsAlreadyUsed("users:phone_is_already_used");

        companion object {
            fun parse(value: String?): Users? {
                return values().firstOrNull { it.value == value }
            }
        }
    }
}
