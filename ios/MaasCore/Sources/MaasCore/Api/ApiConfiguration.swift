public protocol ApiConfig: class {
    var baseUrl: String { get }
    
    ///  - Tag: ApiConfig.apiKey
    var apiKey: String { get }
    
    ///  - Tag: ApiConfig.getIdToken
    func getIdToken() -> String?
    
    /// - Tag: ApiConfig.getIdToken
    ///  must ensure that when completion is called, [getIdToken()](x-source-tag://ApiConfig.getIdToken) will return refreshed token
    func refreshIdToken(completion: @escaping (String?) -> ())

    var logger: Logger? { get }
}

public extension ApiConfig {
    
    var config: CoreBinary.ApiConfiguration {
        .init(
            baseUrl: baseUrl,
            apiKey: apiKey,
            getIdToken: getIdToken,
            logger: logger
        )
    }
}


import Combine

private var isRefreshing = false
private var activeRefreshTokenPublisher: AnyPublisher<Void, Never>!

extension ApiConfig {
    
    func refreshTokenPublisher() -> AnyPublisher<Void, Never> {
        Deferred { [weak self] () -> AnyPublisher<Void, Never> in
            if !isRefreshing {
                isRefreshing = true
                activeRefreshTokenPublisher = self?.performTokenRefresh()
                    .handleEvents(receiveCompletion: { _ in isRefreshing = false })
                    .eraseToAnyPublisher()
            }
            return activeRefreshTokenPublisher
        }
        .eraseToAnyPublisher()
    }
    
    
    private func performTokenRefresh() -> AnyPublisher<Void, Never> {
        Future<Void, Never> { promise in
            print("🔃 token")
            self.refreshIdToken() {
                print("✅ refreshedToken: \($0?.count ?? 0) characters")
                promise(.success(()))
            }
        }.eraseToAnyPublisher()
    }
    
}
