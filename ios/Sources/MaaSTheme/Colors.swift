import SwiftUI
import UIKit
import MaasCore


private enum ColorKeys {

    static let L = ColorPalette.DefaultLight()
    static let D = ColorPalette.DefaultDark()

    static func light(_ light: Int64, or dark: Int64) -> Int64 {
        switch UITraitCollection.current.userInterfaceStyle {
        case .dark:
            return dark
        case .light, .unspecified:
            return light
        @unknown default:
            return light
        }
    }

    struct Primary: EnvironmentKey {
        static var defaultValue: Color { light(L.Primary, or: D.Primary).color }
    }
    struct OnPrimary: EnvironmentKey {
        static var defaultValue: Color { light(L.OnPrimary, or: D.OnPrimary).color }
    }
    struct PrimaryVariant: EnvironmentKey {
        static var defaultValue: Color { light(L.PrimaryVariant, or: D.PrimaryVariant).color }
    }
    struct Secondary: EnvironmentKey {
        static var defaultValue: Color { light(L.Secondary, or: D.Secondary).color }
    }
    struct OnSecondary: EnvironmentKey {
        static var defaultValue: Color { light(L.OnSecondary, or: D.OnSecondary).color }
    }
    struct SecondaryVariant: EnvironmentKey {
        static var defaultValue: Color { light(L.SecondaryVariant, or: D.SecondaryVariant).color }
    }
    struct Background: EnvironmentKey {
        static var defaultValue: Color { light(L.Background, or: D.Background).color }
    }
    struct OnBackground: EnvironmentKey {
        static var defaultValue: Color { light(L.OnBackground, or: D.OnBackground).color }
    }
    struct Surface: EnvironmentKey {
        static var defaultValue: Color { light(L.Surface, or: D.Surface).color }
    }
    struct OnSurface: EnvironmentKey {
        static var defaultValue: Color { light(L.OnSurface, or: D.OnSurface).color }
    }
    struct Error: EnvironmentKey {
        static var defaultValue: Color { light(L.Error, or: D.Error).color }
    }
    struct OnError: EnvironmentKey {
        static var defaultValue: Color { light(L.OnError, or: D.OnError).color }
    }
}

public extension EnvironmentValues {

    var colorPrimary: Color {
        get { self[ColorKeys.Primary.self] }
        set { self[ColorKeys.Primary.self] = newValue }
    }
    var colorOnPrimary: Color {
        get { self[ColorKeys.OnPrimary.self] }
        set { self[ColorKeys.OnPrimary.self] = newValue }
    }
    var colorPrimaryVariant: Color {
        get { self[ColorKeys.PrimaryVariant.self] }
        set { self[ColorKeys.PrimaryVariant.self] = newValue }
    }
    var colorSecondary: Color {
        get { self[ColorKeys.Secondary.self] }
        set { self[ColorKeys.Secondary.self] = newValue }
    }
    var colorOnSecondary: Color {
        get { self[ColorKeys.OnSecondary.self] }
        set { self[ColorKeys.OnSecondary.self] = newValue }
    }
    var colorSecondaryVariant: Color {
        get { self[ColorKeys.SecondaryVariant.self] }
        set { self[ColorKeys.SecondaryVariant.self] = newValue }
    }
    var colorBackground: Color {
        get { self[ColorKeys.Background.self] }
        set { self[ColorKeys.Background.self] = newValue }
    }
    var colorOnBackground: Color {
        get { self[ColorKeys.OnBackground.self] }
        set { self[ColorKeys.OnBackground.self] = newValue }
    }
    var colorSurface: Color {
        get { self[ColorKeys.Surface.self] }
        set { self[ColorKeys.Surface.self] = newValue }
    }
    var colorOnSurface: Color {
        get { self[ColorKeys.OnSurface.self] }
        set { self[ColorKeys.OnSurface.self] = newValue }
    }
    var colorError: Color {
        get { self[ColorKeys.Error.self] }
        set { self[ColorKeys.Error.self] = newValue }
    }
    var colorOnError: Color {
        get { self[ColorKeys.OnError.self] }
        set { self[ColorKeys.OnError.self] = newValue }
    }
}

public extension Int64 {
    var color: Color {
        let a = Double((self & 0xff000000) >> 24) / 255.0
        let r = Double((self & 0x00ff0000) >> 16) / 255.0
        let g = Double((self & 0x0000ff00) >> 8) / 255.0
        let b = Double((self & 0x000000ff)) / 255.0

        return Color(red: r, green: g, blue: b, opacity: a)
    }
}

public extension Color {
    var i64: Int64 {
        // TODO: Implement
        return 0
    }
}
