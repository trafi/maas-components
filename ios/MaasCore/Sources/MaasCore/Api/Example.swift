import Combine

private class Example1 {
    
    // KotlinApi wrapper class with dynamicMemberLookup convert from CFlow to Publisher
    
    func example() {
        let usersApi = UsersApi(config: ApiConfiguration.config)
        let endpointObject = usersApi.CreateOrGetUser(profile: nil)
        let requestPublisher = KotlinApi(endpointObject).flow
        print(requestPublisher)
    }
    
    func minimisedUsage() {
        KotlinApi(UsersApi.shared.CreateOrGetUser(profile: nil))
            .flow
            .sink { (completion) in
                
            } receiveValue: { (user) in
                
            }
            .store(in: &cancelableStore)
    }
    
}

private class Example2 {
    
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
}

private class Example3 {
    
    // generated extension for each Endpoint object to conform to swifty protocol ApiEndpoint
    
    func example() {
        let usersApi = UsersApi(config: ApiConfiguration.config)
        let requestPublisher = usersApi.CreateOrGetUser(profile: nil).publisher
        print(requestPublisher)
    }
    
    func minimisedUsage() {
        UsersApi.shared.CreateOrGetUser(profile: nil)
            .publisher
            .sink { (completion) in
                
            } receiveValue: { (user) in
                
            }
            .store(in: &cancelableStore)
    }
}

func compare() {
    KotlinApi(UsersApi.shared.CreateOrGetUser(profile: nil)).flow
    UsersApi.shared.createOrGetUser(profile: nil).publisher
    UsersApi.shared.CreateOrGetUser(profile: nil).publisher
}


// Example convenience
private var cancelableStore = Set<AnyCancellable>()

// idea to maintain configured api
extension UsersApi {
    static var shared = UsersApi(config: ApiConfiguration.config)
}
