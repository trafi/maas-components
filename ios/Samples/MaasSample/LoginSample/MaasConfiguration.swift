import MaasCore

class MaasConfiguration: ApiConfig {

    private init() {}

    static let shared = MaasConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    @UserDefault(key: "accessTokenn", defaultValue: nil)
    static var accessToken: String?

    var baseUrl: String { "https://api-trafi.bedrock.dev.trafi.com/" }
    var apiKey: String { "OwJwMJr8x11WfgqJlTmZJ3cpXHBPIdob3TNvTgmk" }

    var logger: Logger? { nil }

    func getIdToken() -> String? { MaasConfiguration.accessToken }
}

extension UsersApi {
    static var shared = UsersApi(config: MaasConfiguration.config)
}
