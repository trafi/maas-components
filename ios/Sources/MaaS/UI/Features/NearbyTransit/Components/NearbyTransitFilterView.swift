import SwiftUI

struct NearbyTransitFilterView: View {

    public let items: [FilterItem]
    public var didTapItem: (FilterItem.ID) -> ()
    public var disabledItems: Set<FilterItem.ID>

    var body: some View {
        MultiSelectFilter(
            items: items,
            itemView: NearbyTransitFilterItemView.init,
            didTapItem: didTapItem,
            disabledItems: disabledItems
        )
    }
}

// MARK: - Preview

struct NearbyTransitFilterView_Previews: PreviewProvider, Snapped {

    static var snapped: [String: AnyView] {
        [
            "Filter": AnyView(
                MultiSelectFilter(
                    items: items,
                    itemView: NearbyTransitFilterItemView.init,
                    didTapItem: { _ in },
                    disabledItems: [items[0].id, items[2].id, items[4].id]
                )
            ),

            "Swapped": AnyView(
                MultiSelectFilter(
                    items: items,
                    itemView: NearbyTransitFilterItemView.init,
                    didTapItem: { _ in },
                    disabledItems: [items[0].id, items[2].id, items[4].id]
                )
                .swapView(
                    { input in
                        Image.from(image: UIImage(named: input.data.icon))
                            .frame(width: 20, height: 20, alignment: .center)
                            .foregroundColor(input.isDisabled ? .init(.systemGray2) : input.data.color.parseColor())
                    },
                    insteadOf: NearbyTransitFilterItemView.self
                )
            )
        ]
    }
}
