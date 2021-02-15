import SwiftUI

extension BottomSheet {

    struct ContentPreferenceKey: PreferenceKey {
        static var defaultValue: CGRect = .zero
        static func reduce(value: inout CGRect, nextValue: () -> CGRect) { defaultValue = nextValue() }
    }

    struct PresenterContentPreferenceKey: PreferenceKey {
        static var defaultValue: CGRect = .zero
        static func reduce(value: inout CGRect, nextValue: () -> CGRect) { defaultValue = nextValue() }
    }
}

extension View {

    func bounds<Key: PreferenceKey>(key: Key.Type, output: @escaping (Key.Value) -> ()) -> some View where Key.Value == CGRect {
        background(
            GeometryReader {
                Color.clear.preference(key: key, value: $0.frame(in: .global))
            }
        )
        .onPreferenceChange(key) { output($0) }
    }
}
