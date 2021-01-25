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
