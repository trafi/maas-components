// TODO:
class ApiConfiguration: ApiConfig {
    
    private init() {}
    
    static let shared = ApiConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    var baseUrl: String { "" }
    var apiKey: String { "" }
    
    func getIdToken() -> String? {
        return ""
    }
}

protocol ApiConfig {
    var baseUrl: String { get }
    var apiKey: String { get }
    func getIdToken() -> String?
}

extension ApiConfig {
    
    var config: CoreBinary.ApiConfiguration {
        .init(
            baseUrl: baseUrl,
            apiKey: apiKey,
            getIdToken: getIdToken
        )
    }
}
