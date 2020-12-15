import SwiftUI

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

struct SingleSelectFilterPreview_Previews: PreviewProvider, Snapped {
    static var snapped: [String : AnyView] {
        [
            "Single Select Filter": AnyView(
                SingleSelectFilterPreview()
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            )
        ]
    }
}

// MARK: Multi Select

private struct MultiSelectFilterPreview: View {

    @State private var disabledItems: Set<String> = ["1", "2"]

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

struct MultiSelectFilterPreview_Previews: PreviewProvider, Snapped {
    static var snapped: [String : AnyView] {
        [
            "Multi Select Filter": AnyView(
                MultiSelectFilterPreview()
                    .padding()
                    .fixedSize()
                    .previewLayout(.sizeThatFits)
            )
        ]
    }
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
            .frame(width: 34, height: 34)
            .overlay(Text(data.id).bold().foregroundColor(.white))
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
