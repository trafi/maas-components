import SwiftUI
import Combine
import MaasCore

class ProfileViewModel: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    @Published var user: User? = nil
    
    @Published var error: AuthenticationError? = nil
    
    var isLoading: Bool = false
    
    var firstName: String {
        get { user?.profile.firstName ?? "" }
        set { user?.profile.firstName = newValue }
    }
    
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
