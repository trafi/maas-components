import Foundation
import UIKit

import FBSDKCoreKit
import Firebase

// @UIApplicationMain
class AppDelegate: NSObject, UIApplicationDelegate {

    func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil
    ) -> Bool {

        // Setup facebook
        ApplicationDelegate.shared.application(
            application,
            didFinishLaunchingWithOptions: launchOptions
        )

        // Setup Firebase
        FirebaseApp.configure()

        return true
    }
}
