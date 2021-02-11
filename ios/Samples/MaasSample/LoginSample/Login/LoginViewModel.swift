import Combine
import MaasCore
import SwiftUI

class LoginViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var authenticationProvider: AuthenticationProvider? = nil {
        didSet {
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

    @Published var error: ApiError? = nil {
        didSet { authenticationProvider = nil }
    }

    @Published var presentDetails: Bool = false

    var isEnabled: Bool { authenticationProvider == nil }
    var isLoading: Bool { authenticationProvider != nil }
}

// MARK: - Authentication

extension LoginViewModel {

    /* Login and store accessToken */
    func authenticate(_ provider: AuthenticationProvider) {
        FacebookAuthentication().authenticate
            .flatMap { FirebaseAuthentication.init(authCredential: $0).signIn() }
            .mapError {
                ApiError.error(
                    error: .just(devMessage: $0.localizedDescription)
                )
            }
            .sink(
                receiveCompletion: { [unowned self] in self.mapError($0) },
                receiveValue: { [unowned self] in
                    MaasConfiguration.accessToken = $0
                     self.getOrCreateUser()
                }
            )
            .store(in: &cancelableStore)
    }

    /* Request for new user creation or just get created one. */
    func getOrCreateUser() {
        UsersApi.shared.createOrGetUser(profile: .default).publisher
            .eraseToAnyPublisher()
            .sink(
                receiveCompletion: { [unowned self] in self.mapError($0) },
                receiveValue: { [unowned self] in self.user = $0; print("Magic: \($0)") }
            )
            .store(in: &cancelableStore)
    }
    
    func mapError(_ state: Subscribers.Completion<ApiError>) {
        switch state {
        case .failure(let e): error = e;
        case .finished: error = nil
        }
    }
}

private extension Profile {

    static var `default`: Self {
        .init(
            gender: .male,
            ext: [:],
            firstName: "John",
            lastName: "Doe",
            displayName: "John",
            email: "john.doe@maas.com",
            address: .init(lineOne: nil, lineTwo: nil, postCode: nil, city: "Springfield", country: "USA"),
            birthDate: nil
        )
    }
}

extension ApiError: Identifiable {
    public var id: UUID { UUID() }
}
