import SwiftUI
import MaasComponents

struct LaunchView: View {

    @ObservedObject var appState: AppState = .init()

    var body: some View {
        Group {
            if appState.user == nil {
                LoginView()
            } else {
                NavigationView {
                    ProfileView()
                }
            }
        }
        .alert(item: $appState.error) {
            Alert(title: Text($0.message ?? ""))
        }
        .animation(.default)
        .environmentObject(appState)
    }
}

@main
struct MaasSampleApp: App {

    // Helps to call app delegate. At the moment our base config setup goes there
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    var body: some Scene {
        WindowGroup {
            LaunchView()
        }
    }
}
