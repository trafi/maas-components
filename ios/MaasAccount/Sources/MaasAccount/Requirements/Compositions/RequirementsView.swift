import SwiftUI
import MaasCore
import MaasComponents
import MaasTheme

public struct RequirementsView: View, Swappable {

    @ObservedObject private var requirementsState: RequirementsState
    @Environment(\.presentationMode) private var presentationMode

    // TODO: Constants:
    let iconWidth: CGFloat = 150
    let iconHeight: CGFloat =  150
    let contentSpacing = Spacing.xxxl.value
    let buttonsSpacing = Spacing.md.value

    public struct InputType {
        public let applicationName: String
        public let navigationTitle: String
        public let image: UIImage?
        public let providerRequirements: VerifyProviderRequirementsResponse
    }
    public var input: InputType

    // MARK: - Constructors

    public init(input: InputType) {
        self.input = input
        self.requirementsState = .init(providerRequirements: input.providerRequirements)
    }

    // NOTE: Should we provide these kind of inits where everything provided except response data ?
    public init(providerRequirements: VerifyProviderRequirementsResponse) {

        let applicationName = String(describing: Bundle.main.infoDictionary?["CFBundleName"] ?? "")

        self.init(
            input: .init(
                applicationName: applicationName,
                navigationTitle: "Terms of service",
                image: nil,
                providerRequirements: providerRequirements
            )
        )
    }

    // MARK: - Content

    // TODO: L10n
    // TODO: Link to RequirementsListView
    public var defaultBody: some View {
        NavigationView {
            VStack(spacing: contentSpacing) {
                requirementImage()
                requirementOptions()
                requirementButtons()
            }
            .navigationBarTitle(input.navigationTitle)
            .background(
                NavigationLink(
                    destination: RequirementsListView(),
                    isActive: $requirementsState.displayRequirementsList,
                    label: { EmptyView() }
                )
            )
        }
        .environmentObject(requirementsState)
    }

    // TODO: Valid assets
    private func requirementImage() -> some View {
        VStack {
            Spacer()
            Image.from(image: input.image)
                .frame(maxWidth: iconWidth, maxHeight: iconHeight)
        }
    }

    // TODO: L10n
    private func requirementOptions() -> some View {

        let defaultHyperlink = RequirementListItem.InputType.Hyperlink(
            title: "Terms of service",
            action: { requirementsState.displayRequirementsList.toggle() }
        )

        return VStack {
            RequirementListItem(
                checked: .constant(true),
                title: "I agree to \(input.applicationName)’s general",
                hyperlink: defaultHyperlink
            )
            RequirementListItem(
                checked: $requirementsState.displayRequirementsList,
                title: "I agree to all \(input.applicationName) mobility service provider’s Terms of service",
                hyperlink: defaultHyperlink
            )
        }
    }

    // TODO: L10n
    // TODO: Button Styling
    private func requirementButtons() -> some View {
        VStack(spacing: buttonsSpacing) {
            Button("Let's go!") { presentationMode.wrappedValue.dismiss() }
            Button("Cancel") { presentationMode.wrappedValue.dismiss() }
                .environment(\.uiColorPrimary, .systemGray5)
                .environment(\.uiColorOnPrimary, .label)
            Spacer()
        }
        .padding()
    }
}

// MARK: - Preview

#if DEBUG

struct RequirementsView_Previews: PreviewProvider, Snapped {

    static var snapped: [String : AnyView] {
        [
            "RequirementsView": RequirementsView(providerRequirements: .empty)
                .frame(width: 375, height: 700)
                .erased

        ]
    }

    public static var elementWidth: CGFloat? { 375 }
}

public extension VerifyProviderRequirementsResponse {

    static var empty: VerifyProviderRequirementsResponse {

        let requirements: [MspRequirements] = [
            MspRequirements(
                resourceSpecifier: .init(realm: "sharing", msp: "tier", vehicleType: "kickscooter", providerAccountType: "providerAccountType"),
                requirementStatuses: [
                    "requirementStatus": .init(
                        fulfilled: .init(bool: false),
                        details: "details",
                        keys: ["key", "key"],
                        unacceptedTerms: [
                            .init(
                                key: "Key",
                                version: "1.0.0",
                                providerId: "teier",
                                localizedTerms: [
                                    .init(languageCode: "en", url: "http://www.google.lt")], validFrom: nil)
                        ]
                    ),
                ]
            )
        ]

        let user = User(
            id: "id",
            identity: .init(verificationStatus: .verified,
                            verificationMessageKey: nil,
                            verificationFallbackMessage: nil),
            profile: .profile,
            phoneNumber: .init(
                verificationStatus: .verified,
                number: "+370 6 22*2 408",
                verificationMessageKey: nil,
                verificationFallbackMessage: nil),
            providerAccounts: [],
            drivingLicence: .init(
                categories: [],
                verificationStatus: .verified,
                licenceNumber: nil,
                issuedAt: nil,
                expiresAt: nil,
                verificationMessageKey: nil,
                verificationFallbackMessage: nil),
            terms: UserTerms(
                platformTerms: [],
                providerTerms: [],
                declinedPlatformTerms: [],
                declinedProviderTerms: []),
            paymentMethods: nil,
            memberships: nil)

        return VerifyProviderRequirementsResponse(
            requirements: requirements + requirements,
            user: user,
            requirementInterdependence: [:]
        )
    }
}

extension Profile {

    static var profile: Self {
        .init(
            gender: .male,
            ext: [:],
            firstName: "John",
            lastName: "Doe",
            displayName: "John",
            email: "john.doe@maas.com",
            address: .init(lineOne: nil, lineTwo: nil, postCode: nil, city: "Springfield", country: "USA"),
            birthDate: nil
        )
    }
}

#endif
