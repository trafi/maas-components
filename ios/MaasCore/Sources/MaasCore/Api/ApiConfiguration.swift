class ApiConfiguration: ApiConfig {
    
    private init() {}
    
    static let shared = ApiConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    var baseUrl: String { "" }
    var apiKey: String { "" }
    
    func getIdToken() -> String? {
        return ""
    }
    
    var logger: Logger? { nil }
}

protocol ApiConfig {
    var baseUrl: String { get }
    var apiKey: String { get }
    func getIdToken() -> String?
    var logger: Logger? { get }
}

extension ApiConfig {
    
    var config: CoreBinary.ApiConfiguration {
        .init(
            baseUrl: baseUrl,
            apiKey: apiKey,
            getIdToken: getIdToken,
            logger: logger
        )
    }
}
