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
        let subBadgeIcon: UIImage?
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
                subBadgeIcon: UIImage? = nil,
                isEnabled: Bool = true) {

        self.init(
            input: InputType(
                type: type,
                backgroundColor: backgroundColor,
                foregroundColor: foregroundColor,
                icon: icon,
                text: text,
                alternativeBadgesColors: alternativeBadges,
                subBadgeIcon: subBadgeIcon,
                isEnabled: isEnabled
            )
        )
    }

    public var defaultBody: some View {

        if input.alternativeBadgesColors.isEmpty {
            BaseBadge(input: input)
                .roundedBackground(
                    cornerRadius: constants.cornerRadiusMedium,
                    fillColor: input.isEnabled ? input.backgroundColor ?? .clear : constants.disabledColor
                )
                .subBadge(
                    image: input.subBadgeIcon,
                    width: constants.subBadgeIconWidth,
                    height: constants.subBadgeIconHeight
                )
        } else {
            StackedBadge(
                backgroundColor: input.backgroundColor,
                icon: input.icon,
                text: input.text,
                foregroundColor: input.foregroundColor,
                subBadge: input.subBadgeIcon,
                isEnabled: input.isEnabled,
                stackColors: input.alternativeBadgesColors
            )
        }
    }
}

private struct BaseBadge: View, Swappable {

    typealias InputType = Badge.InputType

    let input: InputType
    init(input: InputType) {
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
                    .textStyle(textStyle)
            }
        }
        .padding(padding)
        .foregroundColor(input.foregroundColor ?? constants.defaultContentColor)
        .frame(minHeight: minHeight)
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

    private var textStyle: TextStyle {
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

private struct StackedBadge: View, Swappable {

    struct InputType {
        let base: BaseBadge.InputType
        let colors: [Color]
    }

    let input: InputType

    init(
        backgroundColor: Color?,
        icon: UIImage?,
        text: String?,
        foregroundColor: Color? = nil,
        subBadge: UIImage? = nil,
        isEnabled: Bool = true,
        stackColors: [Color]
    ) {
        input = InputType(
            base: Badge.InputType(
                type: .medium,
                backgroundColor: backgroundColor,
                foregroundColor: foregroundColor,
                icon: icon,
                text: text,
                alternativeBadgesColors: [],
                subBadgeIcon: subBadge,
                isEnabled: isEnabled
            ),
            colors: stackColors
        )
    }

    @Environment(\.currentTheme) var theme

    var constants: Kotlin<BadgeConstants> { Kotlin(BadgeConstants(theme: theme)) }

    var defaultBody: some View {

        ZStack (alignment: .top) {

            ForEach(0..<badges.count) {
                BaseBadge(input: badges[$0])
                    .frame(maxWidth: .infinity)
                    .withStroke(cornerRadius: constants.cornerRadiusMedium,
                                fillColor: badges[$0].backgroundColor ?? .clear, borderColor: constants.borderColor,
                                lineWidth: constants.borderWidth)
                    .padding(.top, spacing(index: $0))
            }
        }
        .fixedSize()
        .subBadge(image: input.base.subBadgeIcon,
                  width: constants.subBadgeIconWidth,
                  height: constants.subBadgeIconHeight)
    }

    private var badges: [Badge.InputType] {
        let alternativeBadges = Array(input.colors.prefix(Int(constants.maxStackedBadgesNumber))).toAlternativeBadges()
        return alternativeBadges + [input.base]
    }

    private func spacing(index: Int) -> CGFloat {
        CGFloat((constants.spacer - constants.borderWidth) * CGFloat(index))
    }
}

private extension View {

    func subBadge(image: UIImage?, width: CGFloat, height: CGFloat) -> some View {
        Group {
            if image != nil  {
                self.overlay(
                    Image(uiImage: image!)
                        .renderingMode(.template)
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(width: width, height: height)
                        .alignmentGuide(.trailing, computeValue: { $0[HorizontalAlignment.center]})
                        .alignmentGuide(.bottom, computeValue: { $0[HorizontalAlignment.center] })
                    , alignment: .bottomTrailing)
            } else {
                self
            }
        }
    }

    func roundedBackground(cornerRadius: CGFloat, fillColor: Color) -> some View {
        background(
            RoundedRectangle(cornerRadius: cornerRadius, style: .continuous)
                .fill(fillColor)
        )
    }

    func withStroke(cornerRadius: CGFloat, fillColor: Color, borderColor: Color, lineWidth: CGFloat) -> some View {
        background(
            RoundedRectangle(cornerRadius: cornerRadius, style: .continuous)
                .stroke(borderColor, lineWidth: lineWidth)
                .roundedBackground(cornerRadius: cornerRadius, fillColor: fillColor)
        )
    }
}

private extension Array where Element == Color {

    func toAlternativeBadges() -> [Badge.InputType] {
        map {
            .init(
                type: .medium,
                backgroundColor: $0,
                foregroundColor: nil,
                icon: nil,
                text: nil,
                alternativeBadgesColors: [],
                subBadgeIcon: nil,
                isEnabled: true
            )
        }
    }
}

#if DEBUG
public struct Badge_Previews: PreviewProvider, Snapped {

    public static var snapped: [String: AnyView] {
        [
            "Tram": AnyView( Badge(backgroundColor: .red, icon: UIImage(systemName: "tram"), text: "12")),
            "Stracked": AnyView(
                Badge(backgroundColor: .orange, foregroundColor: .white, icon: UIImage(systemName: "bus"), text: "55", alternativeBadges: [.blue, .green], subBadgeIcon: UIImage(systemName: "heart.fill"))
            ),
            "Full": AnyView (
                Badge(type: .medium, backgroundColor: .pink, foregroundColor: .blue, icon: UIImage(systemName: "bus"), text: "60", subBadgeIcon: UIImage(systemName: "heart.fill"), isEnabled: true)
            ),
            "strazing": AnyView(Badge(input: .init(type: .medium, backgroundColor: .yellow, foregroundColor: nil, icon: UIImage(systemName: "tram"), text: "40", alternativeBadgesColors: [], subBadgeIcon: UIImage(systemName: "heart.fill"), isEnabled: true))),
            "Long text": AnyView(Badge(backgroundColor: .blue, icon: UIImage(systemName: "bus"), text: "3G long")),
            "Disabled": AnyView(Badge(backgroundColor: .purple, icon: nil, text: "3G", isEnabled: false)),
            "Small": AnyView(Badge(type: .small, backgroundColor: .purple, icon: nil, text: "54")),
        ]
    }

    public static var elementWidth: CGFloat? { 300 }

    public static var detailed: Bool { true }
}
#endif
