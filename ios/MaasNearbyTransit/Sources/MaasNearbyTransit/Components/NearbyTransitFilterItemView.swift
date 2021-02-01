public struct NearbyTransitFilterItemView: View, Swappable {

    public struct InputType {
        public let data: FilterItem
        public let isDisabled: Bool
    }
    public let input: InputType

    @Themeable(NearbyTransitFilterItemConstants.init) var constants

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
            .frame(minWidth: constants.contentMinWidth, minHeight: constants.contentMinHeight)
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

extension FilterItem: Identifiable {}

// MARK: - Preview

#if DEBUG
public struct NearbyTransitFilterItemView_Previews: PreviewProvider, Snapped {
    public static var snapped: [String: AnyView] {
        [
            "Enabled": AnyView(
                NearbyTransitFilterItemView(
                    data: NearbyTransitComponentsPreviewData.mockFilterDataItems[0],
                    isDisabled: false
                )
            ),

            "Disabled": AnyView(
                NearbyTransitFilterItemView(
                    data: NearbyTransitComponentsPreviewData.mockFilterDataItems[0],
                    isDisabled: true
                )
            ),

            "Swapped": AnyView(
                NearbyTransitFilterItemView(
                    data: NearbyTransitComponentsPreviewData.mockFilterDataItems[0],
                    isDisabled: false
                )
                .swapView(MockItem.init, insteadOf: NearbyTransitFilterItemView.self)
            )
        ]
    }
    
    public static var elementWidth: CGFloat? { 90 }
}

// MARK: - Mock Data

private struct MockItem: View {

    let input: NearbyTransitFilterItemView.InputType

    init(input: NearbyTransitFilterItemView.InputType) {
        self.input = input
    }

    var body: some View {
        ZStack {
            RoundedRectangle(cornerRadius: 4)
                .frame(width: 28, height: 28, alignment: .center)
                .foregroundColor(input.isDisabled ? .init(.systemGray2) : input.data.color.parseColor())
            Image.from(image: UIImage(named: input.data.icon))
                .frame(width: 20, height: 20, alignment: .center)
                .foregroundColor(input.data.accentColor.parseColor())
        }
        .padding(4)
    }
}

#endif
