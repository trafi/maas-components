import SwiftUI
import MaasCore

class RequirementsState: ObservableObject {

    @Published var requirementStatus: ProvidersRequirementStatusResponse

    init(requirementStatus: ProvidersRequirementStatusResponse) {
        self.requirementStatus = requirementStatus
    }
}

struct RequirementsView: View {

    @ObservedObject var requiremenetsState: RequirementsState
    @Environment(\.presentationMode) private var presentationMode

    var body: some View {
        NavigationView {
            requirementsList()
        }
    }
}

// MARK: - Content

private extension RequirementsView {

    func requirementsList() -> some View {
        List {
            ForEach(requiremenetsState.requirementStatus.providers, id: \.self) {
                providerSection($0)
            }
        }
        .navigationTitle("Requirements")
        .navigationBarItems(
            trailing: SwiftUI.Button(
                "Done",
                action: { presentationMode.wrappedValue.dismiss() }
            )
        )
        .listStyle(InsetGroupedListStyle())
    }

    func providerSection(_ provider: ProviderRequirementStatus) -> some View {
        //Section(header: Text(provider.providerId)) {

        ForEach(provider.requirementStatuses.map { $0.key }, id: \.self) {

            if let status = provider.requirementStatuses[$0] {
                Section {
                    Text(status.details ?? "No Details")
                    Text("\(status.fulfilled?.boolValue ?? false ? "true" : "false")")
                    Text(status.keys?.compactMap { $0 }.joined(separator: "") ?? "No Keys")
                    Text(status.unacceptedTerms?.compactMap { $0.key }.joined(separator: "") ?? "No Unaccepted Terms")
                    Text(status.unacceptedTerms?.debugDescription ?? "")
                }
            }
        }
    }
}
