import Combine

extension CoreBinary.Error {
    
    public static func just(devMessage: String) -> Self {
        .init(
            uiError: nil,
            developerMessage: devMessage,
            errorCode: nil,
            providerId: nil,
            ext: nil)
    }
}

extension Publisher where Failure == ApiError {
    
    /// Handles ApiError from an upstream, when error with matching code is received, performs a sideEffect closure
    /// - Parameters:
    ///   - code: ApiError code to determine if error needs to be handled
    ///   - completeImmediately: A Boolean value that indicates whether the publisher should immediately finish.
    ///   - sideEffect: An @escaping closure that will be executed when error with a matching code will be caught
    /// - Returns: A publisher that will perform a sideEffect on specific error. all other errors will be republished as failures
    public func sideEffectCatching(
        _ code: ApiError.Code,
        completeImmediately: Bool = true,
        sideEffect: @escaping () -> ()
    ) -> AnyPublisher<Output, Failure> {
        self
            .catch { apiError -> AnyPublisher<Output, Failure> in
                guard case .error(let c, _) = apiError,
                      code == c else {
                    return Fail(error: apiError)
                        .eraseToAnyPublisher()
                }
                sideEffect()
                return Empty(completeImmediately: completeImmediately)
                    .eraseToAnyPublisher()
            }
            .eraseToAnyPublisher()
    }
    
    /// Handles errors from an upstream publisher by passing error to a closure
    /// - Parameters:
    ///   - completeImmediately: A Boolean value that indicates whether the publisher should immediately finish.
    ///   - sinkError: An @escaping closure to handle error
    /// - Returns: A publisher that never publishes failure.
    public func preSinkError(
        completeImmediately: Bool = true,
        sinkError: @escaping (ApiError) -> ()
    ) -> AnyPublisher<Self.Output, Never> {
        self.catch { apiError -> Empty<Output, Never> in
                sinkError(apiError)
                return Empty(completeImmediately: completeImmediately)
            }
            .eraseToAnyPublisher()
    }
    
    /// Assigns error from a publisher to a property on an object
    /// - Parameters:
    ///   - completeImmediately: A Boolean value that indicates whether the publisher should immediately finish.
    ///   - root: The object that contains the property. The subscriber assigns the object’s property when error is received.
    ///   - keyPath: A key path that indicates the property to assign
    /// - Returns: A publisher that never publishes failure.
    public func preSinkError<Root>(
        completeImmediately: Bool = true,
        on root: Root,
        to keyPath: ReferenceWritableKeyPath<Root, ApiError>
    ) -> AnyPublisher<Self.Output, Never> {
        preSinkError(completeImmediately: completeImmediately) { root[keyPath: keyPath] = $0 }
    }
    
    /// Assigns error from a publisher to a property on an object
    /// - Parameters:
    ///   - completeImmediately: A Boolean value that indicates whether the publisher should immediately finish.
    ///   - root: The object that contains the property. The subscriber assigns the object’s property when error is received.
    ///   - keyPath: A key path that indicates the property to assign
    /// - Returns: A publisher that never publishes failure.
    public func preSinkError<Root>(
        completeImmediately: Bool = true,
        on root: Root,
        to keyPath: ReferenceWritableKeyPath<Root, ApiError?>
    ) -> AnyPublisher<Self.Output, Never> {
        preSinkError(completeImmediately: completeImmediately) { root[keyPath: keyPath] = $0 }
    }
}
