import SwiftUI
import Swappable
import MaasTheme
import MaasCore

extension View {

    func textStyle(_ textStyle: TextStyle) -> some View {
        let wrapped = Kotlin(textStyle)
        let styled = self
//            .font(wrapped.font)
//            .lineSpacing(CGFloat(wrapped.lineSpacing))

        let maybeColor: Color? = wrapped.color

        if let color = wrapped.color {
            return AnyView(styled.foregroundColor(.red))
        } else {
            return AnyView(styled)
        }
    }
}

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
    @Environment(\.currentTheme) var theme
    var constants: Kotlin<ButtonConstants> { Kotlin(ButtonConstants(theme: theme)) }

    public var defaultBody: some View {
        return SwiftUI.Button(
            action: input.action,
            label: {
                Text(input.text)
                    .padding(.horizontal)
                    .lineLimit(0)
                    .minimumScaleFactor(0.75)
                    .font(constants.textStyle.font)
                    .foregroundColor(input.foreground ?? (isEnabled ? constants.defaultContentColor : constants.disabledContentColor))
                    .frame(maxWidth: .infinity, minHeight: constants.minHeight)
                    .background(input.background ?? (isEnabled ? constants.defaultBackgroundColor : constants.disabledBackgroundColor))
                    .cornerRadius(constants.cornerRadius)
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
                    .environment(\.uiColorPrimary, .systemBlue)
                    .environment(\.uiColorOnPrimary, .systemYellow)
                    .environment(\.cornerRadiusButton, 20)
                    .environment(\.uiFontTextL, TextStyle(fontWeight: .normal, fontStyle: .normal, fontSize: 25, lineHeight: 25, color: nil, dummy: nil))
            ),
        ]
    }

    static var elementWidth: CGFloat? { 320 }
}
#endif
