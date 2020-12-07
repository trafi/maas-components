import SwiftUI
import UIKit
import MaasCore

public extension Int64 {
    var color: Color {
        Color(UIColor(self))
    }
}

public extension Color {

    // Shades
    static var gray100: Color { .init(.gray100) }
    static var gray200: Color { .init(.gray200) }
    static var gray300: Color { .init(.gray300) }
    static var gray400: Color { .init(.gray400) }
    static var gray500: Color { .init(.gray500) }
    static var gray600: Color { .init(.gray600) }
    static var gray700: Color { .init(.gray700) }
    static var gray800: Color { .init(.gray800) }
    static var gray900: Color { .init(.gray900) }

    // Light
    static var primaryLight: Color { .init(.primaryLight) }
    static var primaryVariantLight: Color { .init(.primaryVariantLight) }
    static var secondaryLight: Color { .init(.secondaryLight) }
    static var secondaryVariantLight: Color { .init(.secondaryVariantLight) }
    static var backgroundLight: Color { .init(.backgroundLight) }
    static var surfaceLight: Color { .init(.surfaceLight) }
    static var errorLight: Color { .init(.errorLight) }
    static var onPrimaryLight: Color { .init(.onPrimaryLight) }
    static var onSecondaryLight: Color { .init(.onSecondaryLight) }
    static var onBackgroundLight: Color { .init(.onBackgroundLight) }
    static var onSurfaceLight: Color { .init(.onSurfaceLight) }
    static var onErrorLight: Color { .init(.onErrorLight) }

    // Dark
    static var primaryDark: Color { .init(.primaryDark) }
    static var primaryVariantDark: Color { .init(.primaryVariantDark) }
    static var secondaryDark: Color { .init(.secondaryDark) }
    static var secondaryVariantDark: Color { .init(.secondaryVariantDark) }
    static var backgroundDark: Color { .init(.backgroundDark) }
    static var surfaceDark: Color { .init(.surfaceDark) }
    static var errorDark: Color { .init(.errorDark) }
    static var onPrimaryDark: Color { .init(.onPrimaryDark) }
    static var onSecondaryDark: Color { .init(.onSecondaryDark) }
    static var onBackgroundDark: Color { .init(.onBackgroundDark) }
    static var onSurfaceDark: Color { .init(.onSurfaceDark) }
    static var onErrorDark: Color { .init(.onErrorDark) }
}

public extension UIColor {

    // Shades
    static var gray100: UIColor { .init(ColorPalette().Gray100) }
    static var gray200: UIColor { .init(ColorPalette().Gray200) }
    static var gray300: UIColor { .init(ColorPalette().Gray300) }
    static var gray400: UIColor { .init(ColorPalette().Gray400) }
    static var gray500: UIColor { .init(ColorPalette().Gray500) }
    static var gray600: UIColor { .init(ColorPalette().Gray600) }
    static var gray700: UIColor { .init(ColorPalette().Gray700) }
    static var gray800: UIColor { .init(ColorPalette().Gray800) }
    static var gray900: UIColor { .init(ColorPalette().Gray900) }

    // Light
    static var primaryLight: UIColor { .init(ColorPalette.DefaultLight().Primary) }
    static var primaryVariantLight: UIColor { .init(ColorPalette.DefaultLight().PrimaryVariant) }
    static var secondaryLight: UIColor { .init(ColorPalette.DefaultLight().Secondary) }
    static var secondaryVariantLight: UIColor { .init(ColorPalette.DefaultLight().SecondaryVariant) }
    static var backgroundLight: UIColor { .white }
    static var surfaceLight: UIColor { .white }
    static var errorLight: UIColor { .init(ColorPalette.DefaultLight().Error) }
    static var onPrimaryLight: UIColor { .white }
    static var onSecondaryLight: UIColor { .black }
    static var onBackgroundLight: UIColor { .gray900 }
    static var onSurfaceLight: UIColor { .gray900 }
    static var onErrorLight: UIColor { .white }

    // Dark
    static var primaryDark: UIColor { .init(ColorPalette.DefaultDark().Primary) }
    static var primaryVariantDark: UIColor { .init(ColorPalette.DefaultDark().PrimaryVariant) }
    static var secondaryDark: UIColor { .init(ColorPalette.DefaultDark().Secondary) }
    static var secondaryVariantDark: UIColor { .init(ColorPalette.DefaultDark().SecondaryVariant) }
    static var backgroundDark: UIColor { .black }
    static var surfaceDark: UIColor { .black }
    static var errorDark: UIColor { .init(ColorPalette.DefaultDark().Error) }
    static var onPrimaryDark: UIColor { .white }
    static var onSecondaryDark: UIColor { .black }
    static var onBackgroundDark: UIColor { .white }
    static var onSurfaceDark: UIColor { .white }
    static var onErrorDark: UIColor { .white }

    convenience init(_ int64: Int64) {
        let a = CGFloat((int64 & 0xff000000) >> 24) / 255.0
        let r = CGFloat((int64 & 0x00ff0000) >> 16) / 255.0
        let g = CGFloat((int64 & 0x0000ff00) >> 8) / 255.0
        let b = CGFloat((int64 & 0x000000ff)) / 255.0

        self.init(red: r, green: g, blue: b, alpha: a)
    }
}
