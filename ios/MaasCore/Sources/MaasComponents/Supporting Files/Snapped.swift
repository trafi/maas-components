#if DEBUG
import SwiftUI

public protocol Snapped {
    associatedtype SnapView: View
    static var snapped: [String: SnapView] { get }
    static var elementWidth: CGFloat? { get }
    static var elementHeight: CGFloat? { get }
    static var paddingEdges: Edge.Set { get }
    static var detailed: Bool { get }
}

public extension Snapped {

    static var elementWidth: CGFloat? { nil }
    static var elementHeight: CGFloat? { nil }
    static var paddingEdges: Edge.Set { .all }
    static var detailed: Bool { false }
}

public extension Snapped where Self: PreviewProvider {

    static var previews: some View {
        posterPreview()
    }

    static func posterPreview(detailed: Bool = detailed) -> some View {
        VStack(alignment: .leading, spacing: 0) {
            ForEach(snapped.keys.sorted(), id: \.self) { key in
                HStack {
                    niceView(key)
                    if detailed {
                        niceView(key, tag: "Small").environment(\.sizeCategory, .extraSmall)
                        niceView(key, tag: "Large").environment(\.sizeCategory, .accessibilityExtraExtraExtraLarge)
                        niceView(key, tag: "Dark").environment(\.colorScheme, .dark)
                    }
                }
                .frame(maxHeight: .infinity)
            }
        }
        .fixedSize()
        .previewLayout(.sizeThatFits)
    }

    static func niceView(_ key: String, tag: String? = nil) -> some View {
        VStack(alignment: .leading, spacing: 8) {
            Text([key.capitalized, tag].compactMap { $0 }.joined(separator: " - "))
                .font(.caption)
                .environment(\.sizeCategory, .medium)
                .padding(.top, 24)
            snapped[key]
                .frame(width: elementWidth, height: elementHeight, alignment: .topLeading)
                .fixedSize(horizontal: elementWidth == nil,
                           vertical: elementHeight == nil)
            Spacer(minLength: 0)
        }
        .frame(maxHeight: .infinity)
        .padding(paddingEdges)
        .background(Color(.systemBackground))
    }
}
#endif
