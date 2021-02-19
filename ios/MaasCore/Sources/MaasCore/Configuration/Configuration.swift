public enum Maas {
    
    static public func configure(api: ApiConfig) {
        apiConfiguration = api
    }
    
    private static var apiConfiguration: ApiConfig?
    
    public static var apiConfig: ApiConfig {
        guard let apiConfiguration = apiConfiguration else {
            fatalError("Maas SDK not configured before usage. Must call MaasCore.configure")
        }
        return apiConfiguration
    }
    
}
