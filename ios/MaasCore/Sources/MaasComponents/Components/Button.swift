public struct Button: View, Swappable {

    public struct InputType {
        public let text: String
        public let foreground: Color?
        public let background: Color?
        public let action: () -> Void
    }

    public let input: InputType
    public init(
        _ text: String,
        foreground: Color? = nil,
        background: Color? = nil,
        action: @escaping () -> Void) {

        input = InputType(
            text: text,
            foreground: foreground,
            background: background,
            action: action
        )
    }


    @Environment(\.isEnabled) var isEnabled
    @Themeable(ButtonConstants.init) var constants

    public var defaultBody: some View {
        SwiftUI.Button(
            action: input.action,
            label: {
                Text(input.text)
                    .padding(.horizontal)
                    .lineLimit(0)
                    .minimumScaleFactor(0.75)
                    .foregroundColor(input.foreground ?? (isEnabled ? constants.defaultContentColor : constants.disabledContentColor))
                    .textStyle(constants.textStyle)
                    .frame(maxWidth: .infinity, minHeight: constants.minHeight)
                    .background(input.background ?? (isEnabled ? constants.defaultBackgroundColor : constants.disabledBackgroundColor))
                    .cornerRadius(constants.cornerRadius)
            }
        )
    }
}

#if DEBUG
public struct Button_Previews: PreviewProvider, Snapped {

    public static var snapped: [String: AnyView] {
        [
            "Plain": AnyView(
                Button("Some title", action: {})
            ),

            "Colors": AnyView(
                Button("Some title", foreground: Color(.label), background: Color(.systemFill), action: {})
            ),

            "Disabled": AnyView(
                Button("Some title", action: {})
                    .disabled(true)
            ),

            "Long title": AnyView(
                Button("Some very very very very very long title", action: {})
            ),

            "Long long title": AnyView(
                Button("Some very very very very very very long title", action: {})
            ),

            "Themed": AnyView(
                Button("Some title", action: {})
                    .environment(\.uiColorPrimary, .systemBlue)
                    .environment(\.uiColorOnPrimary, .systemYellow)
                    .environment(\.cornerRadiusButton, 20)
                    .environment(\.textStyleTextL, TextStyle(fontWeight: .normal, fontStyle: .normal, fontSize: 25, lineSpacing: 0, color: nil))
                    .environment(\.textFont, { Font(UIFont(name: "Papyrus", size: $0)!) })
            ),
        ]
    }

    public static var elementWidth: CGFloat? { 320 }
}
#endif
