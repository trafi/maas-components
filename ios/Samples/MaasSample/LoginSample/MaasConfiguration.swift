import MaasCore
import Combine

class MaasConfiguration: ApiConfig {

    private init() {}

    static let shared = MaasConfiguration()
    static var config: CoreBinary.ApiConfiguration { shared.config }

    @UserDefault(key: "accessToken", defaultValue: nil)
    static var accessToken: String?

    @UserDefault(key: "temporaryAccessToken", defaultValue: nil)
    static var temporaryAccessToken: String?

    var baseUrl: String { "https://api-trafi.bedrock.dev.trafi.com/" }
    var apiKey: String { "OwJwMJr8x11WfgqJlTmZJ3cpXHBPIdob3TNvTgmk" }

    var logger: Logger? { nil }

    func getIdToken() -> String? { MaasConfiguration.accessToken }

    static func refreshToken(_ completion: @escaping () -> ()) {
        DispatchQueue.main.asyncAfter(deadline: .now() + 3) {
            accessToken = temporaryAccessToken
            completion()
        }
    }
    
    private static var isRefreshing = false
    private static var activeRefreshTokenPublisher: AnyPublisher<Bool, ApiError>!
    
    static func refreshTokenPublisher() -> AnyPublisher<Bool, ApiError> {
        Deferred { () -> AnyPublisher<Bool, ApiError> in
            if !isRefreshing {
                isRefreshing = true
                activeRefreshTokenPublisher = performTokenRefresh()
                    .handleEvents(receiveCompletion: { _ in isRefreshing = false })
                    .eraseToAnyPublisher()
            }
            return activeRefreshTokenPublisher
        }
        .eraseToAnyPublisher()
    }
    
    
    private static func performTokenRefresh() -> AnyPublisher<Bool, ApiError> {
        Future<Bool, ApiError> { promise in
            print("🔃 token")
            MaasConfiguration.refreshToken {
                print("✅ token")
                promise(.success(true))
            }
        }.eraseToAnyPublisher()
    }
}

extension UsersApi {
    static var shared = UsersApi(config: MaasConfiguration.config)
}
