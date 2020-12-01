import SwiftUI
import UIKit
import MaasCore

extension Color {

    // Shades
    static var grey100: Color { .init(.grey100) }
    static var grey200: Color { .init(.grey200) }
    static var grey300: Color { .init(.grey300) }
    static var grey400: Color { .init(.grey400) }
    static var grey500: Color { .init(.grey500) }
    static var grey600: Color { .init(.grey600) }
    static var grey700: Color { .init(.grey700) }
    static var grey800: Color { .init(.grey800) }
    static var grey900: Color { .init(.grey900) }

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

extension UIColor {

    // Shades
    static var grey100: UIColor { .init(ColorPalette().Grey100) }
    static var grey200: UIColor { .init(ColorPalette().Grey200) }
    static var grey300: UIColor { .init(ColorPalette().Grey300) }
    static var grey400: UIColor { .init(ColorPalette().Grey400) }
    static var grey500: UIColor { .init(ColorPalette().Grey500) }
    static var grey600: UIColor { .init(ColorPalette().Grey600) }
    static var grey700: UIColor { .init(ColorPalette().Grey700) }
    static var grey800: UIColor { .init(ColorPalette().Grey800) }
    static var grey900: UIColor { .init(ColorPalette().Grey900) }

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
    static var onBackgroundLight: UIColor { .grey900 }
    static var onSurfaceLight: UIColor { .grey900 }
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
