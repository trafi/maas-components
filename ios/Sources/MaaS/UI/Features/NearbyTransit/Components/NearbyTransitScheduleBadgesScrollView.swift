import SwiftUI
import Swappable

private struct GradientScrollDataPreferenceKey: PreferenceKey {
    typealias Value = ScrollViewData

    static var defaultValue: ScrollViewData = .init(size: .zero, contentOffset: 0, contentSize: .zero)

    static func reduce(value: inout ScrollViewData, nextValue: () -> ScrollViewData) {
        value = nextValue()
    }
}

private struct GradientBoundsScrollView<Content>: View where Content: View {

    let content: Content

    @State var trackableScrollData = ScrollViewData(size: .zero, contentOffset: .zero, contentSize: .zero)

    init(@ViewBuilder content: () -> Content) {
        self.content = content()
    }

    var body: some View {
        GeometryReader { outsideProxy in
            ScrollView(.horizontal, showsIndicators: false) {
                ZStack(alignment: .leading) {

                    HStack {
                        content
                    }

                    GeometryReader { insideProxy in
                        Color.clear.preference(
                            key: GradientScrollDataPreferenceKey.self,
                            value: ScrollViewData(
                                size: outsideProxy.size,
                                contentOffset: calculateContentOffset(fromOutsideProxy: outsideProxy, insideProxy: insideProxy),
                                contentSize: insideProxy.size
                            )
                        )
                    }
                }
            }
            .onPreferenceChange(GradientScrollDataPreferenceKey.self) { trackableScrollData = $0 }
            .overlay(
                HStack(spacing: 0) {
                    let opacities = gradientOpacities()
                    gradient(at: outsideProxy.size.width / 2, opacity: opacities.0, reversed: false)
                    gradient(at: -(outsideProxy.size.width / 2), opacity: opacities.1, reversed: true)
                }
            )
        }
        .frame(height: trackableScrollData.contentSize.height)
    }

    func gradient(at position: CGFloat, opacity: Double, reversed: Bool) -> some View {

        let maxDiameter: CGFloat = 20

        var colors: [Color] {
            let colors = [Color(UIColor.systemBackground.withAlphaComponent(0)), Color(.systemBackground)]
            return reversed
                ? colors.reversed()
                : colors
        }

        let gradient = Gradient(colors: colors)

        return LinearGradient(
            gradient: gradient,
            startPoint: .leading,
            endPoint: .trailing
        )
        .offset(x: position)
        .opacity(opacity)
        .animation(.easeInOut(duration: 0.1))
        .frame(
            maxWidth: maxDiameter,
            maxHeight: .infinity
        )
    }

    func gradientOpacities() -> (Double, Double) {
        (
            trackableScrollData.contentOffset + trackableScrollData.size.width <= trackableScrollData.contentSize.width - 1
                ? 1
                : 0,
            trackableScrollData.contentOffset >= 1 ? 1 : 0
        )
    }

    func calculateContentOffset(fromOutsideProxy outsideProxy: GeometryProxy, insideProxy: GeometryProxy) -> CGFloat {
        outsideProxy.frame(in: .global).minX - insideProxy.frame(in: .global).minX
    }
}


public struct NearbyTransitScheduleBadgesScrollView: View, Swappable {

    public struct InputType {
        let schedules: [Schedule]
    }
    public let input: InputType

    public init(input: InputType) {
        self.input = input
    }

    public init(schedules: [Schedule]) {
        self.input = .init(schedules: schedules)
    }

    public var defaultBody: some View {
        GradientBoundsScrollView {
            HStack {
                ForEach(input.schedules.indices, id: \.self) {
                    fakeBadge(input.schedules[$0].name, color: input.schedules[$0].color.parseColor())
                }
            }
        }
    }

    #warning("To supah badgem")
    func fakeBadge(_ text: String, color: Color? = nil) -> some View {
        Text(text)
            .font(.caption)
            .fontWeight(.bold)
            .foregroundColor(.white)
            .padding(2)
            .fixedSize()
            .background(
                RoundedRectangle(cornerRadius: 4, style: .continuous)
                    .foregroundColor(color)
            )
    }
}

private struct ScrollViewData: Equatable {
    let size: CGSize
    let contentOffset: CGFloat
    let contentSize: CGSize
}

#if DEBUG
struct NearbyTransitScheduleBadgesScrollView_Previews: PreviewProvider, Snapped {

    static let schedules = NearbyTransitComponentsPreviewData.stopWithSchedulesWithDepartures
        .scheduleDepartures
        .map { $0.schedule }

    static var snapped: [String: AnyView] {
        [
            "Scrolling": AnyView(
                NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                    .defaultFrame
            ),

            "Scrolled - Full": AnyView(
                Group {
                    if #available(iOS 14.0, *) {
                        ScrollViewReader { sc in
                        NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                            .onAppear {
                                withAnimation { sc.scrollTo(9, anchor: .trailing) }
                            }
                        }
                    }
                }
                .defaultFrame
            ),

            "Scrolled - Half": AnyView(
                Group {
                    if #available(iOS 14.0, *) {
                        ScrollViewReader { sc in
                        NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                            .onAppear {
                                withAnimation { sc.scrollTo(4, anchor: .center) }
                            }
                        }
                    }
                }
                .defaultFrame
            ),

            "Swapped": AnyView(
                NearbyTransitScheduleBadgesScrollView(schedules: schedules)
                    .swapView(
                        { input in
                            ScrollView(.horizontal) {
                                HStack {
                                    ForEach(0..<input.schedules.count, id: \.self) {
                                        Text(input.schedules[$0].name)
                                    }
                                }
                            }
                        },
                        insteadOf: NearbyTransitScheduleBadgesScrollView.self
                    )
            ),
        ]
    }

    static var elementWidth: CGFloat? { 200 }

    static var detailed: Bool { true }
}

private extension View {

    var defaultFrame: some View { frame(height: 55) }
}
#endif
