#if DEBUG
import SwiftUI

public protocol Snapped {
    associatedtype SnapView: View
    static var snapped: [String: SnapView] { get }
    static var layout: PreviewLayout { get }
    static var paddingEdges: Edge.Set { get }
    static var detailed: Bool { get }
}

public extension Snapped {

    static var layout: PreviewLayout { .sizeThatFits }
    static var paddingEdges: Edge.Set { .all }
    static var detailed: Bool { false }
}

public extension Snapped where Self: PreviewProvider {

    static var previews: some View {
        ForEach(snappedViews().keys.sorted(), id: \.self) {
            snappedViews()[$0]?
                .previewDisplayName($0.capitalized)
                .previewLayout(layout)
        }
    }

    static func snappedViews(detailed: Bool = detailed) -> [String: AnyView] {
        snapped.reduce(into: [:]) { (result, next) in

            let niceView = next.value
                .padding(paddingEdges)
                .frame(width: size?.width, height: size?.height)
                .background(Color(.systemBackground))

            result[next.key] = AnyView(niceView)

            guard detailed else { return }
            result[next.key + "|dark"] = AnyView(niceView.environment(\.colorScheme, .dark))
            result[next.key + "|small"] = AnyView(niceView.environment(\.sizeCategory, .extraSmall))
            result[next.key + "|large"] = AnyView(niceView.environment(\.sizeCategory, .accessibilityExtraExtraExtraLarge))
        }
    }

    static var size: CGSize? {
        guard case .fixed(let width, let height) = layout else { return nil }
        return CGSize(width: width, height: height)
    }
}
#endif
