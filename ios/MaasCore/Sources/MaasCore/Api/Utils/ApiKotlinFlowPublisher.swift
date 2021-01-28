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
                } else if let failure = result as? ApiResultFailure<T> {
                    // TODO: failure.exception as ApiError ???
                    subscriber.receive(completion: .failure(ApiError.apiResultFailure))
                } else {
                    let message = "ApiResult: unable to parse to ApiResultSuccess or ApiResultFailure, Expecting type: \(T.self)"
                    subscriber.receive(completion: .failure(ApiError.error(message)))
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
