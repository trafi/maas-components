import SwiftUI
import shared

struct RoutesResultView: View {

    let result: RoutesResult

    var body: some View {
        List(result.routes, id: \.id) {
            RouteView(route: $0)
        }
    }
}

struct RoutesResultView_Previews: PreviewProvider {
    static var previews: some View {
        RoutesResultView(result: MockRouteKt.mockResult)
    }
}
