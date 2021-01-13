import SwiftUI
import Swappable
import MaasComponents

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

// MARK: - Content

private extension NearbyTransitStopListItem {

    var content: some View {
        VStack(alignment: .leading, spacing: Spacing.xs.value) {

            VStack(alignment: .leading, spacing: Spacing.xxs.value) {
                name
                HStack(spacing: 0) {
                    walkDuration
                    direction
                }
            }
            .lineLimit(1)

            NearbyTransitScheduleBadgesScrollView(schedules: input.data.scheduleDepartures.map { $0.schedule })
        }
    }

    var name: some View {
        Text(input.data.stop.name)
            .textStyle(textStyleTextL)
            .lineLimit(1)
    }

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

    var prefix: some View {
        NearbyTransitStopBadgeView(schedules: input.data.scheduleDepartures.map { $0.schedule })
    }
}

// MARK: - Preview

struct NearbyTransitStopListItem_Previews: PreviewProvider {

    static var previews: some View {
        NearbyTransitStopListItem(
            input: .init(data: NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures)
        )
        .previewLayout(.fixed(width: 375, height: 100))
    }
}
