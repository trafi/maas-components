import SwiftUI
import MaasTheme

struct InfoButton: View {
    
    public struct InputType {
        public let text: String
        public let icon: Image
        public let foreground: Color?
        public let highlightedColor: Color?
        public let action: () -> Void
    }
    
    public let input: InputType
    public init(
        _ text: String,
        icon: Image = Image(systemName: "info.circle"),
        foreground: Color? = nil,
        highlightedColor: Color? = nil,
        action: @escaping () -> Void) {
        
        input = InputType(
            text: text,
            icon: icon,
            foreground: foreground,
            highlightedColor: highlightedColor,
            action: action
        )
    }
    
    @Environment(\.isEnabled) var isEnabled
    @Environment(\.currentTheme) var theme
    
    var constants: Kotlin<InfoButtonConstants> { Kotlin(InfoButtonConstants(theme: theme)) }

    private var foregroundColor: Color {
        input.foreground ?? (isEnabled ? constants.defaultContentColor : constants.disabledContentColor)
    }
    
    private var highlightedColor: Color {
        input.highlightedColor ?? constants.highlightedColor
    }
    
    var body: some View {
        SwiftUI.Button(
            action: input.action,
            label: {
                HStack(spacing: 8) { // use from constants
                    
                    input.icon
                        .resizable()
                        .frame(
                            width: 16, // use from constants
                            height: 16 // use from constants
                        )
                    
                    Text(input.text)
                        .lineLimit(1) // use from constants
                        .font(constants.textStyle)
                }
                .padding(.vertical, constants.verPadding)
                .padding(.horizontal, constants.horMinPadding)
            }
        )
        .foregroundColor(foregroundColor)
        .buttonStyle(GradienHighlightButtonStyle(color: highlightedColor))
    }
}

struct GradienHighlightButtonStyle: ButtonStyle {
    
    let color: Color
    
    func makeBody(configuration: Self.Configuration) -> some View {
        configuration.label
            .modifier(SelectionModifier(
                isSelected: configuration.isPressed,
                selection: { GradientModifier(isSelected: $0, color: color) }
            )
            )
        
    }
}

struct GradientModifier: ViewModifier {
    
    let isSelected: Bool
    let color: Color
    
    private var gradient: LinearGradient {
        LinearGradient(
            gradient: Gradient(
                colors: [
                    color.opacity(0), // use from constants
                    color, // use from constants
                    color.opacity(0), // use from constants
                ]),
            startPoint: .leading,
            endPoint: .trailing
        )
    }
    
    func body(content: Self.Content) -> some View {
        content.background(
            gradient.opacity(isSelected ? 1 : 0)
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
                InfoButton("Some title", action: {})
                    .environment(\.uiFontTextL, UIFont(name: "Papyrus", size: 25)!)
            ),
        ]
    }
    
    static var elementWidth: CGFloat? { 200 }
    static var detailed: Bool { true }
}
#endif
