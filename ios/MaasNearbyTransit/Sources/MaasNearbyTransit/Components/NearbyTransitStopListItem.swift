public struct NearbyTransitStopListItem: View, Swappable {

    @Environment(\.textStyleTextL) var textStyleTextL
    @Environment(\.textStyleTextM) var textStyleTextM
    @Environment(\.grayScale) var grayScale

    public struct InputType {
        public let data: StopWithSchedulesWithDepartures
    }
    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public var defaultBody: some View {
        Cell(
            content: { content },
            prefix: { prefix }
        )
    }
}

private extension NearbyTransitStopListItem {

    // MARK: - Content

    var content: some View {
        VStack(alignment: .leading, spacing: Spacing.xs.value) {

            VStack(alignment: .leading, spacing: Spacing.xxs.value) {
                stopName
                stopDurationAndDirection
            }
            .lineLimit(1)

            NearbyTransitScheduleBadgesScrollView(schedules: input.data.scheduleDepartures.map { $0.schedule })
        }
    }

    var stopName: some View {
        Text(input.data.stop.name)
            .textStyle(textStyleTextL)
    }

    var stopDurationAndDirection: some View {
        HStack(spacing: 0) {
            walkDuration
            direction
        }
    }

    #warning("L10ns")
    var direction: some View {
        input.data.stop.direction.flatMap {
            Text("Towards " + $0)
                .textStyle(textStyleTextM)
                .foregroundColor(grayScale.gray600.color)
        }
    }

    #warning("Must be updated for custom font and correct duration value.")
    var walkDuration: some View {
        Text("3 min. • ")
            .textStyle(textStyleTextM)
            .foregroundColor(grayScale.gray600.color)
    }

    // MARK: - Prefix

    var prefix: some View {
        NearbyTransitStopBadgeView(schedules: input.data.scheduleDepartures.map { $0.schedule })
    }
}

// MARK: - Preview

#if DEBUG
public struct NearbyTransitStopListItem_Previews: PreviewProvider, Snapped {

    public static var snapped: [String: AnyView] {
        [
            "Default": AnyView(
                NearbyTransitStopListItem(
                    input: .init(data: NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures)
                )
            ),

            "Swapped": AnyView(
                NearbyTransitStopListItem(
                    input: .init(data: NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures)
                )
                .swapView(Mock.init, insteadOf: NearbyTransitStopListItem.self)
            )
        ]
    }

    public static var elementWidth: CGFloat? { 375 }

}

struct Mock: View {

    let input: NearbyTransitStopListItem.InputType

    var body: some View {
        Cell(
            content: {
                VStack(alignment: .leading) {
                    Text(input.data.stop.name)
                        .font(.headline)
                    Text(input.data.stop.direction ?? "No directions")
                        .font(.subheadline)
                    Text("Schedules count: \(input.data.scheduleDepartures.count)")
                        .font(.footnote)
                }
                .lineLimit(1)

            },
            prefix: {
                VStack {
                    ForEach(input.data.scheduleDepartures.prefix(2).indices) {
                        Text(input.data.scheduleDepartures[$0].schedule.name)
                    }
                }
            }
        )
    }
}

#endif
