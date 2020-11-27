import XCTest
import SnapshotTesting
import SwiftUI
@testable import MaaS

final class BadgeTests: XCTestCase {

    func test_doubleBadge() {

        let badge = Group {
                Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12")
            }
            .frame(width: 100, height: 100)

        let result = verifySnapshot(matching: badge, as: .image)
        XCTAssertNil(result)
    }


    func test_maxLengthBadge() {

        let badge = Group {
                Badge(color: .red, icon: UIImage(systemName: "tram"), text: "1234567")
            }
            .frame(width: 100, height: 100)

        let result = verifySnapshot(matching: badge, as: .image)
        XCTAssertNil(result)
    }
}
