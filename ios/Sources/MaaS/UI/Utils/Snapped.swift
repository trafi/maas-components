import SwiftUI

#if DEBUG
protocol Snapped {

    associatedtype SnapView: View
    static var snapped: [String: SnapView] { get }
    static var layout: PreviewLayout { get }
    static var paddingEdges: Edge.Set { get }
}

extension Snapped {
    
    static var layout: PreviewLayout { .sizeThatFits }
    static var paddingEdges: Edge.Set { .all }
}

extension Snapped where Self: PreviewProvider {

    static var previews: some View {
        ForEach(snapped.keys.sorted(), id: \.self) {
            snapped[$0]?.previewDisplayName($0.capitalized)
        }
        .padding(paddingEdges)
        .previewLayout(layout)
    }
}
#endif
