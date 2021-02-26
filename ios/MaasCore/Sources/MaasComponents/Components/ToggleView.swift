import SwiftUI

public struct ToggleView<ToggledContent: View, UntoggledContent: View>: View  {

    @Binding var isOn: Bool

    private let toggledContent: ToggledContent
    private let untoggledContent: UntoggledContent

    public init(
        isOn: Binding<Bool>,
        @ViewBuilder toggledContent: () -> ToggledContent,
        @ViewBuilder untoggledContent: () -> UntoggledContent
    ) {
        self._isOn = isOn
        self.toggledContent = toggledContent()
        self.untoggledContent = untoggledContent()
    }

    public var body: some View {
        let body = isOn
            ? toggledContent.erased
            : untoggledContent.erased

        return body
            .transition(.opacity)
    }
}
