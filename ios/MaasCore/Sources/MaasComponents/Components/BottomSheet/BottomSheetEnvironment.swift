import Combine
import SwiftUI

public class BottomSheetEnvironment: ObservableObject {

    static var animationDuration: Double = 0.3

    public init() {}

    @Published var isPresented: Bool = false {
        didSet {
            guard !isPresented else { return }
            DispatchQueue.main.asyncAfter(deadline: .now() + BottomSheetEnvironment.animationDuration) { [unowned self] in
                self.sheetContent = .empty
            }
        }
    }

    @Published var sheetContent: AnyView = .empty
    private(set) var onDismiss: (() -> Void)?

    public func updatePartialSheet<T: View>(isPresented: Bool? = nil, content: (() -> T)? = nil, onDismiss: (() -> Void)? = nil) {
        if let content = content {
            sheetContent = content().erased
        }

        if let onDismiss = onDismiss {
            self.onDismiss = onDismiss
        }

        if let isPresented = isPresented {
            withAnimation { [unowned self] in self.isPresented = isPresented }
        }
    }
}
