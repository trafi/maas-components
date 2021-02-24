import SwiftUI
import MaasCore

public extension View {

    /**
     Displays Requirements flow in sheet when **Binding<VerifyProviderRequirementsResponse?>** is not nil.
     - parameters:
        - providerRequirements: **VerifyProviderRequirementsResponse** contains requirements which will be displayed in flow.
     */
    func requirementsSheet(providerRequirements: Binding<VerifyProviderRequirementsResponse?>) -> some View {
        sheet(item: providerRequirements) {
            RequirementsView(providerRequirements: $0)
        }
    }
}

extension VerifyProviderRequirementsResponse: Identifiable { }
