#warning("Fix me!, all of it.")

import SwiftUI

struct TrackableScrollData: Equatable {
    let size: CGSize
    let contentOffset: CGFloat
    let contentSize: CGSize
}

struct TrackableScrollDataPreferenceKey: PreferenceKey {
    typealias Value = TrackableScrollData

    static var defaultValue: TrackableScrollData = .init(size: .zero, contentOffset: 0, contentSize: .zero)

    static func reduce(value: inout TrackableScrollData, nextValue: () -> TrackableScrollData) {
        value = nextValue()
    }
}

public struct GradientBoundsScrollView<Content>: View where Content: View {

    let axes: Axis.Set
    let showIndicators: Bool
    let content: Content

    @State var trackableScrollData = TrackableScrollData(size: .zero, contentOffset: .zero, contentSize: .zero)

    public init(_ axes: Axis.Set = .vertical, showIndicators: Bool = true, @ViewBuilder content: () -> Content) {
        self.axes = axes
        self.showIndicators = showIndicators
        self.content = content()
    }

    public var body: some View {
        GeometryReader { outsideProxy in
            ScrollView(axes, showsIndicators: showIndicators) {
                ZStack(alignment: axes == .vertical ? .top : .leading) {

                    HStack {
                        content
                    }

                    GeometryReader { insideProxy in
                        Color.clear.preference(
                            key: TrackableScrollDataPreferenceKey.self,
                            value: TrackableScrollData(
                                size: outsideProxy.size,
                                contentOffset: calculateContentOffset(fromOutsideProxy: outsideProxy, insideProxy: insideProxy),
                                contentSize: insideProxy.size
                            )
                        )
                    }
                }
            }
            .onPreferenceChange(TrackableScrollDataPreferenceKey.self) { trackableScrollData = $0 }
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
            startPoint: axes == .vertical ? .top : .leading,
            endPoint: axes == .vertical ? .bottom : .trailing
        )
        .offset(x: position)
        .opacity(opacity)
        .animation(.easeInOut(duration: 0.1))
        .frame(
            maxWidth: axes == .vertical ? .infinity : maxDiameter,
            maxHeight: axes == .vertical ? maxDiameter : .infinity
        )
    }

    func gradientOpacities() -> (Double, Double) {
        axes == .vertical
            ? (
                0,
                0
            )
            : (
                trackableScrollData.contentOffset + trackableScrollData.size.width <= trackableScrollData.contentSize.width - 1
                    ? 1
                    : 0,
                trackableScrollData.contentOffset >= 1 ? 1 : 0
            )
    }

    private func calculateContentOffset(fromOutsideProxy outsideProxy: GeometryProxy, insideProxy: GeometryProxy) -> CGFloat {
        axes == .vertical
            ? outsideProxy.frame(in: .global).minY - insideProxy.frame(in: .global).minY
            : outsideProxy.frame(in: .global).minX - insideProxy.frame(in: .global).minX
    }
}

