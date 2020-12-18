import SwiftUI
import Swappable
import MaasCore
import MaasTheme

public struct NearbyTransitStopListItem: View, Swappable {

    public struct InputType {
        public let data: StopWithSchedulesWithDepartures
    }
    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    @Environment(\.currentTheme) var theme

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
        VStack(alignment: .leading, spacing: Spacing.xxs.value) {

            VStack(alignment: .leading, spacing: Spacing.xxs.value) {
                name
                HStack(spacing: 0) {
                    walkDuration
                    direction
                }
            }
            .lineLimit(1)

            NearbyTransitStopBadgeScrollView(schedules: input.data.scheduleDepartures.map { $0.schedule })
        }
    }

    var name: some View {
        Text(input.data.stop.name)
            .textStyle(theme.typographyScale.textL)
            .lineLimit(1)
    }

    var direction: some View {
        input.data.stop.direction.flatMap {
            Text("Towards " + $0)
                .textStyle(theme.typographyScale.textM)
                .foregroundColor(Color(UIColor.systemGray))
        }
    }

    var walkDuration: some View {
        Group {
            if #available(iOS 14.0, *) {
                Text(Image(systemName: "deskclock")) + Text(" 3 min. • ")
            } else {
               Text("Nada")
            }
        }
        .textStyle(theme.typographyScale.textM)
        .foregroundColor(Color(UIColor.systemGray))
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
