//
//  MaasSampleApp.swift
//  MaasSample
//
//  Created by Ignas Jasiunas on 2021-01-28.
//

import SwiftUI
import MaasComponents

@main
struct MaasSampleApp: App {

    // Helps to call app delegate. At the moment our base config setup goes there
    @UIApplicationDelegateAdaptor(AppDelegate.self) var appDelegate

    let persistenceController = PersistenceController.shared

    var body: some Scene {
        WindowGroup {
            LoginView()
                .environment(\.managedObjectContext, persistenceController.container.viewContext)
        }
    }
}
