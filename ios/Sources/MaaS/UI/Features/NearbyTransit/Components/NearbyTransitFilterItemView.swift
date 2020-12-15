import SwiftUI
import Swappable
import MaasTheme

public struct NearbyTransitFilterItemView: View, Swappable {

    public struct InputType {
        public let data: FilterItem
        public let isDisabled: Bool
    }
    public let input: InputType

    @Environment(\.currentTheme) var theme
    var constants: Kotlin<NearbyTransitFilterItemConstants> { Kotlin(NearbyTransitFilterItemConstants(theme: theme)) }

    public init(input: InputType) {
        self.input = input
    }

    public init(data: FilterItem, isDisabled: Bool) {
        self.init(input: InputType(data: data, isDisabled: isDisabled))
    }

    public var defaultBody: some View {
        ZStack {
            boundsView
            ZStack {
                transportImageView
                    .background(badgeView)
            }
        }
    }

    private var boundsView: some View {
        Color.clear.frame(
            minWidth: constants.itemMinWidth,
            minHeight: constants.itemMinHeight
        )
    }

    private var badgeView: some View {
        RoundedRectangle(cornerRadius: constants.cornerRadius)
            .foregroundColor(foregroundColor)
            .frame(minWidth: constants.minWidth, minHeight: constants.minHeight)
    }

    private var transportImageView: some View {
        Image.from(image: UIImage(named: input.data.icon))
            .frame(
                width: constants.imageWidth,
                height: constants.imageHeight,
                alignment: .center
            )
            .foregroundColor(input.data.accentColor.parseColor())
    }

    private var foregroundColor: Color {
        input.isDisabled ? constants.disabledColor : input.data.color.parseColor()
    }
}

// MARK: - Preview

#if DEBUG
struct NearbyTransitFilterItemView_Previews: PreviewProvider, Snapped {
    static var snapped: [String: AnyView] {
        [
            "Enabled": AnyView(
                NearbyTransitFilterItemView(
                    data: items[0],
                    isDisabled: false
                )
            ),

            "Disabled": AnyView(
                NearbyTransitFilterItemView(
                    data: items[0],
                    isDisabled: true
                )
            ),

            "Swapped": AnyView(
                NearbyTransitFilterItemView(
                    data: items[0],
                    isDisabled: true
                )
                .swapView(
                    { input in
                        Image.from(image: UIImage(named: input.data.icon))
                            .frame(width: 20, height: 20, alignment: .center)
                            .foregroundColor(input.data.color.parseColor())
                    },
                    insteadOf: NearbyTransitFilterItemView.self
                )
            )
        ]
    }
}

extension FilterItem: Identifiable {}

#endif
