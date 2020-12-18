import SwiftUI
import MaasCore
import MaasTheme

struct DemoContent: View {
    
    @Environment(\.currentTheme) var currentTheme
    var palette: Kotlin<CurrentColorPalette> { Kotlin(currentTheme.colorPalette) }
    
    var body: some View {
        VStack(spacing: 10) {
            RoundedRectangle(cornerRadius: 25.0, style: /*@START_MENU_TOKEN@*/.continuous/*@END_MENU_TOKEN@*/)
                .fill(palette.surface)
            HStack{
                Badge(backgroundColor: palette.error, icon: UIImage(systemName: "exclamationmark.triangle.fill"), text: "Error")
                Spacer()
                InfoButton("Info", action: {})
            }
            Button("Primary", action: {})
            Button("Secondary",background: palette.primaryVariant, action: {})
        }
    }
}

struct BedrockDemo: View {
    
    @Environment(\.currentTheme) var currentTheme
    var palette: Kotlin<CurrentColorPalette> { Kotlin(currentTheme.colorPalette) }
    
    @State var flag = false
    
    var body: some View {
        let content = VStack {
            DemoContent()
            Spacer()
            Button("Shuffle", action: {
                flag.toggle()
            })
        }
        .padding()
        .background(
            palette.background
                .edgesIgnoringSafeArea(.all)
        )
        
        if flag {
            return AnyView(
                content
            )
        } else {
            return AnyView(
                content
                    .jelbiTheme()
            )
        }
    }
}

enum Theme {
    case kotlin
    case jelbi
}

var themes: [Theme] = [.kotlin, .jelbi]

extension View {
    
    func jelbiTheme() -> some View {
        self
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
    }
    
}

struct BedrockDemo_Previews: PreviewProvider {
    
    static var darkTheme = true
//    static var darkTheme = false

    static var previews: some View {
        BedrockDemo()
            .environment(\.colorScheme, darkTheme ? .dark : .light)
            .preferredColorScheme(darkTheme ? .dark : .light)
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
}
