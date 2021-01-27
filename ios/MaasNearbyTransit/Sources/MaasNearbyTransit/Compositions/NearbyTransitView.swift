public struct NearbyTransitView: View, Swappable {

    public struct InputType {
        let stopWithSchedulesWithDepartures: [StopWithSchedulesWithDepartures]
        public init(stopWithSchedulesWithDepartures: [StopWithSchedulesWithDepartures]) {
            self.stopWithSchedulesWithDepartures = stopWithSchedulesWithDepartures
        }
    }

    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public init(stopWithSchedulesWithDepartures: [StopWithSchedulesWithDepartures]) {
        self.init(input: .init(stopWithSchedulesWithDepartures: stopWithSchedulesWithDepartures))
    }

    public var defaultBody: some View {
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
                ForEach(input.stopWithSchedulesWithDepartures) { item in
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

#if DEBUG

#endif
public struct NearbyTransitView_Previews: PreviewProvider {

    public static var input: NearbyTransitView.InputType {
        let item = NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures
        return .init(stopWithSchedulesWithDepartures: .init(repeating: item, count: 12))
    }

    public static var previews: some View {
        NearbyTransitView(input: input)
    }
}
