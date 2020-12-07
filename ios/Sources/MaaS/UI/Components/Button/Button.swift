import SwiftUI
import Swappable


public struct Button: View, Swappable {

    // Input

    public let input: InputType
    public init(_ text: String, action: @escaping () -> Void) {
        input = InputType(text: text, action: action)
    }

    // View

    @Environment(\.buttonTheme) var theme
    @Environment(\.isEnabled) var isEnabled

    public var defaultBody: some View {
        SwiftUI.Button(
            action: input.action,
            label: {
                Text(input.text)
                    .padding(.horizontal)
                    .lineLimit(0)
                    .minimumScaleFactor(0.75)
                    .font(theme.textStyle)
                    .foregroundColor(theme.contentColor)
                    .frame(maxWidth: .infinity, minHeight: theme.minHeight)
                    .background(isEnabled ? theme.color : theme.disabledColor)
                    .cornerRadius(theme.cornerRadius)
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

            "Disabled": AnyView(
                Button("Some title", action: {}).disabled(true)
            ),


            "Long title": AnyView(
                Button("Some very very very very very long title", action: {})
            ),

            "Long long title": AnyView(
                Button("Some very very very very very very long title", action: {})
            ),

            "Swapped": AnyView(
                Button("Some title", action: {})
                    .swapView({ Text("Wow - " + $0.text) }, insteadOf: Button.self)
            ),

            "Themed": AnyView(
                Button("Some title", action: {})
                    .environment(\.buttonTheme, Button.Theme(
                                    color: .blue,
                                    contentColor: .yellow,
                                    textStyle: .largeTitle,
                                    minHeight: 70,
                                    cornerRadius: 15)
                    )
            ),
        ]
    }

    static var layout: PreviewLayout {
        .fixed(width: 320, height: 100)
    }
}
#endif
