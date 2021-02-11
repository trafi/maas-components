import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var user: User?
    
    @Published var error: ApiError? = nil
    
    @Published var isLoading: Bool = false
    
    var firstName: String {
        get { user?.profile.firstName ?? "" }
        set { user?.profile.firstName = newValue }
    }

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
