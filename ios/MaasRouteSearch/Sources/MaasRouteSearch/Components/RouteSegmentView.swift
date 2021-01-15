public struct RouteSegmentView: View {

    public let segment: RouteSegment

    public var body: some View {
        if let transit = segment.transit {
            Badge(backgroundColor: transit.schedule.color.parseColor(),
                  icon: UIImage(systemName: "bus"),
                  text: transit.schedule.name)
        } else if let rideHailing = segment.rideHailing {
            Badge(backgroundColor: rideHailing.provider?.color?.parseColor() ?? .black,
                  icon: UIImage(systemName: "car"),
                  text: nil)
        } else if let sharing = segment.sharing {
            Badge(backgroundColor: sharing.provider?.color?.parseColor() ?? .black,
                  icon: UIImage(systemName: "car"),
                  text: nil)
        } else if let walking = segment.walking {
            Badge(backgroundColor: nil,
                  icon: UIImage(systemName: "figure.walk"),
                  text: walking.distance.text)
        } else {
            fatalError()
        }
    }
}

#if DEBUG
public struct RouteSegmentView_Previews: PreviewProvider, Snapped {

    public static var snapped: [String: RouteSegmentView] {
        [
            "Mock1": RouteSegmentView(segment: MockRouteKt.mockSegment1),
            "Mock2": RouteSegmentView(segment: MockRouteKt.mockSegment2),
            "Mock3": RouteSegmentView(segment: MockRouteKt.mockSegment3),
        ]
    }

    public static var elementWidth: CGFloat? { 160 }
}
#endif
