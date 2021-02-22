public enum Maas {
    
    static public func configure(api: ApiConfig) {
        apiConfiguration = api
    }
    
    private static var apiConfiguration: ApiConfig?
    
    public static var apiConfig: ApiConfig {

        guard let apiConfiguration = apiConfiguration else {
            fatalError("Maas SDK not configured before usage. Must call MaasCore.configure")
        }

        if apiConfiguration.apiKey.isEmpty {
            fatalError("Please provide valid API_KEY in Maas-Info.plist or ApiConfig.")
        } else if apiConfiguration.baseUrl.isEmpty {
            fatalError("Please provide valid BASE_URL in Maas-Info.plist or ApiConfig.")
        }

        return apiConfiguration
    }
}

// MARK: - Maas Environment

struct MaasEnvironment {

    static let shared = MaasEnvironment()

    let config: NSDictionary

    init() {

        guard
            let configPath = Bundle.main.path(forResource: "Maas-Info", ofType: "plist"),
            let config = NSDictionary(contentsOfFile: configPath)
        else {
            fatalError("Maas could not find a Maas-Info.plist in your project. Please add one or define baseUrl and apiKey manualy in your ApiConfig.")
        }

        self.config = config
    }
}

extension MaasEnvironment {

    static var baseUrl: String {
        guard let baseUrl = getValue(key: "BASE_URL") else {
            fatalError("Could not find `BASE_URL` inside Maas-Info.plist")
        }
        return baseUrl
    }

    static var apiKey: String {
        guard let baseUrl = getValue(key: "API_KEY") else {
            fatalError("Could not find `API_KEY` inside Maas-Info.plist")
        }
        return baseUrl
    }

    private static func getValue(key: String) -> String? { shared.config[key] as? String }
}
