import XCTest
@testable import NearbyTransit

final class NearbyTransitTests: XCTestCase {
    func testExample() {
        // This is an example of a functional test case.
        // Use XCTAssert and related functions to verify your tests produce the correct
        // results.
        XCTAssertEqual(NearbyTransit().text, "Hello, World!")
    }

    static var allTests = [
        ("testExample", testExample),
    ]
}
