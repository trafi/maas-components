public struct NewButton: View, Swappable {

    public struct InputType {
        public let text: String
        public let icon: Image?
        public let foregroundColor: Color?
        public let backgroundColor: Color?
        public let isSmall: Bool
        public let isHugging: Bool
        public let isLoading: Binding<Bool>
        public let action: () -> Void
    }

    public let input: InputType
    
    init<T: NewButtonConstants>(input: InputType, constantsType: T.Type) {
        self.input = input
        _buttonConstants = .init(T.init)
        _isLoading = input.isLoading
    }
    
    public init(
        _ text: String,
        icon: Image? = nil,
        foregroundColor: Color? = nil,
        backgroundColor: Color? = nil,
        isSmall: Bool = false,
        isHugging: Bool = false,
        isLoading: Binding<Bool> = .constant(false),
        action: @escaping () -> Void) {
        
        let input = InputType(
            text: text,
            icon: icon,
            foregroundColor: foregroundColor,
            backgroundColor: backgroundColor,
            isSmall: isSmall,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
        
        self.init(input: input, constantsType: NewButtonConstants.self)
    }

    
    @Binding private var isLoading: Bool
    @Environment(\.isEnabled) var isEnabled
    @Themeable(NewButtonConstants.init) var buttonConstants
    
    private var animation = Animation.linear(duration: 0.2)
    
    public var defaultBody: some View {
        SwiftUI.Button(action: input.action) {
            HStack(spacing: buttonConstants.spaceBetween) {
                
                if isLoading || input.icon != nil {
                    ZStack {
                        
                        if let icon = input.icon {
                            image(icon)
                        }
                        
                        spinner
                    }
                }
                
                if !input.text.isEmpty {
                    text
                }
            }
            .padding(.horizontal, buttonConstants.paddingHorizontal)
            .frame(
                maxWidth: input.isHugging ? nil : .infinity,
                minHeight: input.isSmall ? buttonConstants.heightSmall : buttonConstants.height
            )
            .animation(animation)
        }
        .foregroundColor(foregroundColor)
        .background(backgroundColor)
        .cornerRadius(buttonConstants.cornerRadius)
        .animation(animation)
    }
    
    private var text: some View {
        Text(input.text)
            .lineLimit(0)
            .minimumScaleFactor(0.75)
            .textStyle(input.isSmall ? buttonConstants.textStyleSmall : buttonConstants.textStyle)
            .transition(.opacity)
    }
    
    private var spinner: some View {
        Spinner(color: foregroundColor, isAnimating: $isLoading)
            .frame(
                width: buttonConstants.iconWidth,
                height: buttonConstants.iconHeight
            )
    }
    
    private func image(_ icon: Image) -> some View {
        icon.resizable()
            .frame(
                width: buttonConstants.iconWidth,
                height: buttonConstants.iconHeight
            )
            .opacity(isLoading ? 0 : 1)
    }
    
    private var foregroundColor: Color {
        input.foregroundColor ?? (isEnabled
                                    ? buttonConstants.defaultContentColor
                                    : buttonConstants.disabledContentColor)
    }
    
    private var backgroundColor: Color {
        input.backgroundColor ?? (isEnabled
                                ? buttonConstants.defaultBackgroundColor
                                : buttonConstants.disabledBackgroundColor)
    }
}

#if DEBUG
public struct NewButton_Previews: PreviewProvider, Snapped {
    
    public static var snapped: [String: AnyView] {
        [
            "Button": AnyView(
                NewButton("Some title", action: {})
            ),
            
            "Button icon": AnyView(
                NewButton("Some title", icon: Image(systemName: "command"), isLoading: .constant(false), action: {})
            ),
            
            "Button icon loading": AnyView(
                NewButton("Some title", icon: Image(systemName: "command"), isLoading: .constant(true), action: {})
            ),
            
            "Button Small": AnyView(
                NewButton("Some title", isSmall: true, isLoading: .constant(true), action: {})
            ),
            
            "Compact Button": AnyView(
                NewButton("Some title", icon: Image(systemName: "command"), isHugging: true, action: {})
            ),
            
            "Small Compact Button": AnyView(
                NewButton("Small title", isSmall: true, isHugging: true, action: {})
            ),
            
            "Colors": AnyView(
                Button("Some title", foreground: Color(.label), background: Color(.systemFill), action: {})
            ),
            
            "Disabled": AnyView(
                Button("Some title", action: {})
                    .disabled(true)
            ),
            
            "Long title": AnyView(
                Button("Some very very very very very very very long title", action: {})
            ),
            
            "Themed": AnyView(
                Button("Some title", action: {})
                    .environment(\.uiColorPrimary, .systemBlue)
                    .environment(\.uiColorOnPrimary, .systemYellow)
                    .environment(\.cornerRadiusButton, 20)
                    .environment(\.textStyleTextL, TextStyle(fontWeight: .normal, fontStyle: .normal, fontSize: 25, lineSpacing: 0, color: nil))
                    .environment(\.textFont, { Font(UIFont(name: "Papyrus", size: $0)!) })
            ),
        ]
    }
    
    public static var detailed: Bool { true }
    public static var elementWidth: CGFloat? { 320 }
}
#endif
