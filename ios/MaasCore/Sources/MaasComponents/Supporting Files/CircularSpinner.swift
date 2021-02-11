import struct SwiftUI.State

public struct Spinner: View {
    
    private static let initialDegree = Angle.degrees(135)
    private static let initialSpinnerLength: CGFloat = 0.75

    public let color: Color
    public var lineWidth: CGFloat = 1.5
    public var animationTime: Double = 1
    public var appearDuration: Double = 0.2
    @Binding public var isAnimating: Bool
    
    @State private var spinnerStart: CGFloat = 0
    @State private var spinnerEnd: CGFloat = initialSpinnerLength
    @State private var rotationDegree = initialDegree
    @State private var hasAppeared = false
    
    private var shouldAnimate: Bool { hasAppeared && isAnimating }

    public var body: some View {
        Circle()
            .trim(
                from: shouldAnimate ? spinnerStart + 0.1 : spinnerStart,
                to: shouldAnimate ? spinnerEnd - 0.2 : spinnerEnd
            )
            .stroke(style: StrokeStyle(lineWidth: lineWidth, lineCap: .round))
            .fill(color)
            .animation(lineLengthAnimation)
            
            .rotationEffect(shouldAnimate
                                ? Self.initialDegree + Angle.degrees(360)
                                : Self.initialDegree + Angle.degrees(0))
            .animation(rotationAnimation)
            
            .scaleEffect(shouldAnimate ? 1 : 0)
            .animation(.easeOut(duration: appearDuration))
            // -
            .onAppear { hasAppeared = true }
            .onDisappear { hasAppeared = false }
            .animation(nil)

    }
    
    private var lineLengthAnimation: Animation {
        Animation
            .easeInOut(duration: animationTime / 2)
            .repeat(while: shouldAnimate, autoreverses: true)
    }
    
    private var rotationAnimation: Animation {
        shouldAnimate
            ? Animation.linear(duration: animationTime)
            .repeat(while: shouldAnimate, autoreverses: false)
            : Animation.default
    }
    
}

extension Animation {
    
    func `repeat`(while expression: Bool, autoreverses: Bool = false) -> Animation {
        if expression {
            return self.repeatForever(autoreverses: autoreverses)
        } else {
            return self
        }
    }
}

#if DEBUG
public struct Spinner_Previews: PreviewProvider, Snapped {
    
    public static var snapped: [String: AnyView] {
        [
            "Spinner": AnyView(
                Spinner(
                    color: .black,
                    animationTime: 8,
                    isAnimating: .constant(true)
                )
                    .frame(width: 16, height: 16, alignment: .center)
            ),
        ]
    }
    
    public static var elementWidth: CGFloat? { 50 }
}
#endif
