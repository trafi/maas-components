private struct SpacingGlobalMargin: EnvironmentKey {
    static var defaultValue: CGFloat { CGFloat(SpacingScale.Default().GlobalMargin) }
}
public extension EnvironmentValues {
    var spacingGlobalMargin: CGFloat {
        get { self[SpacingGlobalMargin.self] }
        set { self[SpacingGlobalMargin.self] = newValue }
    }
}

public struct Spacing {

    public let value: CGFloat

    public static var xxxs: Spacing { .init(value: CGFloat(SpacingScale().xxxs)) }
    public static var xxs: Spacing { .init(value: CGFloat(SpacingScale().xxs)) }
    public static var xs: Spacing { .init(value: CGFloat(SpacingScale().xs)) }
    public static var sm: Spacing { .init(value: CGFloat(SpacingScale().sm)) }
    public static var md: Spacing { .init(value: CGFloat(SpacingScale().md)) }
    public static var lg: Spacing { .init(value: CGFloat(SpacingScale().lg)) }
    public static var xl: Spacing { .init(value: CGFloat(SpacingScale().xl)) }
    public static var xxl: Spacing { .init(value: CGFloat(SpacingScale().xxl)) }
    public static var xxxl: Spacing { .init(value: CGFloat(SpacingScale().xxxl)) }

    public static var `default`: Spacing {
        .init(value: CGFloat(SpacingScale.Default().GlobalMargin))
    }

    public static var listItemHorizontal: Spacing {
        .init(value: CGFloat(SpacingScale().sm))
    }

    public static var listItemVertical: Spacing {
        .init(value: CGFloat(SpacingScale.Default().GlobalMargin))
    }

    public static var listItemGutter: Spacing {
        .init(value: CGFloat(SpacingScale.Default().GlobalMargin))
    }
}
