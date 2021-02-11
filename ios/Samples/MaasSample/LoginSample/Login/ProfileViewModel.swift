import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

    var api: API {
        API(
            user: .init(
                get: { self.user },
                set: { self.user = $0 }
            ),
            error: .init(
                get: { self.error },
                set: { self.error = $0 }
            )
        )
    }

    @Published var user: User?
    
    @Published var error: AuthenticationError? = nil
    
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
}
