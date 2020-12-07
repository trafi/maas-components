import SwiftUI
import MaasCore
import MaasTheme

extension Button {

    public struct Theme: EnvironmentKey {

        // TODO: Rename
        public typealias C = BedrockButtonConstants

        let color: Color
        let contentColor: Color
        let disabledColor: Color
        let textStyle: Font
        let minHeight: CGFloat
        let cornerRadius: CGFloat

        public init(
            color: Color = C().defaultColor.color,
            contentColor: Color = C().defaultContentColor.color,
            disabledColor: Color = C().disabledColor.color,
            textStyle: Font = C().textStyle.font,
            minHeight: CGFloat = CGFloat(C().minHeight),
            cornerRadius: CGFloat = C().cornerRadius.cgFloat
        ) {
            self.color = color
            self.contentColor = contentColor
            self.disabledColor = disabledColor
            self.textStyle = textStyle
            self.minHeight = minHeight
            self.cornerRadius = cornerRadius
        }

        public static var defaultValue = Theme()
    }
}


public extension EnvironmentValues {

    var buttonTheme: Button.Theme {
        get { self[Button.Theme.self] }
        set { self[Button.Theme.self] = newValue }
    }
}
