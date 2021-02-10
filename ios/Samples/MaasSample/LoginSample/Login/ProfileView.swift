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

            Section {
                Button("Save") {
                    viewModel.updateProfile()
                }

                Button("🔥 token") {
                    MaasConfiguration.accessToken = ""
                }
            }
        }
        .navigationTitle("Profile")
        .listStyle(InsetGroupedListStyle())
        .alert(item: $viewModel.error) {
            Alert(title: Text($0.developerMessage ?? ""))
        }
    }
}
