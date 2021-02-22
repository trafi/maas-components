public protocol ApiConfig: class {
    var baseUrl: String { get }
    
    ///  - Tag: ApiConfig.apiKey
    var apiKey: String { get }
    
    ///  - Tag: ApiConfig.getIdToken
    /// Will be called on every API call and whenever IdToken will be needed for SDK inner logic
    func getIdToken() -> String?
    
    /// - Tag: ApiConfig.refreshIdToken
    ///  Will be used for automatic retry with token refresh whenever ApiError.unauthorized will be received
    ///  must ensure that when completion is called, [getIdToken()](x-source-tag://ApiConfig.getIdToken) will return refreshed token
    func refreshIdToken(completion: @escaping (String?) -> ())

    var logger: Logger? { get }
}

public extension ApiConfig {
    
    func refreshIdToken(completion: @escaping (String?) -> ()) { completion(nil) }
    
    var config: CoreBinary.ApiConfiguration {
        .init(
            baseUrl: baseUrl,
            apiKey: apiKey,
            getIdToken: getIdToken,
            logger: logger
        )
    }

    var apiKey: String { MaasEnvironment.apiKey }

    var baseUrl: String { MaasEnvironment.baseUrl }
}
