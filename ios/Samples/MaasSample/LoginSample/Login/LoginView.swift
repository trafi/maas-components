//
//  ContentView.swift
//  MaasSample
//
//  Created by Ignas Jasiunas on 2021-01-28.
//

import SwiftUI
import Combine
import MaasComponents
import struct SwiftUI.State

struct LoginView: View {

    @ObservedObject var viewModel: LoginViewModel = .init()
    @State var show: Bool = false

    var body: some View {
        NavigationView {
            VStack {
                Spacer()
                logoView()
                Spacer()
                loadingIndicatorView()
                loginProviderButtonsView()
            }
            .background(
                NavigationLink(
                    destination: LoginDetails(viewModel: viewModel),
                    isActive: $viewModel.presentDetails,
                    label: { EmptyView() }
                )
            )
        }
    }
}

struct LoginDetails: View {

    @ObservedObject var viewModel: LoginViewModel

    var body: some View {
        List {
            TextField(
                "Display Name",
                text: .init(
                    get: { viewModel.user?.profile.firstName ?? "" },
                    set: { value in

                        guard let user = self.viewModel.user else { return }

                        let newProfile = Profile(
                            gender: user.profile.gender,
                            ext: user.profile.ext,
                            firstName: value,
                            lastName: user.profile.lastName,
                            displayName: user.profile.displayName,
                            email: user.profile.email,
                            address: user.profile.address,
                            birthDate: user.profile.birthDate
                        )

                        let newUser = User(
                            id: user.id,
                            identity: user.identity,
                            profile: newProfile,
                            phoneNumber: user.phoneNumber,
                            providerAccounts: user.providerAccounts,
                            drivingLicence: user.drivingLicence,
                            terms: user.terms,
                            paymentMethods: user.paymentMethods,
                            memberships: user.memberships
                        )

                        self.viewModel.user = newUser
                    }
                )
            )
        }
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.developerMessage ?? ""))
        }
        
        VStack(spacing: 10) {
            Button("Save") {
                viewModel.updateProfile()
            }
            
            Button("🔥 token") {
                MaasConfiguration.accessToken = ""
            }
        }.padding()
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

    func loadingIndicatorView() -> some View {
        HStack {
            if let title = viewModel.authenticationProvider?.rawValue {
                ActivityIndicator()
                Text(title)
                    .font(.callout)
                    .fontWeight(.bold)
                    .foregroundColor(Color(.systemGray2))
            }
        }
    }

    func loginProviderButtonsView() -> some View {
        VStack(spacing: 16) {

            // Button enable disable ?
            // Button icons ? (width/height) UIImage vs Image vs View
            // Control spacing between icon and text ?
            // Button multi line text ?
            // Action why not publisher ?
            // Passed foreground/background colors don't react in enviroment changes ?

            ForEach([AuthenticationProvider.allCases.last!], id: \.self) { provider in
                Button(
                    provider.title,
                    action: { viewModel.authenticationProvider = provider }
                )
                .environment(\.uiColorPrimary, provider.primaryColor)
                .environment(\.isEnabled, viewModel.isEnabled && provider.isEnabled)
            }

            Button(
                "Other ways to sign-up",
                action: { show.toggle() }
            )
            .environment(\.uiColorPrimary, .systemGray2)
        }
        .padding(24)
    }
}

// MARK: - Authentication Data

private extension AuthenticationProvider {

    var title: String { "Continue with \(self.rawValue)" }

    var imageView: AnyView? {
        UIImage(named: rawValue.lowercased()).flatMap {
            Image(uiImage: $0)
                .resizable()
                .frame(width: 20, height: 20)
                .erased
        }
    }

    var primaryColor: UIColor { UIColor(named: rawValue.lowercased() + "-color") ?? .black }

    var isEnabled: Bool { self == .facebook }
}

// MARK: - ActivityIndicator

struct ActivityIndicator: UIViewRepresentable {

    func makeUIView(context: Context) -> some UIActivityIndicatorView {
        UIActivityIndicatorView()
    }

    func updateUIView(_ uiView: UIViewType, context: Context) {
        uiView.startAnimating()
    }
}

// MARK: - Preview

private extension View {

    var erased: AnyView { AnyView(self) }
}

struct LoginPreview: PreviewProvider {

    @State static var show: Bool = false

    static var previews: some View {
        HStack {
            Text("Hello, world!")
            Button("Display", action: { show.toggle() })
        }
    }
}
