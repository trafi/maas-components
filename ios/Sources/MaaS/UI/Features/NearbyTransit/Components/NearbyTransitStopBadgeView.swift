import SwiftUI

struct NearbyTransitStopBadgeView: View {

    let schedules: [Schedule]
    private var slicedFilteredSchedules: [Schedule] {
        schedules.filterDuplicates(includeElement: { $0.transportId == $1.transportId })
    }

    var body: some View {
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
