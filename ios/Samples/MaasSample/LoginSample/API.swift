import MaasCore
import Combine
import SwiftUI

import struct SwiftUI.State

class API {

    @Binding var user: User?
    @Binding var error: AuthenticationError?

    var cancelableStore: Set<AnyCancellable>

    init(user: Binding<User?>, error: Binding<AuthenticationError?>, cancelableStore: inout Set<AnyCancellable>) {
        self._user = user
        self._error = error
        self.cancelableStore = cancelableStore
    }

    // MARK: - Requests

    func getOrCreateUser() {
        UsersApi.shared.createOrGetUser(profile: .default).publisher
            .eraseToAnyPublisher()
            .sink(receiveCompletion: onError, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    func updateProfile() {
        UsersApi.shared.updateProfile(profile: user?.profile).publisher
            .eraseToAnyPublisher()
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
    }

    private func onValue(_ completion: User) {
        user = completion
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
