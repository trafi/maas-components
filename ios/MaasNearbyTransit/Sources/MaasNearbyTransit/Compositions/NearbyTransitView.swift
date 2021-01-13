import SwiftUI

public struct NearbyTransitView: View {

    let iitems = [
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
        NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures,
    ]

    public init() {}

    public var body: some View {
        VStack {
            filterView()
            scrollView()
        }
    }
}

private extension NearbyTransitView {

    // MARK: - List

    func scrollView() -> some View {
        ScrollView {
            VStack(spacing: 0) {
                ForEach(iitems) { item in
                    VStack(spacing: 0) {
                        NearbyTransitStopListItem(input: .init(data: item))
                        Divider()
                    }
                }
            }
        }
    }

    // MARK: - Filter

    func filterView() -> some View {
        MultiSelectFilter(
            items: NearbyTransitComponentsPreviewData.mockFilterDataItems,
            itemView: NearbyTransitFilterItemView.init,
            didTapItem: { _ in },
            disabledItems: []
        )
        .fixedSize()
    }
}

struct NearbyTransitView_Previews: PreviewProvider {
    static var previews: some View {
        NearbyTransitView()
    }
}
