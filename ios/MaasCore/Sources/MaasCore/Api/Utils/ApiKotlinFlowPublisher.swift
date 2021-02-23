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
            self = .unauthorized(error: unauthorizedFailure.error)
        case let forbiddenFailure as ApiResultFailureForbidden<T>:
            self = .forbidden(error: forbiddenFailure.error)
        case let errorFailure as ApiResultFailureError<T>:
            self = .error(error: errorFailure.error)
        case let genericFailure as ApiResultFailureGeneric<T>:
            self = .failure(developerMessage: genericFailure.throwable.message)
        case let userError as ApiResultFailureUserError<T>:
            self = .errorCode(code: .user(userError.code), error: userError.error)
        case let mspError as ApiResultFailureMspError<T>:
            self = .errorCode(code: .msp(mspError.code), error: mspError.error)
        case let failure as ApiResultFailure<T>:
            let message = "ApiResult: could not parse \(failure) as sub-type of ApiResultFailure. Failure message: \(failure.throwable.message ?? "nil")"
            self = .failure(developerMessage: message)
        default:
            let message = "ApiResult: unable to parse \(result) as ApiResultFailure"
            self = .failure(developerMessage: message)
        }
    }
}
