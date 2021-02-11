import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var user: User?
    
    @Published var error: ApiError? = nil
    
    @Published var isLoading: Bool = false
    
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

    // MARK: - Requests
    
    func updateProfile() {
        isLoading = true
        UsersApi.shared.updateProfile(profile: user?.profile).publisher
            .eraseToAnyPublisher()
            .sink(
                receiveCompletion: { [unowned self] in self.mapError($0) },
                receiveValue: { [unowned self] in self.user = $0; print("Magic: \($0)") }
            )
            .store(in: &cancelableStore)
    }

    func mapError(_ state: Subscribers.Completion<ApiError>) {
        isLoading = false
        switch state {
        case .failure(let e): error = e;
        case .finished: error = nil
        }
    }
}
