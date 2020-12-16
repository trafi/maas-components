@testable import MaaS
import Quick

final class Components: QuickSpec {
    override func spec() {
        snapshot(Badge_Previews.self, precision: 0.999)
        snapshot(Button_Previews.self, precision: 0.995)
        snapshot(Cell_Previews.self)
    }
}
