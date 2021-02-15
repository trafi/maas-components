import Combine

// https://www.wwt.com/article/creating-your-own-custom-combine-operator

extension Publishers {

    /// A publisher that attempts to recreate its subscription to a failed upstream publisher.
    public struct RetryOn<Upstream: Publisher, ChainedPublisher: Publisher>: Publisher {
        
        public typealias Output = Upstream.Output
        
        public typealias Failure = Upstream.Failure
        
        let upstream: Upstream
        let retries: UInt
        let failureShouldRetry: (Failure) -> Bool
        let chainedPublisher: ChainedPublisher?
        let chainOnEveryError: Bool
        
        public init(upstream: Upstream, retries: UInt, failureShouldRetry: @escaping (Failure) -> Bool, chainedPublisher: ChainedPublisher?, chainOnEveryError: Bool = true) {
            self.upstream = upstream
            self.retries = retries
            self.failureShouldRetry = failureShouldRetry
            self.chainedPublisher = chainedPublisher
            self.chainOnEveryError = chainOnEveryError
        }
        
        public func receive<S: Subscriber>(subscriber: S) where Upstream.Failure == S.Failure, Upstream.Output == S.Input {
            self.upstream
                .catch { e -> AnyPublisher<Output, Failure> in
                    guard failureShouldRetry(e), retries > 0 else {
                        return Fail<Output, Failure>(error: e)
                            .eraseToAnyPublisher()
                    }
                    
                    let retriedUpstream = upstream
                        .retryOn(failureShouldRetry: failureShouldRetry,
                                 retries: retries - 1,
                                 chainedPublisher: chainOnEveryError ? chainedPublisher : nil)
                        .eraseToAnyPublisher()
                    
                    if let chainedPublisher = chainedPublisher {
                        return chainedPublisher
                            .catch { _ in Fail(error: e) }
                            .flatMap { _ in retriedUpstream }
                            .eraseToAnyPublisher()
                    }
                    return retriedUpstream
                }
                .subscribe(subscriber)
        }
    }
}

extension Publisher {

    public func retryOn<ChainedPublisher: Publisher>(
        failureShouldRetry: @escaping (Failure) -> Bool,
        retries: UInt,
        chainedPublisher: ChainedPublisher? = nil,
        chainOnEveryError: Bool = true
    ) -> Publishers.RetryOn<Self, ChainedPublisher> {
        .init(upstream: self,
              retries: retries,
              failureShouldRetry: failureShouldRetry,
              chainedPublisher: chainedPublisher,
              chainOnEveryError: chainOnEveryError
        )
    }
}
