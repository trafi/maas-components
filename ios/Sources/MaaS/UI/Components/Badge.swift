import SwiftUI
import Swappable
import MaasTheme

public struct Badge: View, Swappable {

    public enum Size {
        case small
        case medium
    }

    public struct InputType: Equatable {
        let style: Size
        let color: Color?
        let textColor: Color?
        let icon: UIImage?
        let text: String?
        let subBadge: UIImage?
        let isEnabled: Bool
    }

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }

    @Environment(\.currentTheme) var theme

    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    public init(size: Size = .medium,
                color: Color?,
                icon: UIImage?,
                text: String?,
                textColor: Color? = nil,
                subBadge: UIImage? = nil,
                isEnabled: Bool = true) {
        self.init(input: InputType(style: size,
                                   color: color,
                                   textColor: nil,
                                   icon: icon,
                                   text: text,
                                   subBadge: subBadge,
                                   isEnabled: isEnabled))
    }

    public var defaultBody: some View {

        if let subBadge = input.subBadge {
            BaseBadge(input: input)
                .subBadge(image: subBadge,
                          width: constants.subBadgeIconWidth,
                          height: constants.subBadgeIconHeight)
        } else {
            BaseBadge(input: input)
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
        .foregroundColor(input.textColor ?? constants.defaultContentColor)
        .frame(minHeight: minHeight)
        .background(
            RoundedRectangle(cornerRadius: cornerRadius)
                .fill(input.isEnabled ? input.color ?? .clear : constants.disabledColor)

        )
    }

    private var minHeight: CGFloat {
        switch input.style {
        case .small:
            return constants.minHeightSmall
        case .medium:
            return constants.minHeightMedium
        }
    }

    private var cornerRadius: CGFloat {
        switch input.style {
        case .small:
            return constants.cornerRadiusSmall
        case .medium:
            return constants.cornerRadiusMedium
        }
    }

    private var font: Font {
        switch input.style {
        case .small:
            return constants.textStyleSmall
        case .medium:
            return constants.textStyleMedium
        }
    }

    private var padding: EdgeInsets {
        switch input.style {
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


public struct StackedBadge: View, Swappable {

    public struct InputType: Equatable {
        let base: BaseBadge.InputType
        let colors: [Color]
    }

    public let input: InputType
    public init(
                color: Color?,
                icon: UIImage?,
                text: String?,
                textColor: Color? = nil,
                subBadge: UIImage? = nil,
        isEnabled: Bool = true,
                colors: [Color]) {
        input = InputType(base: .init(style: .medium,
                                      color: color,
                                      textColor: textColor,
                                      icon: icon,
                                      text: text,
                                      subBadge: subBadge,
                                      isEnabled: isEnabled),
                          colors: colors)
    }

    @Environment(\.currentTheme) var theme

    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    public var defaultBody: some View {

        ZStack {
            if input.colors.isEmpty {
                Badge(input: input.base)
            } else  {
                let colors = input.colors[0..<min(StackedBadge.maxMultiIconOtherColors, input.colors.count)]
                ForEach(0 ..< colors.count) { index in
                    BaseBadge(input: .init(style: .medium,
                                           color: colors[index],
                                           textColor: input.base.textColor,
                                           icon: input.base.icon,
                                           text: input.base.text,
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
            "Tram": AnyView( Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12")),
            "Stracked": AnyView(
                HStack {
                StackedBadge(color: .orange, icon: UIImage(systemName: "bus"), text: "55", textColor: .white, subBadge: UIImage(systemName: "heart.fill"), colors: [.blue, .green])
                    Badge(size: .medium, color: .pink, icon: UIImage(systemName: "bus"), text: "60", textColor: .blue, subBadge: UIImage(systemName: "heart.fill"), isEnabled: true)
                }
            ),
            "Full": AnyView (
                Badge(size: .medium, color: .pink, icon: UIImage(systemName: "bus"), text: "60", textColor: .blue, subBadge: UIImage(systemName: "heart.fill"), isEnabled: true)
            ),
            "strazing": AnyView(Badge(input: .init(style: .medium, color: .yellow, textColor: nil, icon: UIImage(systemName: "tram"), text: "40", subBadge: UIImage(systemName: "heart.fill"), isEnabled: true))),
            "Long text": AnyView(Badge(color: .blue, icon: UIImage(systemName: "bus"), text: "3G long")),
            "Disabled": AnyView(Badge(color: .purple, icon: nil, text: "3G", isEnabled: false)),
            "Small": AnyView(Badge(size: .small, color: .purple, icon: nil, text: "54")),
        ]
    }

    static var elementWidth: CGFloat? { 300 }

    static var detailed: Bool { true }
}
#endif
