import SwiftUI
import MaasCore
import MaasComponents

struct ProfileView: View {

    @EnvironmentObject var appState: AppState

    var body: some View {
        List {
            TextField(
                "Display Name",
                text: appState.firstName
            )
        }
        .overlay(buttonsStack, alignment: .bottom)
        .navigationTitle("Profile")
        .listStyle(InsetGroupedListStyle())
    }

    private var buttonsStack: some View {
        VStack(spacing: 16) {
            Button(
                "Save",
                isLoading: appState.isLoading,
                action: appState.updateProfile
            )
            Button("Corrupt Token 🧨", action: appState.corruptToken)
            Button("Logout", action: appState.logout)
        }
        .padding()
    }
}
