import struct SwiftUI.State

// MARK: - Filter

public struct ScrollableTappableView<T, Content>: View where Content : View, T: Identifiable {

    public let items: [T]
    public let itemView: (T) -> Content
    public var didTapItem: (T.ID) -> ()

    init(
        items: [T],
        itemView: @escaping (T) -> Content,
        didTapItem: @escaping (T.ID) -> ()
    ) {
        self.items = items
        self.itemView = itemView
        self.didTapItem = didTapItem
    }

    public var body: some View {
        ScrollView(.horizontal, showsIndicators: false) {
            HStack(spacing: 0) {
                ForEach(items) {
                    itemView($0)
                        .gesture(tapGesture(on: $0))
                }
            }
        }
    }

    func tapGesture(on item: T) -> some Gesture {
        TapGesture().onEnded { didTapItem(item.id) }
    }
}

public struct MultiSelectFilter<T, Content>: View where Content : View, T: Identifiable {

    public let items: [T]
    public let itemView: (T, Bool) -> Content
    public var didTapItem: (T.ID) -> ()
    public var disabledItems: Set<T.ID>

    public init(
        items: [T],
        itemView: @escaping (T, Bool) -> Content,
        didTapItem: @escaping (T.ID) -> (),
        disabledItems: Set<T.ID>
    ) {
        self.items = items
        self.itemView = itemView
        self.didTapItem = didTapItem
        self.disabledItems = disabledItems
    }

    public var body: some View {
        ScrollableTappableView(
            items: items,
            itemView: { itemView($0, disabledItems.contains($0.id)) },
            didTapItem: didTapItem
        )
    }
}

public struct SingleSelectFilter<T, Content>: View where Content : View, T: Identifiable {

    public let items: [T]
    public let itemView: (T, Bool) -> Content
    public var didTapItem: (T.ID) -> ()
    public var selectedItem: T.ID

    public init(
        items: [T],
        itemView: @escaping (T, Bool) -> Content,
        didTapItem: @escaping (T.ID) -> (),
        selectedItem: T.ID
    ) {
        self.items = items
        self.itemView = itemView
        self.didTapItem = didTapItem
        self.selectedItem = selectedItem
    }

    public var body: some View {
        ScrollableTappableView(
            items: items,
            itemView: { itemView($0, selectedItem == $0.id) },
            didTapItem: { didTapItem($0) }
        )
    }
}

// MARK: - Preview

// MARK: Single Select
#if DEBUG
private struct SingleSelectFilterPreview: View {

    @State private var selectedItem: String = "1"

    var body: some View {
        SingleSelectFilter(
            items: filterItems,
            itemView: MockItem.init,
            didTapItem: { selectedItem = $0 },
            selectedItem: selectedItem
        )
    }
}

public struct SingleSelectFilterPreview_Previews: PreviewProvider, Snapped {

    public static var snapped: [String : AnyView] {
        [
            "Filter": AnyView(
                SingleSelectFilterPreview()
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            )
        ]
    }

    public static var elementWidth: CGFloat? { 200 }
}

// MARK: Multi Select

private struct MultiSelectFilterPreview: View {

    @State var disabledItems: Set<String>

    var body: some View {
        MultiSelectFilter(
            items: filterItems,
            itemView: { MockItem.init(data: $0, isSelected: !$1) },
            didTapItem: {
                guard disabledItems.contains($0) else { disabledItems.insert($0); return }
                disabledItems.remove($0)
            },
            disabledItems: disabledItems
        )
    }
}

public struct MultiSelectFilterPreview_Previews: PreviewProvider, Snapped {

    public static var snapped: [String : AnyView] {
        [
            "Full selection": AnyView(
                MultiSelectFilterPreview(disabledItems: [])
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            ),

            "Half selections": AnyView(
                MultiSelectFilterPreview(disabledItems: ["3", "4"])
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            ),

            "None selection": AnyView(
                MultiSelectFilterPreview(disabledItems: ["1", "2", "3", "4"])
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            )
        ]
    }

    public static var elementWidth: CGFloat? { 200 }
}

// MARK: - Mock Data

private struct MockItemData: Identifiable {
    var background: Color
    var id: String
}

private struct MockItem: View {

    let data: MockItemData
    let isSelected: Bool

    var body: some View {
        Circle()
            .foregroundColor(foregroundColor)
            .frame(minWidth: 34, minHeight: 34)
            .overlay(
                Circle()
                    .frame(width: 10, height: 10, alignment: .center)
            )
            .padding(4)
    }

    var foregroundColor: Color {
        isSelected ? data.background : .init(.systemGray4)
    }
}

private let filterItems = [
    MockItemData(background: .blue, id: "1"),
    MockItemData(background: .green, id: "2"),
    MockItemData(background: .orange, id: "3"),
    MockItemData(background: .purple, id: "4"),
]
#endif
