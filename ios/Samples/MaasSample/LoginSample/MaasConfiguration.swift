import MaasCore

class MaasConfiguration: ApiConfig {

    private init() {}

    static let shared = MaasConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }
    static var accessToken: String? = nil

    var baseUrl: String { "https://api-trafi.bedrock.dev.trafi.com/" }
    var apiKey: String { "OwJwMJr8x11WfgqJlTmZJ3cpXHBPIdob3TNvTgmk" }

    var logger: Logger? { nil }

    func getIdToken() -> String? { MaasConfiguration.accessToken }
}

extension UsersApi {
    static var shared = UsersApi(config: MaasConfiguration.config)
}
