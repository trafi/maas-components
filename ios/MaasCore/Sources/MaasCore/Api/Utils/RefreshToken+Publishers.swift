import Combine

private var isRefreshing = false
private var activeRefreshTokenPublisher: AnyPublisher<Void, Never>!

extension ApiConfig {
    
    func refreshTokenPublisher() -> AnyPublisher<Void, Never> {
        Deferred { [unowned self] () -> AnyPublisher<Void, Never> in
            if !isRefreshing {
                isRefreshing = true
                activeRefreshTokenPublisher = self.performTokenRefresh()
                    .handleEvents(receiveCompletion: { _ in isRefreshing = false })
                    .eraseToAnyPublisher()
            }
            return activeRefreshTokenPublisher
        }
        .eraseToAnyPublisher()
    }
    
    
    private func performTokenRefresh() -> Future<Void, Never> {
        Future<Void, Never> { promise in
            logger?.log(message: "🔃 token")
            self.refreshIdToken() {
                logger?.log(message: "✅ refreshedToken: \($0?.count ?? 0) characters")
                promise(.success(()))
            }
        }
    }
}
