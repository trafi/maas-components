import SwiftUI
import UIKit
import MaasCore

private enum ColorKeys {
    struct Primary: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.Primary, dark: \.Primary) }
    }
    struct OnPrimary: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.OnPrimary, dark: \.OnPrimary) }
    }
    struct PrimaryVariant: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.PrimaryVariant, dark: \.PrimaryVariant) }
    }
    struct Secondary: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.Secondary, dark: \.Secondary) }
    }
    struct OnSecondary: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.OnSecondary, dark: \.OnSecondary) }
    }
    struct SecondaryVariant: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.SecondaryVariant, dark: \.SecondaryVariant) }
    }
    struct Background: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.Background, dark: \.Background) }
    }
    struct OnBackground: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.OnBackground, dark: \.OnBackground) }
    }
    struct Surface: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.Surface, dark: \.Surface) }
    }
    struct OnSurface: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.OnSurface, dark: \.OnSurface) }
    }
    struct Error: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.Error, dark: \.Error) }
    }
    struct OnError: EnvironmentKey {
        static var defaultValue: UIColor { .adaptive(light: \.OnError, dark: \.OnError) }
    }
    
    struct GrayScale: EnvironmentKey {
        static var defaultValue: MaasCore.GrayScale {
            UIScreen.main.traitCollection.userInterfaceStyle == .dark ?
                ColorPalette.DefaultDark().GrayScale :
                ColorPalette.DefaultLight().GrayScale
        }
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
    
    var grayScale: MaasCore.GrayScale {
        get { self[ColorKeys.GrayScale.self] }
        set { self[ColorKeys.GrayScale.self] = newValue }
    }
}

// MARK: - From Kotlin

private extension UIColor {
    static func adaptive(light: KeyPath<ColorPalette.DefaultLight, UInt64>,
                         dark: KeyPath<ColorPalette.DefaultDark, UInt64>) -> UIColor {
        UIColor { traits in
            traits.userInterfaceStyle == .dark ?
                ColorPalette.DefaultDark()[keyPath: dark].color :
                ColorPalette.DefaultLight()[keyPath: light].color
        }
    }
}

extension UInt64 {
    var color: UIColor {

        let value = self.fromKotlin
    
        let a = CGFloat((value & 0xff000000) >> 24) / 255
        let r = CGFloat((value & 0x00ff0000) >> 16) / 255
        let g = CGFloat((value & 0x0000ff00) >> 8) / 255
        let b = CGFloat((value & 0x000000ff)) / 255
        
        return UIColor(red: r, green: g, blue: b, alpha: a)
    }

    var fromKotlin: UInt64 { self >> 32 }
    var toKotlin: UInt64 { self << 32 }
}

// MARK: - To Kotlin

extension UIColor {
    func ui64(_ colorScheme: ColorScheme) -> UInt64 {

        var r: CGFloat = 0
        var g: CGFloat = 0
        var b: CGFloat = 0
        var a: CGFloat = 0

        let color = resolvedColor(with: UITraitCollection(userInterfaceStyle: colorScheme.interfaceStyle))
        color.getRed(&r, green: &g, blue: &b, alpha: &a)

        let colorValue = (UInt64)(a*255)<<24 | (UInt64)(r*255)<<16 | (UInt64)(g*255)<<8 | (UInt64)(b*255)<<0

        return colorValue.toKotlin
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
