public protocol ApiConfig {
    var baseUrl: String { get }
    /**
     - Tag: ApiConfig.apiKey
     */
    var apiKey: String { get }

    /**
     - Tag: ApiConfig.getIdToken
     */
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
private var activeRefreshTokenPublisher: AnyPublisher<Bool, ApiError>!

extension ApiConfig {
    
    func refreshTokenPublisher() -> AnyPublisher<Bool, ApiError> {
        Deferred { () -> AnyPublisher<Bool, ApiError> in
            if !isRefreshing {
                isRefreshing = true
                activeRefreshTokenPublisher = performTokenRefresh()
                    .handleEvents(receiveCompletion: { _ in isRefreshing = false })
                    .eraseToAnyPublisher()
            }
            return activeRefreshTokenPublisher
        }
        .eraseToAnyPublisher()
    }
    
    
    private func performTokenRefresh() -> AnyPublisher<Bool, ApiError> {
        Future<Bool, ApiError> { promise in
            print("🔃 token")
            refreshIdToken() {
                print("✅ refreshedToken: \($0)")
                promise(.success(true))
            }
        }.eraseToAnyPublisher()
    }
    
}
