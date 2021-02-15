enum Maas {
    private static var apiConfiguration: ApiConfig?
    
    static var apiConfig: ApiConfig {
        get {
            guard let apiConfiguration = apiConfiguration else {
                fatalError("Maas not configured. Must call MaasCore.configure")
            }
            return apiConfiguration
        }
        set { apiConfiguration = newValue }
    }
    
    
    static public func configure(api: ApiConfig) {
        apiConfig = api
    }
    
}
