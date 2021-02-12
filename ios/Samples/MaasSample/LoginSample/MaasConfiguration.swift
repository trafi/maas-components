import MaasCore

class MaasConfiguration: ApiConfig {

    private init() {}

    static let shared = MaasConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    @UserDefault(key: "accessToken", defaultValue: nil)
    static var accessToken: String?

    @UserDefault(key: "temporaryAccessToken", defaultValue: nil)
    static var temporaryAccessToken: String?

    @UserDefault(key: "refreshToken", defaultValue: nil)
    static var refreshToken: String?

    var baseUrl: String { "https://api-trafi.bedrock.dev.trafi.com/" }
    var apiKey: String { "OwJwMJr8x11WfgqJlTmZJ3cpXHBPIdob3TNvTgmk" }

    var logger: Logger? { nil }

    func getIdToken() -> String? {
        MaasConfiguration.accessToken
    }

    // 1. Update
    // 2. bad token
    // 3. Take new token (refreshToken)
    // 4. Manualy retry / o new token lets try again
    // 5. Update
    // 6. ---


    // Config.accessToken = ******
    // Config.refreshToken = ???? -> (*****)

    func getIdToken(_ compl: () -> (String))  {
        MaasConfiguration.accessToken
    }

    static func refreshToken(_ completion: @escaping () -> ()) {
        DispatchQueue.main.asyncAfter(deadline: .now() + 3) {
            accessToken = temporaryAccessToken
            completion()
        }
    }
}

extension UsersApi {
    static var shared = UsersApi(config: MaasConfiguration.config)
}
