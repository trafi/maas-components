import SwiftUI
import UIKit
import MaasCore

private struct CornerRadiusButton: EnvironmentKey {
    static var defaultValue: CGFloat { CGFloat(CornerRadiusScale.Default().ButtonRadius) }
}
public extension EnvironmentValues {
    var cornerRadiusButton: CGFloat {
        get { self[CornerRadiusButton.self] }
        set { self[CornerRadiusButton.self] = newValue }
    }
}


public struct CornerRadius {

    public let value: CGFloat

    public static var none: CornerRadius { .init(value: CGFloat(CornerRadiusScale().none)) }
    public static var xxs: CornerRadius { .init(value: CGFloat(CornerRadiusScale().xxs)) }
    public static var xs: CornerRadius { .init(value: CGFloat(CornerRadiusScale().xs)) }
    public static var sm: CornerRadius { .init(value: CGFloat(CornerRadiusScale().sm)) }
    public static var lg: CornerRadius { .init(value: CGFloat(CornerRadiusScale().lg)) }
    public static var xl: CornerRadius { .init(value: CGFloat(CornerRadiusScale().xl)) }
    public static var round: CornerRadius { .init(value: CGFloat(CornerRadiusScale().round)) }
}
