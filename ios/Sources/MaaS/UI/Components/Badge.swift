import SwiftUI
import Swappable
import MaasTheme

///  A swappable Badge component
/// - Parameters:
/// <-->
public struct Badge: View, Swappable {

    public enum BadgeType {
        case small
        case medium
    }

    public struct InputType {
        let type: BadgeType
        let backgroundColor: Color?
        let foregroundColor: Color?
        let icon: UIImage?
        let text: String?
        let alternativeBadgesColors: [Color]
        let subBadge: UIImage?
        let isEnabled: Bool
    }

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }

    @Environment(\.currentTheme) var theme

    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    public init(type: BadgeType = .medium,
                backgroundColor: Color?,
                foregroundColor: Color? = nil,
                icon: UIImage?,
                text: String?,
                alternativeBadges: [Color] = [],
                subBadge: UIImage? = nil,
                isEnabled: Bool = true) {

        self.init(input: InputType(type: type,
                                   backgroundColor: backgroundColor,
                                   foregroundColor: foregroundColor,
                                   icon: icon,
                                   text: text,
                                   alternativeBadgesColors: alternativeBadges,
                                   subBadge: subBadge,
                                   isEnabled: isEnabled))
    }

    public var defaultBody: some View {

        if input.alternativeBadgesColors.isEmpty {
            if let subBadge = input.subBadge {
                BaseBadge(input: input)
                    .subBadge(image: subBadge,
                              width: constants.subBadgeIconWidth,
                              height: constants.subBadgeIconHeight)
            } else {
                BaseBadge(input: input)
            }
        } else {
            StackedBadge(backgroundColor: input.backgroundColor,
                         icon: input.icon,
                         text: input.text,
                         foregroundColor: input.foregroundColor,
                         subBadge: input.subBadge,
                         isEnabled: input.isEnabled,
                         stackColors: input.alternativeBadgesColors)
        }
    }
}

struct BaseBadge: View, Swappable {
    public enum Size {
        case small
        case medium
    }

    public typealias InputType = Badge.InputType

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }

    @Environment(\.currentTheme) var theme
    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    var defaultBody: some View {
        HStack(spacing: constants.spacer) {
            if let icon = input.icon  {
                Image(uiImage: icon)
                    .renderingMode(.template)
                    .resizable()
                    .aspectRatio(contentMode: .fit)
                    .frame(width: constants.iconWidth, height: constants.iconHeight)
            }

            if showText {
                Text(input.text!)
                    .font(font)
                    .bold()
            }
        }
        .padding(padding)
        .foregroundColor(input.foregroundColor ?? constants.defaultContentColor)
        .frame(minHeight: minHeight)
        .background(
            RoundedRectangle(cornerRadius: cornerRadius)
                .fill(input.isEnabled ? input.backgroundColor ?? .clear : constants.disabledColor)

        )
    }

    private var minHeight: CGFloat {
        switch input.type {
        case .small:
            return constants.minHeightSmall
        case .medium:
            return constants.minHeightMedium
        }
    }

    private var cornerRadius: CGFloat {
        switch input.type {
        case .small:
            return constants.cornerRadiusSmall
        case .medium:
            return constants.cornerRadiusMedium
        }
    }

    private var font: Font {
        switch input.type {
        case .small:
            return constants.textStyleSmall
        case .medium:
            return constants.textStyleMedium
        }
    }

    private var padding: EdgeInsets {
        switch input.type {
        case .small:
            return .init(top:  constants.verticalPaddingSmall,
                         leading: constants.horizontalPaddingSmall,
                         bottom: constants.verticalPaddingSmall,
                         trailing: constants.horizontalPaddingSmall)
        case .medium:
            return .init(top: constants.verticalPaddingMedium,
                         leading: constants.horizontalPaddingMedium,
                         bottom: constants.verticalPaddingMedium,
                         trailing: constants.horizontalPaddingMedium)
        }
    }

    private var showText: Bool { input.text?.count ?? 0 > 0 }

}

struct StackedBadge: View, Swappable {

    struct InputType {
        let base: BaseBadge.InputType
        let colors: [Color]
    }

