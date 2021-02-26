import Combine
import SwiftUI

extension Publisher {
    
    public func attachLoading(setLoading: @escaping (Bool)->()) -> AnyPublisher<Output, Failure> {
        self.handleEvents(
            receiveSubscription: { _ in setLoading(true) },
            receiveOutput:       { _ in setLoading(false) },
            receiveCompletion:   { _ in setLoading(false) },
            receiveCancel:       {      setLoading(false) },
            receiveRequest:      { _ in setLoading(true) }
        ).eraseToAnyPublisher()
        
    }
    
    
    public func attachLoading(loading: Binding<Bool>) -> AnyPublisher<Output, Failure> {
        attachLoading { loading.wrappedValue = $0}
    }
    
    public func attachLoading<Root>(on root: Root, to keyPath: ReferenceWritableKeyPath<Root, Bool>) -> AnyPublisher<Output, Failure> {
        attachLoading { root[keyPath: keyPath] = $0 }
    }
}
