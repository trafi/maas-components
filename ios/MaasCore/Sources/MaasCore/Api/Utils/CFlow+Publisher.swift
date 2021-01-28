import Combine

private func cflowToPublisher<T>(_ cflow: CFlow<ApiResult<T>>) -> AnyPublisher<T, ApiError> {
    ApiKotlinFlowPublisher(cflow).eraseToAnyPublisher().eraseToAnyPublisher()
}

extension CFlow where T == ApiResult<User> {
    var publisher: AnyPublisher<User, ApiError> { cflowToPublisher(self) }
}

extension CFlow where T == ApiResult<AutoCompleteLocations> {
    var publisher: AnyPublisher<AutoCompleteLocations, ApiError> { cflowToPublisher(self) }
}

extension CFlow where T == ApiResult<Location> {
    var publisher: AnyPublisher<Location, ApiError> { cflowToPublisher(self) }
}

extension CFlow where T == ApiResult<ReverseGeocodeResponse> {
    var publisher: AnyPublisher<ReverseGeocodeResponse, ApiError> { cflowToPublisher(self) }
}

extension CFlow where T == ApiResult<RoutesResult> {
    var publisher: AnyPublisher<RoutesResult, ApiError> { cflowToPublisher(self) }
}

/// For every Possible Response type:

//extension CFlow where T == ApiResult<<#Type#>> {
//    var publisher: AnyPublisher<<#Type#>, ApiError> { cflowToPublisher(self) }
//}
