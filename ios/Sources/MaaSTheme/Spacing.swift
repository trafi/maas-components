import Foundation
import MaasCore

public struct Spacing {

    public let value: Double

    public static var xxxs: Spacing { .init(value: Double(SpacingScale().xxxs)) }
    public static var xxs: Spacing { .init(value: Double(SpacingScale().xxs)) }
    public static var xs: Spacing { .init(value: Double(SpacingScale().xs)) }
    public static var sm: Spacing { .init(value: Double(SpacingScale().sm)) }
    public static var md: Spacing { .init(value: Double(SpacingScale().md)) }
    public static var lg: Spacing { .init(value: Double(SpacingScale().lg)) }
    public static var xl: Spacing { .init(value: Double(SpacingScale().xl)) }
    public static var xxl: Spacing { .init(value: Double(SpacingScale().xxl)) }
    public static var xxxl: Spacing { .init(value: Double(SpacingScale().xxxl)) }

    public static var `default`: Spacing {
        .init(value: Double(SpacingScale.Default().GlobalMargin))
    }
}
