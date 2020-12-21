//
//  File.swift
//  
//
//  Created by Mikas Dominas on 2020-12-18.
//

import Foundation
import SwiftUI
import MaasCore
import MaasTheme

enum Theme: CaseIterable {
    case kotlin
    case jelbi
    case yumuv
    case mvgo
}

struct JelbiTheme: ViewModifier {
    
    func body(content: Content) -> some View {
        content
            .environment(\.uiColorPrimary, UIColor(hex: "#6CA130FF")!)
            .environment(\.uiColorPrimaryVariant, UIColor(hex: "#6CA13066")!)
            .environment(\.uiColorSecondary, UIColor(hex: "#F0D722FF")!)
            .environment(\.uiColorSecondaryVariant, UIColor(hex: "#F0D72266")!)
            .environment(\.uiColorBackground, .adaptive(onLight: "#FAF8FAFF", onDark: "#110711FF"))
            .environment(\.uiColorSurface, .adaptive(onLight: "#FFFFFFFF", onDark: "#252424FF"))
            .environment(\.uiColorError, UIColor(hex: "#F22E46FF")!)
            .environment(\.uiColorOnPrimary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnSecondary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnBackground, .adaptive(onLight: "#252424FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnSurface, .adaptive(onLight: "#110711FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnError, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.cornerRadiusButton, 0)
//            .environment(\.grayScale, UIColor(hex: "#6CA130FF")!.grayScale())
    }
}

struct YumuvTheme: ViewModifier {
    
    func body(content: Content) -> some View {
        content
            .environment(\.uiColorPrimary, UIColor(hex: "#F2766BFF")!)
            .environment(\.uiColorPrimaryVariant, UIColor(hex: "#F2766B66")!)
            .environment(\.uiColorSecondary, UIColor(hex: "#36287DFF")!)
            .environment(\.uiColorSecondaryVariant, UIColor(hex: "#36287D66")!)
            .environment(\.uiColorBackground, .adaptive(onLight: "#FFFFFFFF", onDark: "#110711FF"))
            .environment(\.uiColorSurface, .adaptive(onLight: "#FFFFFFFF", onDark: "#252424FF"))
            .environment(\.uiColorError, UIColor(hex: "#DD405BFF")!)
            .environment(\.uiColorOnPrimary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnSecondary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnBackground, .adaptive(onLight: "#252424FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnSurface, .adaptive(onLight: "#110711FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnError, UIColor(hex: "#FFFFFFFF")!)
//            .environment(\.grayScale, UIColor(hex: "#F2766BFF")!.grayScale())
    }
}

struct MvgoTheme: ViewModifier {
    
    func body(content: Content) -> some View {
        content
            .environment(\.uiColorPrimary, UIColor(hex: "#4764A0FF")!)
            .environment(\.uiColorPrimaryVariant, UIColor(hex: "#4764A066")!)
            .environment(\.uiColorSecondary, UIColor(hex: "#4E0F4FFF")!)
            .environment(\.uiColorSecondaryVariant, UIColor(hex: "#4E0F4F66")!)
            .environment(\.uiColorBackground, .adaptive(onLight: "#FFFFFFFF", onDark: "#110711FF"))
            .environment(\.uiColorSurface, .adaptive(onLight: "#FFFFFFFF", onDark: "#252424FF"))
            .environment(\.uiColorError, UIColor(hex: "#F32E47FF")!)
            .environment(\.uiColorOnPrimary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnSecondary, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.uiColorOnBackground, .adaptive(onLight: "#252424FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnSurface, .adaptive(onLight: "#110711FF", onDark: "#FAF8FAFF"))
            .environment(\.uiColorOnError, UIColor(hex: "#FFFFFFFF")!)
            .environment(\.cornerRadiusButton, 6)
//            .environment(\.grayScale, UIColor(hex: "#4764A0FF")!.grayScale())
    }
}


extension UIColor {
    public convenience init?(hex: String) {
        let r, g, b, a: CGFloat
        
        if hex.hasPrefix("#") {
            let start = hex.index(hex.startIndex, offsetBy: 1)
            let hexColor = String(hex[start...])
            
            if hexColor.count == 8 {
                let scanner = Scanner(string: hexColor)
                var hexNumber: UInt64 = 0
                
                if scanner.scanHexInt64(&hexNumber) {
                    r = CGFloat((hexNumber & 0xff000000) >> 24) / 255
                    g = CGFloat((hexNumber & 0x00ff0000) >> 16) / 255
                    b = CGFloat((hexNumber & 0x0000ff00) >> 8) / 255
                    a = CGFloat(hexNumber & 0x000000ff) / 255
                    
                    self.init(red: r, green: g, blue: b, alpha: a)
                    return
                }
            }
        }
        
        return nil
    }
    
    static func adaptive(onLight: UIColor, onDark: UIColor) -> UIColor {
        UIColor.init { (traits) -> UIColor in
            traits.userInterfaceStyle == .dark ? onDark : onLight
        }
    }
    
    static func adaptive(onLight: String, onDark: String) -> UIColor {
        adaptive(onLight: UIColor(hex: onLight)!, onDark: UIColor(hex: onDark)!)
    }
    
    func lerp(from a: CGFloat, to b: CGFloat, alpha: CGFloat) -> CGFloat {
        return (1 - alpha) * a + alpha * b
    }
    
    func components() -> (red: CGFloat, green: CGFloat, blue: CGFloat, alpha: CGFloat) {
        var r: CGFloat = 0
        var g: CGFloat = 0
        var b: CGFloat = 0
        var a: CGFloat = 0
        
        getRed(&r, green: &g, blue: &b, alpha: &a)
        
        return (r, g, b, a)
    }
    
    func combine(with color: UIColor, amount: CGFloat) -> UIColor {
        let fromComponents = components()
        
        let toComponents = color.components()
        
        let redAmount = lerp(from: fromComponents.red,
                             to: toComponents.red,
                             alpha: amount)
        let greenAmount = lerp(from: fromComponents.green,
                               to: toComponents.green,
                               alpha: amount)
        let blueAmount = lerp(from: fromComponents.blue,
                              to: toComponents.blue,
                              alpha: amount)
        
        
        let color = UIColor(red: redAmount,
                            green: greenAmount,
                            blue: blueAmount,
                            alpha: 1)
        
        return color
    }
    
    func adaptedShade(amount: CGFloat) -> UIColor {
        
        UIColor.adaptive(
            onLight: self.combine(with: .white, amount: amount),
            onDark: self.combine(with: .black, amount: amount))
        
    }
    
    func grayScale() -> GrayScalePalette {
        .init(
            gray100: self.adaptedShade(amount: 0.1),
            gray200: self.adaptedShade(amount: 0.2),
            gray300: self.adaptedShade(amount: 0.3),
            gray400: self.adaptedShade(amount: 0.4),
            gray500: self.adaptedShade(amount: 0.5),
            gray600: self.adaptedShade(amount: 0.6),
            gray700: self.adaptedShade(amount: 0.7),
            gray800: self.adaptedShade(amount: 0.8),
            gray900: self.adaptedShade(amount: 0.9)
        )
    }
}
