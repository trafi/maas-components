import SwiftUI
import MaasCore

struct ProfileView: View {

    @ObservedObject var viewModel: ProfileViewModel

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
                Button("Save") {
                    viewModel.api.updateProfile()
                }

                Button("🔥 token") {
                    MaasConfiguration.accessToken = ""
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
