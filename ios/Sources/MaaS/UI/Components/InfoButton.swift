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
                HStack(spacing: 8) {
                    
                    input.icon
                    
                    Text(input.text)
                        .lineLimit(1)
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
    
    var color: Color
    
    func makeBody(configuration: Self.Configuration) -> some View {
        Content(configuration: configuration, color: color)
    }
    
    struct Content: View {
        
        let configuration: Configuration
        var color: Color
        @Environment(\.isEnabled) var isEnabled
        @Environment(\.mockSelected) var isMockSelected


        var isSelected: Bool {
            #if DEBUG
            if isMockSelected { return !configuration.isPressed }
            #endif
            return configuration.isPressed
        }
        
        private var gradient: LinearGradient {
            LinearGradient(
                gradient: Gradient(
                    colors: [
                        color.opacity(0),
                        color,
                        color.opacity(0),
                    ]),
                startPoint: .leading,
                endPoint: .trailing
            )
        }
        
        var body: some View {
            configuration.label
                .background(
                    gradient.opacity(isSelected ? 1 : 0)
                )
                .animation(.easeInOut(duration: 0.2))
        }
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
                    .environment(\.uiFontTextL, UIFont(name: "Menlo-Bold", size: 25)!)
                
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

#if DEBUG
struct MockSelected: EnvironmentKey {
    static var defaultValue: Bool { false }
}

public extension EnvironmentValues {
    
    var mockSelected: Bool {
        get { self[MockSelected.self] }
        set { self[MockSelected.self] = newValue }
    }
}
#endif
