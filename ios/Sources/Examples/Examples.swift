import SwiftUI
import MaasRouteSearch
import MaasNearbyTransit

public struct ExamplesView: View {

    public init() {}

    public var body: some View {
        NavigationView {
            List {
                nearbyTransitExample
            }
            .id(UUID())
            .navigationBarTitle("Examples")
        }
    }

    var nearbyTransitExample: some View {
        NavigationLink(
            destination: Text("RouteSearch"),
            label: { Text("RouteSearch") }
        )
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ExamplesView()
    }
}
