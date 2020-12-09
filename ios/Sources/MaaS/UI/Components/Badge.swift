import SwiftUI
import Swappable

public struct Badge: View, Swappable {

    public struct InputType {
        let color: Color?
        let icon: UIImage?
        let text: String?
    }

    public let input: InputType
    public init(input: InputType) {
        self.input = input
    }
    public init(color: Color?, icon: UIImage?, text: String?) {
        self.init(input: InputType(color: color, icon: icon, text: text))
    }

    public var defaultBody: some View {

        HStack(spacing: 4) {
            if input.icon != nil {
                Image(uiImage: input.icon!)
                    .renderingMode(.template)
                    .resizable()
                    .aspectRatio(contentMode: .fit)
                    .frame(width: 16, height: 16)
            }
            if input.color != nil && input.icon != nil && showText {
                Rectangle()
                    .frame(width: 2, height: 16)
            }
            if showText {
                Text(input.text!)
                    .font(input.color == nil ? .caption : .body)
                    .bold()
                    .offset(y: input.color == nil ? 4 : 0)
            }
        }
        .foregroundColor(input.color == nil ? .black : .white)
        .padding(4)
        .background(
            RoundedRectangle(cornerRadius: 4)
                .fill(input.color ?? .clear)
        )
    }

    private var showText: Bool { 1...6 ~= (input.text?.count ?? 0) }
}

#if DEBUG
struct Badge_Previews: PreviewProvider, Snapped {
    static var snapped: [String: Badge] {
        [
            "Tram": Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12"),
            "Bus": Badge(color: .green, icon: UIImage(systemName: "bus"), text: "3G"),
            "Long text": Badge(color: .blue, icon: UIImage(systemName: "bus"), text: "3G long"),
        ]
    }

    static var elementWidth: CGFloat? { 120 }
}
#endif

