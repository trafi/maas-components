import Combine
import MaasCore
import SwiftUI

import struct SwiftUI.State

class LoginViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var authenticationProvider: AuthenticationProvider? = nil {
        didSet {

            isLoading = authenticationProvider != nil

            guard
                authenticationProvider != oldValue,
                let authentication = authenticationProvider
            else { return }

            authenticate(authentication)
        }
    }

    @Published var user: MaasCore.User? = nil {
        didSet { presentDetails = user != nil }
    }

    @Published var error: AuthenticationError? = nil {
        didSet { authenticationProvider = nil }
    }

    @Published var presentDetails: Bool = false

    var isLoading: Bool = false

    // MARK: - Authentication

    /* Login and store accessToken */
    func authenticate(_ provider: AuthenticationProvider) {
        FacebookAuthentication().authenticate
            .flatMap { FirebaseAuthentication.init(authCredential: $0).signIn() }
            .sink(
                receiveCompletion: { [unowned self] in
                    if case .failure(let error) = $0 {
                        self.error = error
                    } else {
                        self.error = nil
                    }
                },
                receiveValue: { [unowned self] in
                    MaasConfiguration.accessToken = $0
                    MaasConfiguration.temporaryAccessToken = $0
                    self.getOrCreateUser()
                }
            )
            .store(in: &cancelableStore)
    }

    func getOrCreateUser() {
        UsersApi.shared.createOrGetUser(profile: .default).publisher
            .sink(receiveCompletion: onError, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    // MARK: - Handlers

    private func onError(_ completion: Subscribers.Completion<ApiError>) {
        switch completion {
        case .finished:
            error = nil
        case let .failure(apiError):
            error = .apiError(apiError)
        }

        isLoading = false
    }

    private func onValue(_ completion: MaasCore.User) {
        user = completion
    }
}
