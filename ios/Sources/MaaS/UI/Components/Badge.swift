import SwiftUI

struct Badge: View {

    let color: Color?
    let icon: UIImage?
    let text: String?

    var body: some View {

        HStack(spacing: 4) {
            if icon != nil {
                Image(uiImage: icon!)
                    .renderingMode(.template)
                    .resizable()
                    .aspectRatio(contentMode: .fit)
                    .frame(width: 16, height: 16)
            }
            if color != nil && icon != nil && showText {
                Rectangle()
                    .frame(width: 2, height: 16)
            }
            if showText {
                Text(text!)
                    .font(color == nil ? .caption : .body)
                    .bold()
                    .offset(y: color == nil ? 4 : 0)
            }
        }
        .foregroundColor(color == nil ? .black : .white)
        .padding(4)
        .background(
            RoundedRectangle(cornerRadius: 4)
                .fill(color ?? .clear)
        )
    }

    private var showText: Bool { 1...6 ~= (text?.count ?? 0) }
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
}
#endif

