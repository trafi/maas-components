import SwiftUI
import MaasCore
import MaasComponents

public struct RequirementsListView: View, Swappable {

    // NOTE: Should we use environment or just pass values via inits
    @EnvironmentObject var requiremenetsState: RequirementsState

    @Environment(\.textStyleTextM) var textStyle
    @Environment(\.grayScale) var grayScale

    public struct InputType {
        public let navigationTitle: String
    }
    public var input: InputType

    // MARK: - Constructors

    public init(input: InputType) {
        self.input = input
    }

    public init() {
        self.init(input: .init(navigationTitle: "MSP Terms of use"))
    }

    // MARK: - Content

    public var defaultBody: some View {
        ScrollView {
            descriptionView()
            requirementsList()
        }
        // .navigationBarTitle(input.navigationTitle, displayMode: .inline)
    }

    // TODO: L10n
    private func descriptionView() -> some View {
        VStack(alignment: .leading, spacing: 16) {
            [
                Text("You can’t use particular")
                    .fontWeight(.bold),
                Text("mobility service provider (MSP) without agreeing to their prodvider terms and conditions.")
            ]
            .joined(with: .space())

            [
                Text("You will still be able to see")
                    .fontWeight(.bold),
                Text("all the MSPs on the map or in route serach results, even withoug agreeing to the terrms.")
            ]
            .joined(with: .space())
        }
        .textStyle(textStyle)
        .foregroundColor(grayScale.gray600.color)
        .padding()
    }

    // TODO: L10n
    private func requirementsList() -> some View {
        ForEach(requiremenetsState.providerRequirements.requirements, id: \.self) { requirement in
            RequirementListItem(
                checked: .constant(false),
                title: "I agree to \(requirement.component1()!.msp!.uppercased())",
                hyperlink: .init(
                    title: "terms of service",
                    action: { /*  */ }
                )
            )
        }
    }
}

#if DEBUG

struct RequirementListView_Previews: PreviewProvider {

    static var previews: some View {
        RequirementsListView(input: .init(navigationTitle: ""))
            .environmentObject(RequirementsState(providerRequirements: .empty))
    }
}

#endif
