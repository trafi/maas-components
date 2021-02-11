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
                loadingIndicatorView()
                loginProviderButtonsView()
            }
        }
        .onAppear {
            if MaasConfiguration.accessToken?.isEmpty == false {
                viewModel.getOrCreateUser()
            }
        }
        .onChange(
            of: viewModel.presentDetails,
            perform: { if $0 { destination.path = .details(viewModel.user) } }
        )
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.developerMessage ?? ""))
        }
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

            ForEach([AuthenticationProvider.allCases.last!], id: \.self) { provider in

                Button(
                    provider.title,
                    icon: Image(provider.rawValue),
                    isLoading: viewModel.isLoading,
                    action: { viewModel.authenticationProvider = provider }
                )
                .environment(\.uiColorPrimary, provider.primaryColor)
                .environment(\.isEnabled, viewModel.isEnabled && provider.isEnabled)
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
