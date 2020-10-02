import SwiftUI
import shared

public struct RoutesResultView: View {

    public init(_ result: RoutesResult?) {
        self.result = result
    }

    let result: RoutesResult?

    public var body: some View {
        Group {
            if result != nil {
                List(result!.routes, id: \.id) {
                    RouteView(route: $0)
                }
            } else {
                Text("Searching...")
            }
        }
    }
}

struct RoutesResultView_Previews: PreviewProvider {
    static var previews: some View {
        RoutesResultView(MockRouteKt.mockResult)
    }
}
