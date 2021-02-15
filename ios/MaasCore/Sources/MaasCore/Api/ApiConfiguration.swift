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
