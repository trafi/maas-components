class ApiConfiguration: ApiConfig {
    
    private init() {}
    
    static let shared = ApiConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    var baseUrl: String { "" }
    var apiKey: String { "" }
    
    func getIdToken() -> String? {
        return ""
    }
    
    var logger: Logger? { ApiLogger.default }
}

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
