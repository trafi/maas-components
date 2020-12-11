import SwiftUI
import Swappable
import Snapped
import MaasTheme

public struct Badge: View, Swappable {

    public enum Size {
        case small
        case medium
    }

    public struct InputType {
        let style: Size
        let color: Color?
        let icon: UIImage?
        let text: String?
        let subBadge: UIImage?
    }

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }
    public init(size: Size = .medium,
                color: Color?,
                icon: UIImage?,
                text: String?,
                subBadge: UIImage? = nil) {
        self.init(input: InputType(style: size,
                                   color: color,
                                   icon: icon,
                                   text: text,
                                   subBadge: subBadge))
    }

    public var defaultBody: some View {
        ZStack (alignment: .bottomTrailing) {
            HStack(spacing: CGFloat(Spacing.xs.value)) {
                if let icon = input.icon  {
                    Image(uiImage: icon)
                        .renderingMode(.template)
                        .resizable()
                        .aspectRatio(contentMode: .fit)
                        .frame(height: 16)
                }

                if showText {
                    Text(input.text!)
                        .font(font)
                        .bold()
                        .offset(y: input.color == nil ? 4 : 0)
                }
            }
            .foregroundColor(input.color == nil ? .black : .white)
            .padding(padding)
            .frame(height: height)
            .background(
                RoundedRectangle(cornerRadius: CGFloat(CornerRadius.xs.value))
                    .fill(input.color ?? .clear)
            )
            if let subBadge = input.subBadge {
                //HStack {
                    //Spacer()
                    Image(uiImage: subBadge)
                        .renderingMode(.template)
                        .resizable()
                        .frame(width: 6,  height: 6, alignment: .bottomTrailing)
                        .foregroundColor(.white)
                        //.offset(x:-5, y: -5)
               // }.frame(height: height)
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

    private var font: Font {
        switch input.style {
        case .small:
            return Font.textS
        case .medium:
            return Font.textM
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
}

#if DEBUG
struct Badge_Previews: PreviewProvider, Snapped {
    static var snapped: [String: Badge] {
        [
//            "Tram": Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12"),
//            "Bus": Badge(color: .green, icon: UIImage(systemName: "bus"), text: "3G"),
//            "Long text": Badge(color: .blue, icon: UIImage(systemName: "bus"), text: "3G long"),
//            "Swapped": Badge(color: .purple, icon: nil, text: "DEFAULT"),
//            "Small": Badge(size: .small, color: .purple, icon: nil, text: "54"),
            "Amazing": Badge(input: .init(style: .medium, color: .black, icon: UIImage(systemName: "tram"), text: "40", subBadge: UIImage(systemName: "tram"))),
        ]
    }

    static var elementWidth: CGFloat? { 120 }
}
#endif

