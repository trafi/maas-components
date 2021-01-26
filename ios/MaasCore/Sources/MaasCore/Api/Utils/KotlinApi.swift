import Combine

@dynamicMemberLookup
struct KotlinApi<T> {
    
    private let value: T
    public init(_ value: T) { self.value = value }
    
    public subscript<V>(dynamicMember keyPath: KeyPath<T, V>) -> V {
        value[keyPath: keyPath]
    }
    
    public subscript<Response: NSObject>(dynamicMember keyPath: KeyPath<T, CFlow<ApiResult<Response>>>) -> AnyPublisher<Response, ApiError> {
        ApiKotlinFlowPublisher(value[keyPath: keyPath]).eraseToAnyPublisher().eraseToAnyPublisher()
    }
}
