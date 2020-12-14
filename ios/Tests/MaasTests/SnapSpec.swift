import SwiftUI
import XCTest
import Quick
import SnapshotTesting
@testable import MaaS

class SnapSpec<S>: QuickSpec where S: PreviewProvider, S: Snapped {

    override func spec() {
//        isRecording = true
        describe(S.name) {
            it("Preview") {
                XCTAssertNil(
                    verifySnapshot(
                        matching: S.posterPreview(detailed: true), as: .image(precision: 0.99),
                        named: "\(Int(UIScreen.main.scale))x",
                        testName: S.name
                    )
                )
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
}
