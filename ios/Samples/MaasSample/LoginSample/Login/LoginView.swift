import SwiftUI
import Combine
import MaasComponents
import struct SwiftUI.State

// MARK: -

struct LoginView: View {

    @EnvironmentObject var destination: Destination

    @ObservedObject var viewModel: LoginViewModel = .init()

    var body: some View {
        NavigationView {
            VStack {
                Spacer()
                logoView()
                Spacer()
                loginProviderButtonsView()
            }
        }
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.message ?? ""))
        }
        .onChange(
            of: viewModel.presentDetails,
            perform: { if $0 { destination.path = .details(viewModel.user) } }
        )
    }
}


// MARK: - View

private extension LoginView {

    func logoView() -> some View {
        Image(uiImage: #imageLiteral(resourceName: "wave"))
            .resizable()
            .aspectRatio(contentMode: .fit)
            .padding(100)
    }

    func loginProviderButtonsView() -> some View {
        VStack(spacing: 16) {

            ForEach(AuthenticationProvider.allCases, id: \.self) { provider in
                Button(
                    provider.title,
                    isLoading: $viewModel.isLoading,
                    action: { viewModel.authenticationProvider = provider }
                )
                .environment(\.uiColorPrimary, provider.primaryColor)
                .environment(\.isEnabled, !viewModel.isLoading)
            }

            Button(
                "Other ways to sign-up",
                action: {  }
            )
            .environment(\.uiColorPrimary, .systemGray2)
        }
        .padding(24)
    }
}
