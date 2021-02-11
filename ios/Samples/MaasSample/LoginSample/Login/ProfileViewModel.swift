import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var user: User? = nil
    
    @Published var error: AuthenticationError? = nil
    
    var isLoading: Bool = false

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

    init(user: User?) {
        self.user = user
    }

    func updateProfile() {
        isLoading = true
        UsersApi.shared.updateProfile(profile: user?.profile).publisher
            .sink(receiveCompletion: onCompletion, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    // MARK: - Handlers

    private func onCompletion(_ completion: Subscribers.Completion<ApiError>) {
        switch completion {
        case .finished:
            error = nil
            isLoading = false
        case let .failure(apiError):
            error = .apiError(apiError)
            MaasConfiguration.refreshToken {
                self.updateProfile()
            }
        }
    }

    private func onValue(_ completion: User) {
        user = completion
        isLoading = false
    }
}
