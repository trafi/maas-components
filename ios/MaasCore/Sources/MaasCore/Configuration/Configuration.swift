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
            fatalError("Please provide valid MAAS_BASE_URL in Maas-Info.plist or ApiConfig.")
        } else if apiConfiguration.baseUrl.isEmpty {
            fatalError("Please provide valid MAAS_API_KEY in Maas-Info.plist or ApiConfig.")
        }

        return apiConfiguration
    }
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
            fatalError("Maas could not find a Maas-Info.plist in your project. Please add one or define baseUrl and apiKey manualy in your ApiConfig.")
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

    func getValue(key: String) -> String? { config[key] as? String }
}
