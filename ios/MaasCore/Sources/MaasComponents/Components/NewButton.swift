public struct NewButtonSmall: View, Swappable {
    
    public let input: NewButton.InputType
    
    public init(
        _ text: String,
        icon: Image? = nil,
        foregroundColor: Color? = nil,
        backgroundColor: Color? = nil,
        isHugging: Bool = false,
        isLoading: Binding<Bool> = .constant(false),
        action: @escaping () -> Void) {
        
        input = InputType(
            text: text,
            icon: icon,
            foregroundColor: foregroundColor,
            backgroundColor: backgroundColor,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
    }
    
    public var defaultBody: some View {
        NewButton(input: input, constantsType: CompactButtonConstants.self)
    }
}

public struct NewButton: View, Swappable {

    public struct InputType {
        public let text: String
        public let icon: Image?
        public let foregroundColor: Color?
        public let backgroundColor: Color?
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
        isHugging: Bool = false,
        isLoading: Binding<Bool> = .constant(false),
        action: @escaping () -> Void) {
        
        let input = InputType(
            text: text,
            icon: icon,
            foregroundColor: foregroundColor,
            backgroundColor: backgroundColor,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
        
        self.init(input: input, constantsType: NewButtonConstants.self)
    }

    
    @Binding private var isLoading: Bool
    @Environment(\.isEnabled) var isEnabled
    @Themeable(NewButtonConstants.init) var buttonConstants
    
    private var animation = Animation.easeInOut(duration: 0.2)
    
    public var defaultBody: some View {
        SwiftUI.Button(action: input.action) {
            HStack(spacing: buttonConstants.spaceBetween) {
                
                if isLoading || input.icon != nil {
                    ZStack {
                        if let icon = input.icon {
                            icon.resizable()
                                .frame(
                                    width: buttonConstants.iconWidth,
                                    height: buttonConstants.iconHeight
                                )
                                .show(when: !isLoading)
                                .animation(isLoading ? nil : animation)
                        }
                        if isLoading {
                            loadingSpinner
                        }
                    }
                }
                
                text
            }
            .padding(.horizontal, buttonConstants.paddingHorizontal)
            .frame(maxWidth: input.isHugging ? nil : .infinity, minHeight: buttonConstants.minHeight)
            .animation(animation)
        }
        .foregroundColor(foregroundColor)
        .background(backgroundColor)
        .cornerRadius(buttonConstants.cornerRadius)
    }
    
    private var text: some View {
        Text(input.text)
            .lineLimit(0)
            .minimumScaleFactor(0.75)
            .textStyle(buttonConstants.textStyle)
    }
    
    var loadingSpinner: some View {
        Spinner(color: foregroundColor, isAnimating: $isLoading)
            .frame(
                width: isLoading ? buttonConstants.iconWidth : 0,
                height: buttonConstants.iconHeight
            )
            .show(when: isLoading)
            .animation(isLoading ? animation : nil)
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

private extension View {
    
    func show(when show:Bool) -> some View {
        self.opacity(show ? 1 : 0.5)
    }
}

#if DEBUG
public struct NewButton_Previews: PreviewProvider, Snapped {
    
    public static var snapped: [String: AnyView] {
        [
            "Button": AnyView(
                NewButton("Button", action: {})
            ),
            
            "Button icon": AnyView(
                NewButton("Button", icon: Image(systemName: "command"), isLoading: .constant(false), action: {})
            ),
            
            "Button Small": AnyView(
                NewButtonSmall("Button", isLoading: .constant(true), action: {})
            ),
            
            "Compact Button": AnyView(
                NewButton("Button", isHugging: true, action: {})
            ),
            
            "Small Compact Button": AnyView(
                NewButtonSmall("Button", isHugging: true, action: {})
            ),
        ]
    }
    
    public static var detailed: Bool { false }
    public static var elementWidth: CGFloat? { 320 }
}
#endif
