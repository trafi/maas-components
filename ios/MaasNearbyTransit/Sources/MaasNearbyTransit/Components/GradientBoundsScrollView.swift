import struct SwiftUI.State

struct ScrollViewData: Equatable {
    let size: CGSize
    let contentOffset: CGFloat
    let contentSize: CGSize

    static var empty: Self { .init(size: .zero, contentOffset: .zero, contentSize: .zero) }
}

public struct GradientBoundsScrollView<Content>: View where Content: View {

    private let axis: Axis.Set
    private let showsIndicators: Bool
    private let gradientColors: [Color]?
    private let gradientLenght: CGFloat
    private let content: Content

    @State private var scrollData: ScrollViewData = .empty
    @Environment(\.uiColorBackground) var backgroundColor

    public init(
        axis: Axis.Set = .horizontal,
        showsIndicators: Bool = true,
        gradientColors: [Color]? = nil,
        gradientLenght: CGFloat = 20,
        @ViewBuilder content: () -> Content
    ) {
        self.axis = axis
        self.showsIndicators = showsIndicators
        self.gradientColors = gradientColors
        self.gradientLenght = gradientLenght
        self.content = content()
    }

    public var body: some View {
        GeometryReader { outsideProxy in
            scrollView {
                ZStack {
                    content
                    GeometryReader { insideProxy in
                        updateScrollDataPreferenceValue(outsideProxy: outsideProxy, insideProxy: insideProxy)
                    }
                }
            }
        }
        .frame(height: axis != .vertical ? scrollData.contentSize.height : nil)
    }
}

// MARK: - Private

private struct ScrollDataPreferenceKey: PreferenceKey {

    static var defaultValue: ScrollViewData = .empty

    static func reduce(value: inout ScrollViewData, nextValue: () -> ScrollViewData) {
        value = nextValue()
    }
}

private extension GradientBoundsScrollView {

    private var defaultGradientColor: [Color] {
        [.init(backgroundColor.withAlphaComponent(0)), .init(backgroundColor)]
    }

    func scrollView<Content: View>(@ViewBuilder content: () -> Content) -> some View {
        ScrollView(axis, showsIndicators: showsIndicators, content: content)
            .onPreferenceChange(ScrollDataPreferenceKey.self) { scrollData = $0 }
            .overlay(
                axis.boundGradients(
                    scrollData: scrollData,
                    gradientLength: gradientLenght,
                    colors: gradientColors ?? defaultGradientColor
                )
            )
    }

    func updateScrollDataPreferenceValue(outsideProxy: GeometryProxy, insideProxy: GeometryProxy) -> some View {

        let value = ScrollViewData(
            size: outsideProxy.size,
            contentOffset: outsideProxy.contentOffset(in: axis, from: insideProxy),
            contentSize: insideProxy.size
        )

        return Color.clear.preference(key: ScrollDataPreferenceKey.self, value: value)
    }
}

// MARK: - Extensions

private extension GeometryProxy {

    func contentOffset(in axis: Axis.Set, from proxy: GeometryProxy) -> CGFloat {
        axis == .vertical
            ? frame(in: .global).minY - proxy.frame(in: .global).minY
            : frame(in: .global).minX - proxy.frame(in: .global).minX
    }
}

private extension Axis.Set {

    func boundGradients(scrollData: ScrollViewData, gradientLength: CGFloat, colors: [Color]) -> some View {

        func stackView<Content: View>(@ViewBuilder content: () -> Content) -> some View {
            Group {
                switch self {
                case .horizontal: HStack(spacing: 0, content: content)
                case .vertical: VStack(spacing: 0, content: content)
                default: EmptyView()
                }
            }
        }

        let isVertical = self == .vertical
        let yOffset = scrollData.size.height / 2
        let xOffset = scrollData.size.width / 2

        let endOpacity = min(1, Double(scrollData.contentOffset / gradientLength))

        var startOpacity: Double {
            let additionalLenght = (isVertical ? scrollData.size.height : scrollData.size.width)
            let offsetWithAdditionalLenght = scrollData.contentOffset + additionalLenght
            let contentLenght = isVertical ? scrollData.contentSize.height : scrollData.contentSize.width
            return min(1, Double((contentLenght - offsetWithAdditionalLenght) / gradientLength))
        }

        return stackView {
            ForEach(0..<2) {
                gradientView(colors: $0 == 0 ? colors : colors.reversed())
                    .opacity($0 == 0 ? startOpacity : endOpacity)
                    .offset(
                        x: isVertical ? 0 : $0 == 0 ? xOffset : -xOffset,
                        y: isVertical ? $0 == 0 ? yOffset : -yOffset : 0)
                    .frame(
                        maxWidth: isVertical ? .infinity : gradientLength,
                        maxHeight: isVertical ? gradientLength : .infinity)
            }
        }
    }

    private func gradientView(colors: [Color]) -> some View {
        LinearGradient(
            gradient: Gradient(colors: colors),
            startPoint: self == .horizontal ? .leading : .top,
            endPoint: self == .horizontal ? .trailing : .bottom
        )
    }
}
