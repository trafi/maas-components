import Combine

class ApiKotlinFlowPublisher<T: AnyObject>: Publisher {
    
    typealias Output = T
    typealias Failure = ApiError
    
    private let flow: CFlow<ApiResult<T>>
    
    init(_ flow: CFlow<ApiResult<T>>) {
        self.flow = flow
    }
    
    func receive<S>(subscriber: S) where S: Subscriber, S.Failure == ApiError, S.Input == T {
        subscriber.receive(subscription: ApiKotlinFlowSubscription(flow, subscriber))
    }
}

private extension ApiKotlinFlowPublisher {
    
    private class ApiKotlinFlowSubscription<T: AnyObject, S: Subscriber>: Subscription where S.Input == T, S.Failure == ApiError {
        
        var subscriber: S?
        var closable: Ktor_ioCloseable?
        
        init(_ flow: CFlow<ApiResult<T>>, _ subscriber: S) {
            self.subscriber = subscriber
            
            self.closable = flow.watch { result in
                if let success = result as? ApiResultSuccess<T> {
                    let _ = subscriber.receive(success.value)
                } else {
                    subscriber.receive(completion: .failure(ApiError(result)))
                }
            } completion: {
                subscriber.receive(completion: .finished)
            }
        }
        
        func request(_ demand: Subscribers.Demand) {
            // Optionally adjust the demand
            // fatalError("DEMAND: \(demand)")
        }
        
        func cancel() {
            closable?.close()
            closable = nil
            subscriber = nil
        }
    }
}

extension ApiError {
    
    init<T>(_ result: ApiResult<T>) {
        switch result {
        case let unauthorizedFailure as ApiResultFailureUnauthorized<T>:
            self = .unauthorized(error: ApiResultError(unauthorizedFailure))
        case let errorFailure as ApiResultFailureError<T>:
            self = .error(error: ApiResultError(errorFailure))
        case let genericFailure as ApiResultFailureGeneric<T>:
            self = .failure(developerMessage: genericFailure.throwable.message)
        case let failure as ApiResultFailure<T>:
            let message = "ApiResult: could not parse \(failure) as sub-type of ApiResultFailure. Failure message: \(failure.throwable.message ?? "nil")"
            self = .failure(developerMessage: message)
        default:
            let message = "ApiResult: unable to parse \(result) as ApiResultFailure"
            self = .failure(developerMessage: message)
        }
    }
}

extension ApiResultError {
    
    init<T>(_ unauthorized: ApiResultFailureUnauthorized<T>) {
        self.init(
            developerMessage: unauthorized.error?.developerMessage ?? unauthorized.throwable.message,
            fallbackMessage: unauthorized.error?.fallbackMessage,
            translationKey: unauthorized.error?.translationKey,
            statusCode: Int(unauthorized.httpStatusCode)
        )
    }
    
    init<T>(_ failure: ApiResultFailureError<T>) {
        self.init(
            developerMessage: failure.error?.developerMessage ?? failure.throwable.message,
            fallbackMessage: failure.error?.fallbackMessage,
            translationKey: failure.error?.translationKey,
            statusCode: Int(failure.httpStatusCode)
        )
    }
}
