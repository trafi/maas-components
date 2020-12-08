import SwiftUI
import Swappable
import MaasTheme
import MaasCore

public struct Button: View, Swappable {

    public let input: InputType
    public init(_ text: String, action: @escaping () -> Void) {
        input = InputType(text: text, action: action)
    }


    @Environment(\.isEnabled) var isEnabled

    public var defaultBody: some View {
        Themed {
            let theme = ButtonConstants(theme: $0)
            SwiftUI.Button(
                action: input.action,
                label: {
                    Text(input.text)
                        .padding(.horizontal)
                        .lineLimit(0)
                        .minimumScaleFactor(0.75)
                        .font(Font(theme.textStyle.font))
                        .foregroundColor(theme.defaultContentColor.color)
                        .frame(maxWidth: .infinity, minHeight: CGFloat(theme.minHeight))
                        .background(isEnabled ? theme.defaultColor.color : theme.disabledColor.color)
                        .cornerRadius(CGFloat(theme.cornerRadius))
                }
            )
        }
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

//            "Themed": AnyView(
//                Button("Some title", action: {})
//                    .environment(\.buttonTheme, Button.Theme(
//                                    color: .blue,
//                                    contentColor: .yellow,
//                                    textStyle: .largeTitle,
//                                    minHeight: 70,
//                                    cornerRadius: 15)
//                    )
//            ),
        ]
    }

    static var layout: PreviewLayout {
        .fixed(width: 320, height: 100)
    }
}
#endif
