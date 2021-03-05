import Combine

extension Publisher where Failure == Never {
    
    public func sink<Root>(
        on root: Root,
        to keyPath: ReferenceWritableKeyPath<Root, Output>,
        onCompletion: @escaping (Subscribers.Completion<Never>) -> Void
    ) -> AnyCancellable {
        sink(receiveCompletion: onCompletion,
             receiveValue: { root[keyPath: keyPath] = $0 })
    }
    
    public func sink<Root>(
        on root: Root,
        to keyPath: ReferenceWritableKeyPath<Root, Output?>,
        setRootToNilOnCompletion: Bool = false,
        onCompletion: @escaping (Subscribers.Completion<Never>) -> Void
    ) -> AnyCancellable {
        sink(receiveCompletion: { c in
            if setRootToNilOnCompletion {
                root[keyPath: keyPath] = nil
            }
            onCompletion(c)
        },
        receiveValue: { root[keyPath: keyPath] = $0 })
    }
}
