import Combine
import SwiftUI

import FirebaseAuth
import FacebookLogin

// MARK: - Types

enum AuthenticationProvider: String, CaseIterable {
    case google = "Google"
    case apple = "Apple"
    case facebook = "Facebook"
}

enum AuthenticationError: Error {
    case cancelled
    case declined
    case unknown
}

// MARK: - Facebook

struct FacebookAuthentication: Equatable {

    var authenticate: AnyPublisher<AuthCredential, Error> {
        Future { promise in
            LoginManager().logIn(
                permissions: [.email],
                viewController: UIApplication.shared.windows.first?.rootViewController
            ) {
                switch $0 {
                case .cancelled:
                    promise(.failure(AuthenticationError.cancelled))
                case let .failed(error):
                    promise(.failure(error))
                case let .success(_, _, token):
                    guard let accessToken = token else {
                        promise(.failure(AuthenticationError.declined))
                        return
                    }
                    promise(.success(FacebookAuthProvider.credential(withAccessToken: accessToken.tokenString)))
                }
            }
        }
        .eraseToAnyPublisher()
    }
}

// MARK: - Firebase

struct FirebaseAuthentication {

    var authCredential: AuthCredential

    func signIn() -> AnyPublisher<String, Error> {
        Future { promise in
            Auth.auth().signIn(with: authCredential) { (result, error) in
                if let error = error {
                    promise(.failure(error))
                } else if let result = result {
                    self.getIDToken(result, promise: promise)
                } else {
                    promise(.failure(AuthenticationError.unknown))
                }
            }
        }
        .eraseToAnyPublisher()
    }

    private func getIDToken(_ result: AuthDataResult, promise: @escaping (Result<String, Error>) -> ()) {
        result.user.getIDToken { token, error in
            if let error = error {
                promise(.failure(error))
            } else if let token = token {
                promise(.success(token))
            } else {
                promise(.failure(AuthenticationError.unknown))
            }
        }
    }
}


// MARK: - Dummy

// There is some issues when we're using firebase spm and google signin
//
//struct GoogleAuthentication: AuthenticationProviding {
//
//    private class Delegate: NSObject, GIDSignInDelegate {
//
//        static let shared = Delegate()
//        @Published var signIn: Result<GIDGoogleUser?, Error> = .success(nil)
//
//        func sign(_ signIn: GIDSignIn!, didSignInFor user: GIDGoogleUser!, withError error: Error!) {
//            self.signIn = error == nil
//                ? .success(user)
//                : .failure(error)
//        }
//
//        func sign(_ signIn: GIDSignIn!, present viewController: UIViewController!) {}
//
//        func sign(_ signIn: GIDSignIn!, dismiss viewController: UIViewController!) {}
//    }
//
//    private static let auth: GIDSignIn = {
//        let shared = GIDSignIn.sharedInstance()!
//
//        shared.clientID = "770215742556-huv0375f901csuvpocjdm59becafa1o7.apps.googleusercontent.com"
//        shared.scopes = ["email"]
//        shared.shouldFetchBasicProfile = true
//        shared.delegate = Delegate.shared
//
//        return shared
//    }()
//
//    struct Response {
//        let idToken: String
//        let accessToken: String
//
//        public init(_ user: GIDGoogleUser?) {
//            self.idToken = user?.authentication.idToken ?? ""
//            self.accessToken = user?.authentication.accessToken ?? ""
//        }
//    }
//
//    var signIn: AnyPublisher<Response, Error> {
//        GoogleAuthentication.auth.presentingViewController = UIApplication.shared.windows.first?.rootViewController
//        GoogleAuthentication.auth.signIn()
//        return Delegate.shared.$signIn
//            .flatMap {
//                $0.map(Response.init)
//                    .publisher
//            }
//            .eraseToAnyPublisher()
//    }
//}
