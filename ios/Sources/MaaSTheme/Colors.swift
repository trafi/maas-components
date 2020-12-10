import SwiftUI
import UIKit
import MaasCore

private enum ColorKeys {

    static let L = ColorPalette.DefaultLight()
    static let D = ColorPalette.DefaultDark()

    static func dynamic(light: Int64, dark: Int64) -> UIColor {
        UIColor { traits in
            traits.userInterfaceStyle == .dark ?
                dark.uiColor :
                light.uiColor
        }
    }

    struct Primary: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.Primary, dark: D.Primary) }
    }
    struct OnPrimary: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.OnPrimary, dark: D.OnPrimary) }
    }
    struct PrimaryVariant: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.PrimaryVariant, dark: D.PrimaryVariant) }
    }
    struct Secondary: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.Secondary, dark: D.Secondary) }
    }
    struct OnSecondary: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.OnSecondary, dark: D.OnSecondary) }
    }
    struct SecondaryVariant: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.SecondaryVariant, dark: D.SecondaryVariant) }
    }
    struct Background: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.Background, dark: D.Background) }
    }
    struct OnBackground: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.OnBackground, dark: D.OnBackground) }
    }
    struct Surface: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.Surface, dark: D.Surface) }
    }
    struct OnSurface: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.OnSurface, dark: D.OnSurface) }
    }
    struct Error: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.Error, dark: D.Error) }
    }
    struct OnError: EnvironmentKey {
        static var defaultValue: UIColor { dynamic(light: L.OnError, dark: D.OnError) }
    }
}

public extension EnvironmentValues {

    var colorPrimary: Color { Color(uiColorPrimary) }
    var uiColorPrimary: UIColor {
        get { self[ColorKeys.Primary.self] }
        set { self[ColorKeys.Primary.self] = newValue }
    }
    var colorOnPrimary: Color { Color(uiColorOnPrimary) }
    var uiColorOnPrimary: UIColor {
        get { self[ColorKeys.OnPrimary.self] }
        set { self[ColorKeys.OnPrimary.self] = newValue }
    }
    var colorPrimaryVariant: Color { Color(uiColorPrimaryVariant) }
    var uiColorPrimaryVariant: UIColor {
        get { self[ColorKeys.PrimaryVariant.self] }
        set { self[ColorKeys.PrimaryVariant.self] = newValue }
    }
    var colorSecondary: Color { Color(uiColorSecondary) }
    var uiColorSecondary: UIColor {
        get { self[ColorKeys.Secondary.self] }
        set { self[ColorKeys.Secondary.self] = newValue }
    }
    var colorOnSecondary: Color { Color(uiColorOnSecondary) }
    var uiColorOnSecondary: UIColor {
        get { self[ColorKeys.OnSecondary.self] }
        set { self[ColorKeys.OnSecondary.self] = newValue }
    }
    var colorSecondaryVariant: Color { Color(uiColorSecondaryVariant) }
    var uiColorSecondaryVariant: UIColor {
        get { self[ColorKeys.SecondaryVariant.self] }
        set { self[ColorKeys.SecondaryVariant.self] = newValue }
    }
    var colorBackground: Color { Color(uiColorBackground) }
    var uiColorBackground: UIColor {
        get { self[ColorKeys.Background.self] }
        set { self[ColorKeys.Background.self] = newValue }
    }
    var colorOnBackground: Color { Color(uiColorOnBackground) }
    var uiColorOnBackground: UIColor {
        get { self[ColorKeys.OnBackground.self] }
        set { self[ColorKeys.OnBackground.self] = newValue }
    }
    var colorSurface: Color { Color(uiColorSurface) }
    var uiColorSurface: UIColor {
        get { self[ColorKeys.Surface.self] }
        set { self[ColorKeys.Surface.self] = newValue }
    }
    var colorOnSurface: Color { Color(uiColorOnSurface) }
    var uiColorOnSurface: UIColor {
        get { self[ColorKeys.OnSurface.self] }
        set { self[ColorKeys.OnSurface.self] = newValue }
    }
    var colorError: Color { Color(uiColorError) }
    var uiColorError: UIColor {
        get { self[ColorKeys.Error.self] }
        set { self[ColorKeys.Error.self] = newValue }
    }
    var colorOnError: Color { Color(uiColorOnError) }
    var uiColorOnError: UIColor {
        get { self[ColorKeys.OnError.self] }
        set { self[ColorKeys.OnError.self] = newValue }
    }
}

public extension Int64 {
    var color: Color {
        return Color(uiColor)
    }

    var uiColor: UIColor {
        let a = CGFloat((self & 0xff000000) >> 24) / 255
        let r = CGFloat((self & 0x00ff0000) >> 16) / 255
        let g = CGFloat((self & 0x0000ff00) >> 8) / 255
        let b = CGFloat((self & 0x000000ff)) / 255

        return UIColor(red: r, green: g, blue: b, alpha: a)
    }
}

extension UIColor {
    func i64(_ colorScheme: ColorScheme) -> Int64 {

        var r: CGFloat = 0
        var g: CGFloat = 0
        var b: CGFloat = 0
        var a: CGFloat = 0

        let color = resolvedColor(with: UITraitCollection(userInterfaceStyle: colorScheme.interfaceStyle))
        color.getRed(&r, green: &g, blue: &b, alpha: &a)

        return (Int64)(a*255)<<24 | (Int64)(r*255)<<16 | (Int64)(g*255)<<8 | (Int64)(b*255)<<0
    }
}


private extension ColorScheme {
    var interfaceStyle: UIUserInterfaceStyle {
        switch self {
        case .light:
            return .light
        case .dark:
            return .dark
        @unknown default:
            return .unspecified
        }
    }
}
