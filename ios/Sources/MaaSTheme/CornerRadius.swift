import Foundation
import MaasCore

public struct CornerRadius {

    public let value: Double

    public static var none: CornerRadius { .init(value: Double(CornerRadiusScale().none)) }
    public static var xxs: CornerRadius { .init(value: Double(CornerRadiusScale().xxs)) }
    public static var xs: CornerRadius { .init(value: Double(CornerRadiusScale().xs)) }
    public static var sm: CornerRadius { .init(value: Double(CornerRadiusScale().sm)) }
    public static var lg: CornerRadius { .init(value: Double(CornerRadiusScale().lg)) }
    public static var xl: CornerRadius { .init(value: Double(CornerRadiusScale().xl)) }
    public static var round: CornerRadius { .init(value: Double(CornerRadiusScale().round)) }
}
