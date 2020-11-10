import SwiftUI
import MaasCore

struct RouteSegmentView: View {

    let segment: RouteSegment

    var body: some View {
        if let transit = segment.transit {
            Badge(color: transit.schedule.color.parseColor(),
                  icon: UIImage(systemName: "bus"),
                  text: transit.schedule.name)
        } else if let rideHailing = segment.rideHailing {
            Badge(color: rideHailing.provider?.color?.parseColor() ?? .black,
                  icon: UIImage(systemName: "car"),
                  text: nil)
        } else if let sharing = segment.sharing {
            Badge(color: sharing.provider?.color?.parseColor() ?? .black,
                  icon: UIImage(systemName: "car"),
                  text: nil)
        } else if let walking = segment.walking {
            Badge(color: nil,
                  icon: UIImage(systemName: "figure.walk"),
                  text: walking.distance.text)
        } else {
            fatalError()
        }
    }
}

extension String {
    func parseColor() -> Color {
        .init(hex: self)
    }
}

extension Color {
    init(hex: String) {
        let hex = hex.trimmingCharacters(in: CharacterSet.alphanumerics.inverted)
        var int: UInt64 = 0
        Scanner(string: hex).scanHexInt64(&int)
        let a, r, g, b: UInt64
        switch hex.count {
        case 3: // RGB (12-bit)
            (a, r, g, b) = (255, (int >> 8) * 17, (int >> 4 & 0xF) * 17, (int & 0xF) * 17)
        case 6: // RGB (24-bit)
            (a, r, g, b) = (255, int >> 16, int >> 8 & 0xFF, int & 0xFF)
        case 8: // ARGB (32-bit)
            (a, r, g, b) = (int >> 24, int >> 16 & 0xFF, int >> 8 & 0xFF, int & 0xFF)
        default:
            (a, r, g, b) = (1, 1, 1, 0)
        }

        self.init(
            .sRGB,
            red: Double(r) / 255,
            green: Double(g) / 255,
            blue:  Double(b) / 255,
            opacity: Double(a) / 255
        )
    }
}


struct RouteSegmentView_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            RouteSegmentView(segment: MockRouteKt.mockSegment1)
            RouteSegmentView(segment: MockRouteKt.mockSegment2)
            RouteSegmentView(segment: MockRouteKt.mockSegment3)
        }
        .previewLayout(.fixed(width: 100, height: 100))
    }
}

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
            if color != nil && icon != nil && text != nil {
                Rectangle()
                    .frame(width: 2, height: 16)
            }
            if text != nil {
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
}

struct Badge_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            Badge(color: .red, icon: UIImage(systemName: "tram"), text: "12")
            Badge(color: .green, icon: UIImage(systemName: "bus"), text: "3G")
        }
        .previewLayout(.fixed(width: 100, height: 100))
    }
}
