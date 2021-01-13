import SwiftUI
import MaasRouteSearch

struct ExamplesView: View {

    var body: some View {
        NavigationView {
            List {
                routeSearchExample
            }
            .id(UUID())
            .navigationBarTitle("Examples")
        }
    }

    var routeSearchExample: some View {
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
