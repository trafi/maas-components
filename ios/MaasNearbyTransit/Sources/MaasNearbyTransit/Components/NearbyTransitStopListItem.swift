public struct NearbyTransitStopListItem: View, Swappable {

    @Environment(\.currentTheme) var theme
    var constants: Kotlin<NearbyTransitListItemConstants> { Kotlin(NearbyTransitListItemConstants(theme: theme)) }

    public struct InputType {
        public let data: StopWithSchedulesWithDepartures
    }
    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public init(stopWithSchedulesWithDepartures: StopWithSchedulesWithDepartures) {
        self.init(input: .init(data: stopWithSchedulesWithDepartures))
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
        VStack(alignment: .leading, spacing: constants.verticalContentSpacing) {

            VStack(alignment: .leading, spacing: constants.verticalTextSpacing) {
                stopName
                stopDurationAndDirection
            }

            NearbyTransitScheduleBadgesScrollView(schedules: input.data.scheduleDepartures.map { $0.schedule })
        }
    }

    var stopName: some View {
        Text(input.data.stop.name)
            .textStyle(constants.titleTextStyle)
            .lineLimit(constants.titleTextLineLimit)
    }

    #warning("L10ns")
    var stopDurationAndDirection: some View {
        let walkDuration = Text("3 min.")
        let duration = input.data.stop.direction.flatMap { Text("Towards " + $0) }

        return [walkDuration, duration]
            .compactMap { $0 }
            .joined(with: .dot())
            .textStyle(constants.subtitleTextStyle)
            .lineLimit(constants.subtitleTextLineLimit)
            .foregroundColor(constants.subtitleTextColor)
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
