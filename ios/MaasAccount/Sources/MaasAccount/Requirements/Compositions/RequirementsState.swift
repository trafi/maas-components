import SwiftUI
import MaasCore

public class RequirementsState: ObservableObject {

    @Published public var providerRequirements: VerifyProviderRequirementsResponse
    @Published public var displayRequirementsList: Bool = false

    public init(providerRequirements: VerifyProviderRequirementsResponse) {
        self.providerRequirements = providerRequirements
    }
}
