import Combine
import MaasCore
import SwiftUI

import struct SwiftUI.State

class LoginViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    var api: API {
        API(
            user: .init(
                get: { self.user },
                set: { self.user = $0 }
            ),
            error: .init(
                get: { self.error },
                set: { self.error = $0 }
            ),
            cancelableStore: &cancelableStore
        )
    }

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

    @Published var user: User? = nil {
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
                    self.api.getOrCreateUser()
                }
            )
            .store(in: &cancelableStore)
    }
}
