import SwiftUI
import MaasCore

public class RequirementsState: ObservableObject {

    @Published public var providerRequirements: VerifyProviderRequirementsResponse

    public init(providerRequirements: VerifyProviderRequirementsResponse) {
        self.providerRequirements = providerRequirements
    }

    @Published public var displayRequirementsList: Bool = false
}
