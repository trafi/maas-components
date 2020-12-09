import SwiftUI
import XCTest
import Quick
import SnapshotTesting
@testable import MaaS

class SnapSpec<S>: QuickSpec where S: PreviewProvider, S: Snapped {

    override func spec() {
//        isRecording = true
        describe(S.name) {
            S.snapKeys().forEach { key in
                it(key.lowercased()) {
                    XCTAssertNil(
                        verifySnapshot(
                            matching: S.view(key), as: .image(layout: S.snapshotLayout),
                            named: "\(Int(UIScreen.main.scale))x",
                            snapshotDirectory: S.directory(),
                            testName: key.lowercased()
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

    static func snapKeys() -> [String] {
        snappedViews(detailed: true).keys.sorted()
    }

    static func view(_ key: String) -> some View {
        snappedViews(detailed: true)[key]
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

    static func directory(file: StaticString = #file) -> String {
        let fileUrl = URL(fileURLWithPath: "\(file)", isDirectory: false)

        let snapshotDirectoryUrl = fileUrl
            .deletingLastPathComponent()
            .appendingPathComponent("__Snapshots__")
            .appendingPathComponent(name)

        return snapshotDirectoryUrl.path
    }
}
