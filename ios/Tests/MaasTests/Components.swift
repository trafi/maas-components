@testable import MaaS
import Quick

final class Components: QuickSpec {
    override func spec() {
        snapshot(Badge_Previews.self)
        snapshot(Button_Previews.self)
        snapshot(Cell_Previews.self)
    }
}
