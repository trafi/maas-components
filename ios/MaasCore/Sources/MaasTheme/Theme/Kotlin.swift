@dynamicMemberLookup
public struct Kotlin<T> {

    let value: T
    public init(_ value: T) { self.value = value }

    public subscript<V>(dynamicMember keyPath: KeyPath<T, V>) -> V {
        value[keyPath: keyPath]
    }

    public subscript(dynamicMember keyPath: KeyPath<T, KotlinULong?>) -> Color? {
        value[keyPath: keyPath].flatMap { Color($0.uint64Value.color) }
    }

    public subscript(dynamicMember keyPath: KeyPath<T, UInt64>) -> Color {
        Color(value[keyPath: keyPath].color)
    }

    public subscript(dynamicMember keyPath: KeyPath<T, BasicFontWeight>) -> Font.Weight {
        value[keyPath: keyPath].fontWeight
    }

    public subscript(dynamicMember keyPath: KeyPath<T, Float>) -> CGFloat {
        CGFloat(value[keyPath: keyPath])
    }

    public subscript(dynamicMember keyPath: KeyPath<T, Int32>) -> CGFloat {
        CGFloat(value[keyPath: keyPath])
    }
    
    public subscript(dynamicMember keyPath: KeyPath<T, Int32>) -> Int {
        Int(value[keyPath: keyPath])
    }
    
    public subscript(dynamicMember keyPath: KeyPath<T, CoreBinary.Gradient>) -> LinearGradient {
        let gradient = value[keyPath: keyPath]
        let startPoint: UnitPoint
        let endPoint: UnitPoint
        switch gradient.direction {
        case .horizontal:
            startPoint = .leading
            endPoint = .trailing
        case .vertical:
            startPoint = .top
            endPoint = .bottom
        default:
            startPoint = .leading
            endPoint = .trailing
        }
        let colors = gradient.colorValues
            .map { Color($0.uint64Value.color) }
        
        return LinearGradient(gradient: Gradient(colors: colors),
                              startPoint: startPoint,
                              endPoint: endPoint)
    }
}

// MARK: - Wrapper

@propertyWrapper
public struct KotlinShared<T: NSObject>: DynamicProperty {

    @Environment(\.currentTheme) var theme
    var defaultValue: State<Kotlin<T>> {

        // Should we have only a inits with theme.
        // Make me safer.
        let constants = T.init()
        constants.perform(Selector("initWithTheme:"), with: theme)

        return .init(wrappedValue: .init(constants))
    }

    public init () { /* - */ }

    public var wrappedValue: Kotlin<T> {
        get { defaultValue.wrappedValue }
    }
}

struct Example: View {

    // Remove Kotlin<..>
    // Better name?
    @KotlinShared private var constants: Kotlin<ButtonConstants>

    var body: some View {
        HStack {
            RoundedRectangle(cornerRadius: 25.0)
                .fill(constants.defaultBackgroundColor)
                .frame(width: 50, height: 50, alignment: .center)
        }
    }
}

struct Preview: PreviewProvider {

    static var previews: some View {
        Example()
            .environment(\.uiColorPrimary, .systemBlue)
    }
}
