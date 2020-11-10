import SwiftUI
import MaasCore

struct RouteView: View {

    let route: Route

    var body: some View {
        Cell {
            VStack(alignment: .leading) {
                HStack(spacing: 4) {
                    ForEach(route.segments, id: \.id) {
                        RouteSegmentView(segment: $0)
                    }
                }
                if route.disruption?.title != nil {
                    HStack(alignment: .top, spacing: 4) {
                        Text(route.disruption!.severity.value.prefix(4))
                        Text(route.disruption!.title!)
                    }
                    .font(.caption)
                }
            }
        } suffix: {
            VStack(alignment: .trailing) {
                Text(route.duration.text)
                    .bold()
                if route.fare != nil {
                    Text(route.fare!.total.text!)
                }
            }
        }
    }
}


struct RouteView_Previews: PreviewProvider {
    static var previews: some View {
        RouteView(route: MockRouteKt.mockRoute)
            .previewLayout(.fixed(width: 320, height: 100))
    }
}

