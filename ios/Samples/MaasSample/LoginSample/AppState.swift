import MaasCore
import Combine
import SwiftUI

class AppState: ObservableObject {

    @Published var user: User? = nil
    @Published var error: AuthenticationError? = nil

    var cancelableStore = Set<AnyCancellable>()

    // MARK: - Authentication

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

    // MARK: - Requests

    func getOrCreateUser() {
        UsersApi.shared.createOrGetUser(profile: .default).publisher
            .sink(receiveCompletion: onError, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    func updateProfile() {
        UsersApi.shared.updateProfile(profile: user?.profile).publisher
            .sink(receiveCompletion: onError, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    private func onError(_ completion: Subscribers.Completion<ApiError>) {
        switch completion {
        case .finished:
            error = nil
        case let .failure(apiError):
            error = .apiError(apiError)
        }

        isLoading = false
    }

    private func onValue(_ completion: User) {
        user = completion
    }

    // MARK: - Queries

    var isLoading: Bool = false

    func logout() {
        user = nil
        corruptToken()
    }

    func corruptToken() {
        MaasConfiguration.accessToken = ""
    }

    // MARK: - Bindings

    lazy var firstName: Binding<String> = {
        .init(
            get: { self.user?.profile.firstName ?? "" },
            set: { value in

                guard let user = self.user else { return }

                let newProfile = Profile(
                    gender: user.profile.gender,
                    ext: user.profile.ext,
                    firstName: value,
                    lastName: user.profile.lastName,
                    displayName: user.profile.displayName,
                    email: user.profile.email,
                    address: user.profile.address,
                    birthDate: user.profile.birthDate
                )

                let newUser = User(
                    id: user.id,
                    identity: user.identity,
                    profile: newProfile,
                    phoneNumber: user.phoneNumber,
                    providerAccounts: user.providerAccounts,
                    drivingLicence: user.drivingLicence,
                    terms: user.terms,
                    paymentMethods: user.paymentMethods,
                    memberships: user.memberships
                )

                self.user = newUser
            }
        )
    }()
}

extension Profile {

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
