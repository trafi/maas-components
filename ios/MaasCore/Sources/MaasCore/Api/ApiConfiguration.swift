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

    var apiKey: String { MaasEnvironment.shared.apiKey }

    var baseUrl: String { MaasEnvironment.shared.baseUrl }
}

// MARK: - Maas Environment

private struct MaasEnvironment {

    static let shared = MaasEnvironment()

    let config: NSDictionary

    init() {

        guard
            let configPath = Bundle.main.path(forResource: "Maas-Info", ofType: "plist"),
            let config = NSDictionary(contentsOfFile: configPath)
        else {
            fatalError("Maas `ApiConfig` could not find a valid Maas-Info.plist in your project. Please add one or define baseUrl and api key manualy.")
        }

        self.config = config
    }
}

extension MaasEnvironment {

    var baseUrl: String {
        guard let baseUrl = getValue(key: "MAAS_BASE_URL") else {
            fatalError("Could not find `MAAS_BASE_URL` inside Maas-Info.plist")
        }
        return baseUrl
    }

    var apiKey: String {
        guard let baseUrl = getValue(key: "MAAS_API_KEY") else {
            fatalError("Could not find `MAAS_API_KEY` inside Maas-Info.plist")
        }
        return baseUrl
    }

    func getValue(key: String) -> String? {
        config[key] as? String ?? ProcessInfo.processInfo.environment[key]
    }
}
