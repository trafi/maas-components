import SwiftUI
import Swappable

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
        isOn
            ? toggledContent.erased
            : untoggledContent.erased
    }
}

// MARK: - Checkbox

public struct Checkbox: View, Swappable {

    public struct InputType {
        public let isOn: Binding<Bool>
        public let toggledContent: AnyView?
        public let untoggledContent: AnyView?
    }
    public var input: InputType

    // TODO: - Constants
    let width: CGFloat = 24
    let height: CGFloat = 24
    @Environment(\.colorPrimary) var primaryColor

    init(isOn: Binding<Bool>) {
        self.input = .init(isOn: isOn, toggledContent: nil, untoggledContent: nil)
    }

    init(input: InputType) {
        self.input = input
    }

    public var defaultBody: some View {
        ToggleView(
            isOn: input.isOn,
            toggledContent: { input.toggledContent ?? toggledContent },
            untoggledContent: { input.untoggledContent ?? untoggledContent }
        )
        .frame(width: width, height: height)
        .onTapGesture { input.isOn.wrappedValue.toggle() }
    }

    // TODO: Replace when normal assets appears
    private var toggledContent: AnyView {
        Image(systemName: "checkmark.circle")
            .foregroundColor(primaryColor)
            .erased
    }

    // TODO: Replace when normal assets appears
    private var untoggledContent: AnyView {
        Image(systemName: "circle")
            .foregroundColor(primaryColor)
            .erased
    }
}

#if DEBUG

struct ToggleView_Previews: PreviewProvider {

    static var previews: some View {
        Checkbox(isOn: .constant(true))
    }
}

#endif
