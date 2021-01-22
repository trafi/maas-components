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
            destination: NearbyTransitView_Previews.previews,
            label: { Text("Nearby transit") }
        )
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ExamplesView()
    }
}
