import SwiftUI
import Swappable
import MaasTheme

public struct Button: View, Swappable {

    public struct InputType {
        public let text: String
        public let action: () -> Void
    }

    public let input: InputType
    public init(_ text: String, action: @escaping () -> Void) {
        input = InputType(text: text, action: action)
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
                    .foregroundColor(constants.defaultContentColor.color)
                    .frame(maxWidth: .infinity, minHeight: CGFloat(constants.minHeight))
                    .background(isEnabled ? constants.defaultColor.color : constants.disabledColor.color)
                    .cornerRadius(CGFloat(constants.cornerRadius))
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
