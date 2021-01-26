import Combine

private func cflowToPublisher<T>(_ cflow: CFlow<ApiResult<T>>) -> AnyPublisher<T, ApiError> {
    ApiKotlinFlowPublisher(cflow).eraseToAnyPublisher().eraseToAnyPublisher()
}

extension CFlow where T == ApiResult<User> {
    var publisher: AnyPublisher<User, ApiError> { cflowToPublisher(self) }
}

extension CFlow where T == ApiResult<Profile> {
    var publisher: AnyPublisher<Profile, ApiError> { cflowToPublisher(self) }
}

/// For every Possible Response type:

//extension CFlow where T == ApiResult<<#Type#>> {
//    var publisher: AnyPublisher<<#Type#>, ApiError> { cflowToPublisher(self) }
//}
