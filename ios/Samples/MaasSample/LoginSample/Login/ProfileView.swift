import SwiftUI
import MaasCore
import MaasComponents

struct ProfileView: View {

    @ObservedObject var viewModel: ProfileViewModel
    @EnvironmentObject var destination: Destination

    init(user: User?) {
        self.viewModel = .init(user: user)
    }

    var body: some View {
        List {
            TextField(
                "Display Name",
                text: viewModel.firstName
            )

            Section {

                Button(
                    "Save",
                    isLoading: viewModel.isLoading,
                    action: viewModel.api.updateProfile
                )

                Button("🔥 token") {
                    MaasConfiguration.accessToken = ""
                }
                
                Button("Back to login") {
                    destination.path = .login
                }
            }
        }
        .navigationTitle("Profile")
        .listStyle(InsetGroupedListStyle())
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.message ?? ""))
        }
    }
}
