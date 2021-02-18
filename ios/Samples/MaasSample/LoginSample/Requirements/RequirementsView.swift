import SwiftUI
import MaasCore

class RequirementsState: ObservableObject {

    @Published var requirementStatus: VerifyProviderRequirementsResponse

    init(requirementStatus: VerifyProviderRequirementsResponse) {
        self.requirementStatus = requirementStatus
        requirementStatus
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
            ForEach(requiremenetsState.requirementStatus.requirements, id: \.self) { _ in
                // providerSection($0)
                EmptyView()
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

//    func providerSection(_ provider: ProviderRequirementStatus) -> some View {
//        //Section(header: Text(provider.providerId)) {
//
//        ForEach(provider.requirementStatuses.map { $0.key }, id: \.self) { key in
//
//            if let status = provider.requirementStatuses[key] {
//                Section(
//                    header: VStack(alignment: .leading) {
//                        Text(key)
//                            .font(.headline)
//                        Text(status.details ?? "")
//                            .font(.caption)
//                    }
//                ) {
//
//                    if let keys = status.keys, let key = keys.compactMap { $0 }.joined(separator: "") {
//                        NavigationLink(destination: Text(key), label: Text("Provide"))
//                    }
//
//                    if let terms = status.unacceptedTerms {
//                        ForEach(terms, id: \.self) { term in
//                            VStack(alignment: .leading) {
//                                Text(term.key ?? "")
//                                    .font(.caption)
//                                if let localizedTerms = term.localizedTerms {
//                                    ForEach(localizedTerms, id: \.self) { localizedTerm in
//                                        Button(
//                                            action: {  },
//                                            label: Text(localizedTerm.url)
//                                        )
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
}
