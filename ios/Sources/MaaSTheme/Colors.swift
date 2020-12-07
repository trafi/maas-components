import SwiftUI
import UIKit
import MaasCore

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

    static var primary: Color {
        .init(.primary())
    }

    static func primary(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.primary(appearance))
    }

    static var primaryVariant: Color {
        .init(.primaryVariant())
    }

    static func primaryVariant(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.primaryVariant(appearance))
    }

    static var secondary: Color {
        .init(.secondary())
    }

    static func secondary(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.secondary(appearance))
    }

    static var secondaryVariant: Color {
        .init(.secondaryVariant())
    }

    static func secondaryVariant(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.secondaryVariant(appearance))
    }

    static var background: Color {
        .init(.background())
    }

    static func background(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.background(appearance))
    }

    static var surface: Color {
        .init(.surface())
    }

    static func surface(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.surface(appearance))
    }

    static var error: Color {
        .init(.error())
    }

    static func error(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.error(appearance))
    }

    static var onPrimary: Color {
        .init(.onPrimary())
    }

    static func onPrimary(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.onPrimary(appearance))
    }

    static var onSecondary: Color {
        .init(.onSecondary())
    }

    static func onSecondary(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.onSecondary(appearance))
    }

    static var onBackground: Color {
        .init(.onBackground())
    }

    static func onBackground(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.onBackground(appearance))
    }

    static var onSurface: Color {
        .init(.onSurface())
    }

    static func onSurface(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.onSurface(appearance))
    }

    static var onError: Color {
        .init(.onError())
    }

    static func onError(_ appearance: UIUserInterfaceStyle) -> Color {
        .init(.onError(appearance))
    }
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

    static func primary(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? primaryLight : primaryDark
    }

    static func primaryVariant(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? primaryVariantLight : primaryVariantDark
    }

    static func secondary(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? secondaryLight : secondaryDark
    }

    static func secondaryVariant(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? secondaryVariantLight : secondaryVariantDark
    }

    static func background(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? backgroundLight : backgroundDark
    }

    static func surface(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? surfaceLight : surfaceDark
    }

    static func error(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? errorLight : errorDark
    }

    static func onPrimary(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? onPrimaryLight : onPrimaryDark
    }

    static func onSecondary(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? onSecondaryLight : onSecondaryDark
    }

    static func onBackground(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? onBackgroundLight : onBackgroundDark
    }

    static func onSurface(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? onSurfaceLight : onSurfaceDark
    }

    static func onError(_ appearance: UIUserInterfaceStyle = UITraitCollection.current.userInterfaceStyle) -> UIColor {
        appearance.rawValue == 1 ? onErrorLight : onErrorDark
    }


    // Light
    private static var primaryLight: UIColor { .init(ColorPalette.DefaultLight().Primary) }
    private static var primaryVariantLight: UIColor { .init(ColorPalette.DefaultLight().PrimaryVariant) }
    private static var secondaryLight: UIColor { .init(ColorPalette.DefaultLight().Secondary) }
    private static var secondaryVariantLight: UIColor { .init(ColorPalette.DefaultLight().SecondaryVariant) }
    private static var backgroundLight: UIColor { .white }
    private static var surfaceLight: UIColor { .white }
    private static var errorLight: UIColor { .init(ColorPalette.DefaultLight().Error) }
    private static var onPrimaryLight: UIColor { .white }
    private static var onSecondaryLight: UIColor { .black }
    private static var onBackgroundLight: UIColor { .gray900 }
    private static var onSurfaceLight: UIColor { .gray900 }
    private static var onErrorLight: UIColor { .white }

    // Dark
    private static var primaryDark: UIColor { .init(ColorPalette.DefaultDark().Primary) }
    private static var primaryVariantDark: UIColor { .init(ColorPalette.DefaultDark().PrimaryVariant) }
    private static var secondaryDark: UIColor { .init(ColorPalette.DefaultDark().Secondary) }
    private static var secondaryVariantDark: UIColor { .init(ColorPalette.DefaultDark().SecondaryVariant) }
    private static var backgroundDark: UIColor { .black }
    private static var surfaceDark: UIColor { .black }
    private static var errorDark: UIColor { .init(ColorPalette.DefaultDark().Error) }
    private static var onPrimaryDark: UIColor { .white }
    private static var onSecondaryDark: UIColor { .black }
    private static var onBackgroundDark: UIColor { .white }
    private static var onSurfaceDark: UIColor { .white }
    private static var onErrorDark: UIColor { .white }

    convenience init(_ int64: Int64) {
        let a = CGFloat((int64 & 0xff000000) >> 24) / 255.0
        let r = CGFloat((int64 & 0x00ff0000) >> 16) / 255.0
        let g = CGFloat((int64 & 0x0000ff00) >> 8) / 255.0
        let b = CGFloat((int64 & 0x000000ff)) / 255.0

        self.init(red: r, green: g, blue: b, alpha: a)
    }
}
