struct ColorfulButton: View {
    
    let colors: ButtonColors
    let input: Button.InputType
    
    @Environment(\.isEnabled) var isEnabled
    
    var body: some View {
        Button(
            input.text,
            icon: input.icon,
            foregroundColor: colors.foreground.stateful(isActive: input.isLoading, isEnabled: isEnabled),
            backgroundColor: colors.background.stateful(isActive: input.isLoading, isEnabled: isEnabled),
            isSmall: input.isSmall,
            isHugging: input.isHugging,
            isLoading: input.isLoading,
            action: input.action
        )
    }
}

struct ButtonColors {
    let foreground: StatefulColor
    let background: StatefulColor
}

struct StatefulColor {
    let color: Color
    let activeColor: Color
    let disabledColor: Color
    
    func stateful(isActive: Bool, isEnabled: Bool) -> Color {
        if !isEnabled { return disabledColor }
        if isActive { return activeColor }
        return color
    }
    
    static func just(_ color: Color) -> StatefulColor {
        StatefulColor(color: color, activeColor: color, disabledColor: color)
    }
}

public struct PrimaryButton: View {
    
    @Environment(\.colorPrimary) public var primary
    @Environment(\.colorOnPrimary) public var onPrimary
    @Environment(\.colorPrimaryVariant) public var primaryVariant

    var colors: ButtonColors {
        .init(
            foreground: StatefulColor.just(onPrimary),
            background: StatefulColor(
                color: primary,
                activeColor: primaryVariant,
                disabledColor: primary.opacity(0.3)
            )
        )
    }
    
    public init(
        _ text: String,
        icon: Image? = nil,
        isSmall: Bool = false,
        isHugging: Bool = false,
        isLoading: Bool = false,
        action: @escaping () -> Void
    ) {
        input = .init(
            text: text,
            icon: icon,
            foregroundColor: .black,
            backgroundColor: .clear,
            isSmall: isSmall,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
    }
    
    let input: Button.InputType
    
    public var body: some View {
        ColorfulButton(colors: colors, input: input)
    }
}

public struct SecondaryButton: View {
    
    @Environment(\.grayScale) public var grayScale
    
    var colors: ButtonColors {
        ButtonColors(
            foreground: StatefulColor(
                color: grayScale.gray900.color,
                activeColor: grayScale.gray900.color,
                disabledColor: grayScale.gray400.color
            ),
            background: StatefulColor(
                color: grayScale.gray100.color,
                activeColor: grayScale.gray300.color,
                disabledColor: grayScale.gray100.color
            )
        )
    }
    
    public init(
        _ text: String,
        icon: Image? = nil,
        isSmall: Bool = false,
        isHugging: Bool = false,
        isLoading: Bool = false,
        action: @escaping () -> Void
    ) {
        input = .init(
            text: text,
            icon: icon,
            foregroundColor: .black,
            backgroundColor: .clear,
            isSmall: isSmall,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
    }
    
    let input: Button.InputType
    
    public var body: some View {
        ColorfulButton(colors: colors, input: input)
    }
}

public struct TertiaryButton: View {
    
    @Environment(\.grayScale) public var grayScale
    
    var colors: ButtonColors {
        ButtonColors(
            foreground: StatefulColor(
                color: grayScale.gray900.color,
                activeColor: grayScale.gray900.color,
                disabledColor: grayScale.gray400.color
            ),
            background: StatefulColor(
                color: .clear,
                activeColor: grayScale.gray100.color,
                disabledColor: .clear
            )
        )
    }
    
    public init(
        _ text: String,
        icon: Image? = nil,
        isSmall: Bool = false,
        isHugging: Bool = false,
        isLoading: Bool = false,
        action: @escaping () -> Void
    ) {
        input = .init(
            text: text,
            icon: icon,
            foregroundColor: .black,
            backgroundColor: .clear,
            isSmall: isSmall,
            isHugging: isHugging,
            isLoading: isLoading,
            action: action
        )
    }
    
    let input: Button.InputType
    
    public var body: some View {
        ColorfulButton(colors: colors, input: input)
    }
}

#if DEBUG
struct ColorfulButton_Previews: PreviewProvider {
    
    static var previews: some View {
        VStack {
            
            VStack(spacing: 20) {
                PrimaryButton("Primary", action: {})
                PrimaryButton("Primary", isLoading: true, action: {})
                PrimaryButton("Primary", action: {})
                    .disabled(true)
            }.padding(.vertical)

            VStack(spacing: 20) {
                SecondaryButton("Secondary", action: {})
                SecondaryButton("Secondary", isLoading: true, action: {})
                SecondaryButton("Secondary", action: {})
                    .disabled(true)
            }.padding(.vertical)
            
            VStack(spacing: 20) {
                TertiaryButton("Tertiary", action: {})
                TertiaryButton("Tertiary", isLoading: true, action: {})
                TertiaryButton("Tertiary", action: {})
                    .disabled(true)
            }.padding(.vertical)
        }.padding()
    }
}
#endif
