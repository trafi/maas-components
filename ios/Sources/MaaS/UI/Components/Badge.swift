import SwiftUI
import Swappable
import MaasTheme

public struct Badge: View, Swappable {

    public enum Size {
        case small
        case medium
    }

    public struct InputType {
        let style: Size
        let color: Color?
        let textColor: Color?
        let icon: UIImage?
        let text: String?
        let subBadge: UIImage?
    }

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }

    @Environment(\.currentTheme) var theme

    public init(size: Size = .medium,

                color: Color?,
                icon: UIImage?,
                text: String?,
                textColor: Color? = nil,
                subBadge: UIImage? = nil) {
        self.init(input: InputType(style: size,
                                   color: color,
                                   textColor: nil,
                                   icon: icon,
                                   text: text,
                                   subBadge: subBadge))
    }

    public var defaultBody: some View {

        HStack (alignment: .bottom, spacing: .zero) {
            HStack(spacing: CGFloat(Spacing.xs.value)) {
                if let icon = input.icon  {
                    Image(uiImage: icon)
                        .renderingMode(.template)
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(width: iconHeight, height: iconHeight)
                }

                if showText {
                    Text(input.text!)
                         .font(font)
                        .bold()
                }
            }
            .foregroundColor(input.color == nil ? .black : .white)
            .padding(padding)
            .frame(minHeight: height)
            .background(
                RoundedRectangle(cornerRadius: CGFloat(CornerRadius.xs.value), style: .continuous)
                    .fill(input.color ?? .clear)
            )

            if let subBadge = input.subBadge {
                Image(uiImage: subBadge)
                    .renderingMode(.template)
                    .resizable()
                    .aspectRatio(contentMode: .fit)
                    .frame(width: subBadgeHeight, height: subBadgeHeight)
                    .foregroundColor(.red)
                    .offset(x: -subBadgeOffset, y: subBadgeOffset)

            }
        }
    }

    private var showText: Bool { input.text?.count ?? 0 > 0 }

    private var height: CGFloat {
        switch input.style {
        case .small:
            return CGFloat(Spacing.md.value)
        case .medium:
            return CGFloat(Spacing.xl.value)
        }
    }

    private var iconHeight: CGFloat { 20 }
    private var subBadgeHeight: CGFloat { 16 }

    private var subBadgeOffset: CGFloat { subBadgeHeight / 2 }

    private var font: Font {
        var constants: Kotlin<TypographyScale> { Kotlin(TypographyScale()) }

        switch input.style {
        case .small:
            return .init(theme.typographyScale.textS)
        case .medium:
            return .init(theme.typographyScale.textM)
        }
    }

    private var padding: EdgeInsets {
        switch input.style {
        case .small:
            let spacing = CGFloat(Spacing.xxs.value)
            return .init(top: .zero, leading: spacing, bottom: .zero, trailing: spacing)
        case .medium:
            let spacing = CGFloat(Spacing.xs.value)
            return .init(top: .zero, leading: spacing, bottom: .zero, trailing: spacing)
        }
    }

    private var hasSubBadge: Bool { input.subBadge != nil }
}

#if DEBUG
struct Badge_Previews: PreviewProvider, Snapped {
    static var snapped: [String: Badge] {
        [
            "Tram": Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12"),
            "Bus": Badge(color: .green, icon: nil, text: "3G"),
            "Long text": Badge(color: .blue, icon: UIImage(systemName: "bus"), text: "3G long"),
            "Swapped": Badge(color: .purple, icon: nil, text: "DEFAULT"),
            "Small": Badge(size: .small, color: .purple, icon: nil, text: "54"),
            "Amazing": Badge(input: .init(style: .medium, color: .yellow, textColor: nil, icon: UIImage(systemName: "tram"), text: "40", subBadge: UIImage(systemName: "heart.fill"))),
        ]
    }

    static var elementWidth: CGFloat? { 330 }

    static var detailed: Bool { false }
}
#endif
