import SwiftUI
import Swappable

public struct NearbyTransitScheduleBadgesScrollView: View, Swappable {

    var constants: Kotlin<NearbyTransitScheduleBadgesConstants> { Kotlin(NearbyTransitScheduleBadgesConstants()) }

    public struct InputType {
        let schedules: [Schedule]
    }
    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public init(schedules: [Schedule]) {
        self.input = .init(schedules: schedules)
    }

    public var defaultBody: some View {
        GradientBoundsScrollView {
            HStack(spacing: constants.spacing) {
                ForEach(input.schedules.indices, id: \.self) {
                    let schedule = input.schedules[$0]
                    Badge(
                        type: .small,
                        backgroundColor: schedule.color.parseColor(),
                        icon: nil,
                        text: schedule.name
                    )
                }
            }
        }
    }
}

#if DEBUG
public struct NearbyTransitScheduleBadgesScrollView_Previews: PreviewProvider, Snapped {

    static let schedules = NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures
        .scheduleDepartures
        .map { $0.schedule }

    public static var snapped: [String: AnyView] {
        [
            "Scrolling": AnyView(
                NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                    .defaultFrame
            ),

            "Scrolled - Full": AnyView(
                Group {
                    if #available(iOS 14.0, *) {
                        ScrollViewReader { sc in
                        NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                            .onAppear {
                                withAnimation { sc.scrollTo(9, anchor: .trailing) }
                            }
                        }
                    }
                }
                .defaultFrame
            ),

            "Scrolled - Half": AnyView(
                Group {
                    if #available(iOS 14.0, *) {
                        ScrollViewReader { sc in
                        NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                            .onAppear {
                                withAnimation { sc.scrollTo(4, anchor: .center) }
                            }
                        }
                    }
                }
                .defaultFrame
            ),

            "Swapped": AnyView(
                NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                    .swapView(
                        { input in
                            ScrollView(.horizontal) {
                                HStack {
                                    ForEach(0..<input.schedules.count, id: \.self) {
                                        Text(input.schedules[$0].name)
                                    }
                                }
                            }
                        },
                        insteadOf: NearbyTransitScheduleBadgesScrollView.self
                    )
            ),
        ]
    }

    public static var elementWidth: CGFloat? { 200 }

    public static var detailed: Bool { false }
}

private extension View {

    var defaultFrame: some View { frame(height: 55) }
}
#endif
