import SwiftUI
import XCTest
import Quick
import SnapshotTesting
@testable import MaaS

extension QuickSpec {

    func snapshot<S>(
        _: S.Type,
        file: StaticString = #file,
        line: UInt = #line,
        precision: Float = 0.999
    ) where S: PreviewProvider, S: Snapped {
//        isRecording = true
        it(S.name) {
            XCTAssertNil(
                verifySnapshot(
                    matching: S.posterPreview(detailed: true), as: .image(precision: precision),
                    named: "\(Int(UIScreen.main.scale))x",
                    file: file,
                    testName: S.name,
                    line: line
                ),
                file: file,
                line: line
            )
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
