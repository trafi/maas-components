@propertyWrapper
public struct Themeable<T>: DynamicProperty {
    
    public init(_ builder: @escaping (CurrentTheme) -> T) {
        self.builder = builder
    }
    
    let builder: (CurrentTheme) -> T
    
    @Environment(\.currentTheme) var theme
    var defaultValue: State<T> { .init(wrappedValue: builder(theme)) }
    
    public var wrappedValue: Kotlin<T> {
        get { .init(defaultValue.wrappedValue) }
    }
}
