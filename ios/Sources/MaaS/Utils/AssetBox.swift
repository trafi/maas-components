import SwiftUI

public extension Image {

    struct AssetBoxView: View {

        public var body: some View {
            Rectangle()
                .stroke(lineWidth: 1)
                .overlay(lines)
        }

        private var lines: some View {
            GeometryReader { proxy in
                Path { path in
                    path.move(to: CGPoint(x: 0, y: 0))
                    path.addLine(to: CGPoint(x: proxy.size.width, y: proxy.size.height))
                    path.move(to: CGPoint(x: 0, y: proxy.size.height))
                    path.addLine(to: CGPoint(x: proxy.size.width, y: 0))
                }
                .stroke(lineWidth: 1)
            }
        }
    }

    static func from(image: UIImage?) -> some View {
        Group {
            if let image = image {
                 Image(uiImage: image)
                    .renderingMode(.template)
                    .resizable()
            } else {
                 AssetBoxView()
            }
        }
    }
}