    let input: InputType
    init(backgroundColor: Color?,
         icon: UIImage?,
         text: String?,
         foregroundColor: Color? = nil,
         subBadge: UIImage? = nil,
         isEnabled: Bool = true,
         stackColors: [Color]) {
        input = InputType(base: .init(type: .medium,
                                      backgroundColor: backgroundColor,
                                      foregroundColor: foregroundColor,
                                      icon: icon,
                                      text: text,
                                      alternativeBadgesColors: [],
                                      subBadge: subBadge,
                                      isEnabled: isEnabled),
                          colors: stackColors)
    }

    @Environment(\.currentTheme) var theme

    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    var defaultBody: some View {

        ZStack {
            if input.colors.isEmpty {
                Badge(input: input.base)
            } else  {
                let colors = Array(input.colors[0..<min(StackedBadge.maxMultiIconOtherColors, input.colors.count)].reversed())
                ForEach(colors.indices) { index in
                    BaseBadge(input: .init(type: .medium,
                                           backgroundColor: colors[index],
                                           foregroundColor: input.base.foregroundColor,
                                           icon: input.base.icon,
                                           text: input.base.text,
                                           alternativeBadgesColors: [],
                                           subBadge: nil,
                                           isEnabled: input.base.isEnabled))
                        .overlay(RoundedRectangle(cornerRadius: constants.cornerRadiusMedium)
                                    .stroke(constants.defaultContentColor, lineWidth: constants.borderWidth))
                        .offset(y: -spacing(index: index))
                }

                if let subBadge = input.base.subBadge {
                    BaseBadge(input: input.base)
                        .overlay(
                            RoundedRectangle(cornerRadius: constants.cornerRadiusMedium)
                                .stroke(constants.defaultContentColor, lineWidth: constants.borderWidth)
                        )
                        .subBadge(image: subBadge,
                                  width: constants.subBadgeIconWidth,
                                  height: constants.subBadgeIconHeight)
                } else {
                    BaseBadge(input: input.base)
                        .overlay(
                            RoundedRectangle(cornerRadius: constants.cornerRadiusMedium)
                                .stroke(constants.defaultContentColor, lineWidth: constants.borderWidth)
                        )
                }
            }
        }
    }

    private func spacing(index: Int) -> CGFloat {
        if index == 1 { return 4 }
        return 8
    }

    private static var maxMultiIconOtherColors: Int { 2 }

}

extension View {
    func subBadge(image: UIImage, width: CGFloat, height: CGFloat) -> some View {
        self.overlay(
            Image(uiImage: image)
                .renderingMode(.template)
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: width, height: height)
                .alignmentGuide(.trailing, computeValue: { $0[HorizontalAlignment.center]})
                .alignmentGuide(.bottom, computeValue: { $0[HorizontalAlignment.center] })
            , alignment: .bottomTrailing)
    }
}

#if DEBUG
struct Badge_Previews: PreviewProvider, Snapped {
    static var snapped: [String: AnyView] {
        [
            "Tram": AnyView( Badge(backgroundColor: .red, icon: UIImage(systemName: "tram"), text: "12")),
            "Stracked": AnyView(
                Badge(backgroundColor: .orange, foregroundColor: .white, icon: UIImage(systemName: "bus"), text: "55", alternativeBadges: [.blue, .green], subBadge: UIImage(systemName: "heart.fill"))
            ),
            "Full": AnyView (
                Badge(type: .medium, backgroundColor: .pink, foregroundColor: .blue, icon: UIImage(systemName: "bus"), text: "60", subBadge: UIImage(systemName: "heart.fill"), isEnabled: true)
            ),
            "strazing": AnyView(Badge(input: .init(type: .medium, backgroundColor: .yellow, foregroundColor: nil, icon: UIImage(systemName: "tram"), text: "40", alternativeBadgesColors: [], subBadge: UIImage(systemName: "heart.fill"), isEnabled: true))),
            "Long text": AnyView(Badge(backgroundColor: .blue, icon: UIImage(systemName: "bus"), text: "3G long")),
            "Disabled": AnyView(Badge(backgroundColor: .purple, icon: nil, text: "3G", isEnabled: false)),
            "Small": AnyView(Badge(type: .small, backgroundColor: .purple, icon: nil, text: "54")),
        ]
    }

    static var elementWidth: CGFloat? { 300 }

    static var detailed: Bool { true }
}
#endif
