import SwiftUI
import MaasTheme

struct InfoButton: View {
    
    public struct InputType {
        public let text: String
        public let icon: Image
        public let foreground: Color?
        public let action: () -> Void
    }
    
    public let input: InputType
    public init(
        _ text: String,
        icon: Image = Image(systemName: "info.circle"),
        foreground: Color? = nil,
        action: @escaping () -> Void) {
        
        input = InputType(
            text: text,
            icon: icon,
            foreground: foreground,
            action: action
        )
    }
    
    @Environment(\.isEnabled) var isEnabled
    @Environment(\.currentTheme) var theme
    
    var constants: Kotlin<InfoButtonConstants> { Kotlin(InfoButtonConstants(theme: theme)) }
    
    private var foregroundColor: Color {
        input.foreground ?? (isEnabled ? constants.defaultContentColor : constants.disabledContentColor)
    }
    
    var body: some View {
        SwiftUI.Button(
            action: input.action,
            label: {
                HStack(spacing: constants.spaceBetween) {
                    
                    input.icon
                        .resizable()
                        .frame(
                            width: constants.iconWidth,
                            height: constants.iconHeight
                        )
                    
                    Text(input.text)
                        .lineLimit(constants.maxLinesCount)
                        .textStyle(constants.textStyle)
                }
                .padding(.vertical, constants.paddingVertical)
                .padding(.horizontal, constants.paddingHorizontal)
            }
        )
        .foregroundColor(foregroundColor)
        .buttonStyle(GradienHighlightButtonStyle(gradient: constants.highlightedGradient))
    }
}

struct GradienHighlightButtonStyle: ButtonStyle {
    
    let gradient: LinearGradient
    
    func makeBody(configuration: Self.Configuration) -> some View {
        configuration.label
            .selectionModifier(configuration.isPressed) { isSelected in
                AnimatableGradientModifier(show: isSelected, gradient: gradient)
            }
    }
}

struct AnimatableGradientModifier: ViewModifier {
    
    let show: Bool
    let gradient: LinearGradient
    
    func body(content: Self.Content) -> some View {
        content.background(
            gradient.opacity(show ? 1 : 0)
        )
        .animation(.easeInOut(duration: 0.2))
    }
}

#if DEBUG
struct InfoButton_Previews: PreviewProvider, Snapped {
    
    static var snapped: [String: AnyView] {
        [
            "Plain": AnyView(
                InfoButton("Info", action: {})
            ),
            
            "Highlighted": AnyView(
                InfoButton("Info",action: {})
                    .environment(\.mockSelected, true)
            ),
            
            "Disabled": AnyView(
                InfoButton("Info", action: {})
                    .disabled(true)
            ),
            
            "Long title": AnyView(
                InfoButton("Some very very very very very long title", action: {})
            ),
            
            "Themed": AnyView(
                InfoButton("Info",  icon: Image(systemName: "tram"), foreground: Color.pink, action: {})
                    .environment(\.textStyleTextL, TextStyle(fontWeight: .normal, fontStyle: .normal, fontSize: 25, lineSpacing: 0, color: nil))
                    .environment(\.textFont, { Font(UIFont(name: "Menlo-Bold", size: $0)!) })
                
            ),
            
            "Highlighted on Backgound": AnyView(
                InfoButton("Info", action: {}).background(Color.green).environment(\.mockSelected, true)
            ),
        ]
    }
    
    static var elementWidth: CGFloat? { 200 }
    static var detailed: Bool { true }
}
#endif
