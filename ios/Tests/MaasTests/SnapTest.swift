import XCTest

import SnapshotTesting
import Quick

import SwiftUI
@testable import MaaS

class SnapTest<S>: QuickSpec where S: PreviewProvider, S: Snapped {

    override func spec() {
        describe(S.name) {
            S.snapped.keys.sorted().forEach { name in
                it(name.lowercased()) {
                    let view = S.view(name)
                    XCTAssertNil(
                        verifySnapshot(
                            matching: view, as: .image(layout: S.snapshotLayout),
                            named: name.lowercased(), // TODO: Dark mode, accessibility etc.
                            testName: "\(type(of: self))"
                        )
                    )
                }
            }
        }
    }
}

private extension Snapped where Self: PreviewProvider {

    static var name: String {
        "\(self)"
            .replacingOccurrences(of: "_Previews", with: "")
            .replacingOccurrences(of: "Previews", with: "")
    }

    static func view(_ name: String) -> some View {
        snapped[name]
            .padding(paddingEdges)
            .frame(width: size?.width, height: size?.height)
            .fixedSize(horizontal: fit, vertical: fit)
    }

    static var size: CGSize? {
        guard case .fixed(let width, let height) = layout else { return nil }
        return CGSize(width: width, height: height)
    }

    static var fit: Bool {
        guard case .sizeThatFits = layout else { return false }
        return true
    }

    static var snapshotLayout: SwiftUISnapshotLayout {
        switch layout {
        case .device: return .device(config: .iPhoneX)
        case let .fixed(w, h): return .fixed(width: w, height: h)
        case .sizeThatFits: return .sizeThatFits
        @unknown default: return .sizeThatFits
        }
    }
}
