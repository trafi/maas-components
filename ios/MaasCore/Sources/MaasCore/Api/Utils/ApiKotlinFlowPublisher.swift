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
                switch result {
                case let success as ApiResultSuccess<T>:
                    let _ = subscriber.receive(success.value)
                case let failure as ApiResultFailureUnauthorized<T>:
                    subscriber.receive(completion: .failure(.unauthorized(error: failure.error)))
                case let failure as ApiResultFailureError<T>:
                    subscriber.receive(completion: .failure(.error(error: failure.error)))
                case let failure as ApiResultFailureGeneric<T>:
                    subscriber.receive(completion: .failure(.failure(developerMessage: failure.throwable.message)))
                case let failure as ApiResultFailure<T>:
                    let message = "ApiResult: could not parse \(failure) as sub-type of ApiResultFailure. Failure message: \(failure.throwable.message ?? "nil")"
                    subscriber.receive(completion: .failure(.failure(developerMessage: message)))
                default:
                    let message = "ApiResult: unable to parse \(result) as ApiResultSuccess or ApiResultFailure"
                    subscriber.receive(completion: .failure(.failure(developerMessage: message)))
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
