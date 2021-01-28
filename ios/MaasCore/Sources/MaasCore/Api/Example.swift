import Combine

private class Example {
    
    // generated extension for each type of possible Response type CFlow<ApiResult<____>>
    
    func example() {
        let usersApi = UsersApi(config: ApiConfiguration.config)
        let requestPublisher = usersApi.createOrGetUser(profile: nil).publisher
        print(requestPublisher)
    }
    
    func minimisedUsage() {
        UsersApi.shared.createOrGetUser(profile: nil)
            .publisher
            .sink { (completion) in
                
            } receiveValue: { (user) in
                
            }
            .store(in: &cancelableStore)
    }
    
    private var cancelableStore = Set<AnyCancellable>()
}

// idea to maintain configured api
extension UsersApi {
    static var shared = UsersApi(config: ApiConfiguration.config)
}
