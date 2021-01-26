import Combine

protocol ApiEndpoint {
    associatedtype Response: NSObject
    var flow: CFlow<ApiResult<Response>> { get }
}

extension ApiEndpoint {
    
    var publisher: AnyPublisher<Response, ApiError> {
        ApiKotlinFlowPublisher(flow).eraseToAnyPublisher().eraseToAnyPublisher()
    }
}

extension CreateOrGetUser: ApiEndpoint {}
