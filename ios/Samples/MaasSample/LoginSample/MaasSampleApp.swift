//
//  MaasSampleApp.swift
//  MaasSample
//
//  Created by Ignas Jasiunas on 2021-01-28.
//

import SwiftUI
import MaasComponents

class Destination: ObservableObject {

    enum `Path`: Equatable {
        case login
        case details(User?)
    }

    @Published var path: Path

    init() { self.path = .login }
}

struct LaunchView: View {

    @ObservedObject var destination: Destination = .init()

    var body: some View {
        Group {
            switch destination.path {
            case .login:
                LoginView()
            case let .details(user):
                NavigationView {
                    ProfileView(user: user)
                }
            }
        }
        .animation(.default)
        .environmentObject(destination)
    }
}

@main
struct MaasSampleApp: App {

    // Helps to call app delegate. At the moment our base config setup goes there
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    let persistenceController = PersistenceController.shared

    var body: some Scene {
        WindowGroup {
            LaunchView()
                .environment(\.managedObjectContext, persistenceController.container.viewContext)
        }
    }
}
