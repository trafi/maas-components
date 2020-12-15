@testable import MaaS
import Quick

final class Components: QuickSpec {
    override func spec() {
        shot(Badge_Previews.self)
        shot(Button_Previews.self)
        shot(Cell_Previews.self)
    }
}
