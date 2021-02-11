import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

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

    @Published var user: User?
    
    @Published var error: AuthenticationError? = nil
    
    @Published var isLoading: Bool = false
    
    var firstName: String {
        get { user?.profile.firstName ?? "" }
        set { user?.profile.firstName = newValue }
    }

    init(user: User?) {
        self.user = user
    }
}
