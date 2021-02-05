struct Spinner: View {
    
    private static let initialDegree = Angle.degrees(135)
    private static let initialSpinnerLength: CGFloat = 0.75

    let color: Color
    var animationTime: Double = 1
    @Binding var isAnimating: Bool
    
    @State private var spinnerStart: CGFloat = 0
    @State private var spinnerEnd: CGFloat = initialSpinnerLength
    @State private var rotationDegree = initialDegree
    
    var body: some View {
        SpinnerCircle(
            start: spinnerStart,
            end: spinnerEnd,
            rotation: rotationDegree,
            color: isAnimating ? color : .black
        )
        .onAppear {
            animate()
        }
    }
    
    private func animate() {
        spinRound()
        bounceSipperLength(start: 0.1, end: 0.2)
    }
    
    private func spinRound() {
        let animation = Animation
            .linear(duration: animationTime)
            .repeat(while: isAnimating, autoreverses: false)
        
        withAnimation(animation) {
            self.rotationDegree += .degrees(360)
        }
    }
    
    private func bounceSipperLength(start: CGFloat, end: CGFloat) {
        
        let animation = Animation
            .easeInOut(duration: animationTime / 2)
            .repeat(while: isAnimating, autoreverses: true)
        
        withAnimation(animation) {
            self.spinnerEnd -= end
            self.spinnerStart += start
        }
        
//        animateSpinner(begin: 0, end: 0.5) {
//            self.spinnerEnd -= end
//            self.spinnerStart += start
//        }
//
//        animateSpinner(begin: 0.5, end: 1) {
//            self.spinnerEnd += end
//            self.spinnerStart -= start
//        }
    }
    
    
    /// - Parameters:
    ///   - begin: 0...1 - a point in time of animation duration
    ///   - end: 0...1 - a point in time of animation duration
    private func animateSpinner(
        begin: Double = 0,
        end: Double = 1,
        animation: @escaping (() -> Void)
    ) {
        let start = animationTime * begin
        let duration = (animationTime * end) - start
        
//        Timer.scheduledTimer(withTimeInterval: start, repeats: false) { _ in
            withAnimation(Animation.easeInOut(duration: duration).delay(start).repeat(while: isAnimating, autoreverses: true), animation)
//        }
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

struct SpinnerCircle: View {
    
    var start: CGFloat
    var end: CGFloat
    var rotation: Angle
    var color: Color
    var lineWidth: CGFloat = 1.5
    
    var body: some View {
        Circle()
            .trim(from: start, to: end)
            .stroke(style: StrokeStyle(lineWidth: lineWidth, lineCap: .round))
            .fill(color)
            .rotationEffect(rotation)
    }
    
}

#if DEBUG
public struct Spinner_Previews: PreviewProvider, Snapped {
    
    public static var snapped: [String: AnyView] {
        [
            "Spinner": AnyView(
                Spinner(color: .black, isAnimating: .constant(true))
                    .frame(width: 16, height: 16, alignment: .center)
            ),
        ]
    }
    
    public static var elementWidth: CGFloat? { 50 }
}
#endif
