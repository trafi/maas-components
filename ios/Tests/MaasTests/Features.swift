@testable import MaaS
import Quick

final class Features: QuickSpec {
    override func spec() {
        snapshot(RouteSegmentView_Previews.self)
        snapshot(NearbyTransitFilterItemView_Previews.self)
        snapshot(NearbyTransitFilterView_Previews.self)
    }
}
