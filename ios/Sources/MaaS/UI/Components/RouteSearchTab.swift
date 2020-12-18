import SwiftUI
import Swappable
import MaasTheme


public struct RouteSearchTab: View, Swappable {

    public struct InputType {

        public let icon: UIImage
        public let title: String
        public let subtitle: String
        public let isActive: Bool
        public let action: () -> Void

    }

    public var input: InputType

    @Environment(\.currentTheme) var theme
    var constants: Kotlin<RouteSearchTabConstants> { Kotlin(RouteSearchTabConstants(theme: theme)) }

    public init(icon: UIImage, title: String, subtitle: String, isActive: Bool, action: @escaping () -> Void) {
        self.input = .init(icon: icon,
                           title: title,
                           subtitle: subtitle,
                           isActive: isActive,
                           action: action)
    }

    public var defaultBody: some View {
        VStack(spacing: .zero) {
            Image(uiImage: input.icon)
                .renderingMode(.template)
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: constants.iconWidth, height: constants.iconHeight)
                .foregroundColor(constants.contentColorPrimary)
                .padding(.bottom, constants.spacerBelowIcon)
            Text(input.title)
                .textStyle(constants.titleStyle)
                .multilineTextAlignment(.center)
                .foregroundColor(constants.contentColorPrimary)
                .padding(.bottom, constants.spacerBelowTitle)
            Text(input.subtitle)
                .textStyle(constants.subtitleStyle)
                .foregroundColor(constants.contentColorSecondary)
        }
        .frame(minWidth: constants.minTabWidth, minHeight: constants.minTabHeight)
        .padding(constants.padding)
        .background(RoundedRectangle(cornerRadius: constants.borderRadius)
                        .strokeBorder(constants.borderColorActive,
                                      lineWidth: input.isActive ? constants.borderWidth : .zero, antialiased: true))
        .background(
            RoundedRectangle(cornerRadius: constants.borderRadius)
                .fill(input.isActive ? constants.activeBackgroundColor : constants.defaultBackgroundColor)
        )
        .onTapGesture(perform: input.action)
    }
}


#if DEBUG
struct RouteSearchTab_Previews: PreviewProvider, Snapped {
    static var snapped: [String: AnyView] {
        ["Inactive": AnyView(RouteSearchTab(icon: UIImage(systemName: "bus.fill")!,
                                             title: "120 min",
                                             subtitle: "3.70 €",
                                             isActive: false, action: {})),
         "Active": AnyView(RouteSearchTab(icon: UIImage(systemName: "tram.fill")!,
                                          title: "15 min",
                                          subtitle: "2.8 €",
                                          isActive: true,
                                          action: {}))
        ]

    }

    static var elementWidth: CGFloat? { 100 }

    static var detailed: Bool { true }
}
#endif
