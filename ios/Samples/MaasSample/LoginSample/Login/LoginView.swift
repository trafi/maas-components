//
//  ContentView.swift
//  MaasSample
//
//  Created by Ignas Jasiunas on 2021-01-28.
//

import SwiftUI
import Combine
import MaasComponents

struct LoginView: View {

    @ObservedObject var viewModel: LoginViewModel = .init()
    @State var show: Bool = false

    var body: some View {
        VStack {
            Spacer()
            logoView()
            Spacer()
            loadingIndicatorView()
            loginProviderButtonsView()
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

            // Button enable disable ?
            // Button icons ? (width/height) UIImage vs Image vs View
            // Control spacing between icon and text ?
            // Button multi line text ?
            // Action why not publisher ?
            // Passed foreground/background colors don't react in enviroment changes ?

            ForEach([AuthenticationProvider.allCases.last!], id: \.self) { provider in
                Button(
                    provider.title,
                    image: provider.imageView,
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
