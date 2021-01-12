import SwiftUI
import Swappable

struct NearbyTransitStopBadgeView: View, Swappable {

    public struct InputType {
        public let schedules: [Schedule]
    }
    let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public init(schedules: [Schedule]) {
        self.input = .init(schedules: schedules)
    }

    private var slicedFilteredSchedules: [Schedule] {
        input.schedules.filterDuplicates(includeElement: { $0.transportId == $1.transportId })
    }

    var defaultBody: some View {
        ZStack {
            ForEach(slicedFilteredSchedules.indices) {
                imageView(schedule: slicedFilteredSchedules[$0])
                    .padding([.leading, .bottom], $0 != 0 ? CGFloat((-8 * $0)) : 0)
            }
        }
    }

    private func imageView(schedule: Schedule) -> some View {
        Image.from(image: UIImage(named: schedule.transportId))
            .frame(width: 32, height: 38, alignment: .center)
            .background(schedule.color.parseColor())
            .foregroundColor(Color.white)
    }
}

private extension Array {

    func filterDuplicates(includeElement: (_ lhs:Element, _ rhs:Element) -> Bool) -> [Element] {
        var results = [Element]()

        forEach { (element) in
            let existingElements = results.filter {
                return includeElement(element, $0)
            }
            if existingElements.count == 0 {
                results.append(element)
            }
        }

        return results
    }
}

#if DEBUG
public struct NearbyTransitStopBadgeView_Previews: PreviewProvider, Snapped {

    static let schedules = NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures
        .scheduleDepartures
        .map { $0.schedule }

    public static var snapped: [String: AnyView] {
        [
            "Multi": AnyView(
                NearbyTransitStopBadgeView(schedules: schedules)
            ),

            "Single": AnyView(
                NearbyTransitStopBadgeView(schedules: Array(schedules.prefix(1)))
            ),

            "Swapped": AnyView(
                NearbyTransitStopBadgeView(schedules: schedules)
                    .swapView(
                        { input in
                            ZStack {
                                ForEach(input.schedules.prefix(2).indices) { index in
                                    let item = input.schedules[index]
                                    Text(item.name)
                                        .background(item.color.parseColor())
                                        .padding([.bottom, .trailing], -CGFloat(index) * 16)
                                        .shadow(radius: 1)
                                }
                            }
                        },
                        insteadOf: NearbyTransitStopBadgeView.self
                    )
            ),
        ]
    }

    public static var elementWidth: CGFloat? { 100 }

    public static var detailed: Bool { true }
}
#endif
