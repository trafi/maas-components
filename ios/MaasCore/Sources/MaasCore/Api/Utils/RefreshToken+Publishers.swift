import Combine

private var isRefreshing = false
private var activeRefreshTokenPublisher: AnyPublisher<Void, Never>!
private var access = NSLock()

extension ApiConfig {
        
    func refreshTokenPublisher() -> AnyPublisher<Void, Never> {
        Deferred { [unowned self] () -> AnyPublisher<Void, Never> in
            
            access.lock(); defer { access.unlock() }
            
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
            self.logger?.log(message: "🔃 token")
            self.refreshIdToken() {
                self.logger?.log(message: "✅ refreshedToken: \($0?.count ?? 0) characters")
                promise(.success(()))
            }
        }
    }
}
