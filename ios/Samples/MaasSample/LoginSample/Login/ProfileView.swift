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
                text: $viewModel.firstName
            )
        }
        .overlay(buttonsStack, alignment: .bottom)
        .navigationTitle("Profile")
        .listStyle(InsetGroupedListStyle())
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.message ?? ""))
        }
    }

    private var buttonsStack: some View {
        VStack(spacing: 16) {
            Button(
                "Save",
                isLoading: viewModel.isLoading,
                action: viewModel.updateProfile 
            )

            Button("🔥 token") {
                MaasConfiguration.accessToken = ""
            }

            Button("Back to login") {
                destination.path = .login
            }
        }.padding()
    }
}
