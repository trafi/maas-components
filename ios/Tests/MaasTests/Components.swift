@testable import MaaS
import Quick

final class Components: QuickSpec {

    override func spec() {
        snapshot(Badge_Previews.self)
        snapshot(Button_Previews.self)
        snapshot(Cell_Previews.self)
        snapshot(SingleSelectFilterPreview_Previews.self)
        snapshot(MultiSelectFilterPreview_Previews.self)
    }

    func nearbyTransitComponenets() {
        snapshot(NearbyTransitFilterItemView_Previews.self)
        snapshot(NearbyTransitFilterView_Previews.self)
    }
}

