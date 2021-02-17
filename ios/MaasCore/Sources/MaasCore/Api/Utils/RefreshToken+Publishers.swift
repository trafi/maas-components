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
                activeRefreshTokenPublisher = self.performTokenRefresh().eraseToAnyPublisher()
            }
            return activeRefreshTokenPublisher
        }
        .eraseToAnyPublisher()
    }
    
    private func performTokenRefresh() -> Future<Void, Never> {
        Future { promise in
            self.logger?.log(message: "🔃 token")
            self.refreshIdToken() {
                
                access.lock(); defer { access.unlock() }
                
                isRefreshing = false
                self.logger?.log(message: "✅ refreshedToken: \($0?.count ?? 0) characters")
                promise(.success(()))
            }
        }
    }
}
