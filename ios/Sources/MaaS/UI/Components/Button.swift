import SwiftUI
import Swappable
import MaasTheme

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
    @Environment(\.maasTheme) var theme
    var constants: ButtonConstants { ButtonConstants(theme: theme) }

    public var defaultBody: some View {
        SwiftUI.Button(
            action: input.action,
            label: {
                Text(input.text)
                    .padding(.horizontal)
                    .lineLimit(0)
                    .minimumScaleFactor(0.75)
                    .font(Font(constants.textStyle.font))
                    .foregroundColor(input.foreground ?? constants.defaultContentColor.color)
                    .frame(maxWidth: .infinity, minHeight: CGFloat(constants.minHeight))
                    .background(input.background ?? (isEnabled ? constants.defaultColor : constants.disabledColor).color)
                    .cornerRadius(constants.cornerRadius.cgFloat)
            }
        )
    }
}

#if DEBUG
struct Button_Previews: PreviewProvider, Snapped {
    static var snapped: [String: AnyView] {
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
                    .environment(\.colorPrimary, .blue)
                    .environment(\.colorOnPrimary, .yellow)
                    .environment(\.cornerRadiusButton, 20)
                    .environment(\.fontTextL, UIFont(name: "Papyrus", size: 25)!)
            ),
        ]
    }

    static var layout: PreviewLayout {
        .fixed(width: 320, height: 100)
    }
}
#endif
