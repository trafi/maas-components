import SwiftUI
import MaasCore
import MaasTheme

struct DemoContent: View {
    
    @Environment(\.currentTheme) var currentTheme
    var palette: Kotlin<CurrentColorPalette> { Kotlin(currentTheme.colorPalette) }
    
    @State var selection: Int? = nil
    
    var body: some View {
        VStack(spacing: 10) {            
            Badge(backgroundColor: palette.error, icon: UIImage(systemName: "exclamationmark.triangle.fill"), text: "Error")
            InfoButton("Info", action: {})
            Button("Primary", action: {})
            Button("Secondary",background: palette.primaryVariant, action: {})
        }
    }
}

@available(iOS 14.0, *)
struct BedrockDemo: View {
    
    @AppStorage("isDarkMode") var isDarkMode: Bool = true

    @Environment(\.colorScheme) var colorScheme
    @Environment(\.currentTheme) var currentTheme
    var palette: Kotlin<CurrentColorPalette> { Kotlin(currentTheme.colorPalette) }
    
    @State var flag = false
    @State var selectedTheme: Theme = .kotlin
    
    @State var selection: Int? = nil
    @State var show = false

    var body: some View {
        let content = NavigationView {
            VStack(spacing: 16) {
                DemoContent()
                Button("Show", action: {
                    selection = 1
                    show = true
                })
                Spacer()
                Button("BVG", background: .gray, action: { selectedTheme = .jelbi })
                Button("SBB", background: .gray, action: { selectedTheme = .yumuv })
                Button("MVG", background: .gray, action: { selectedTheme = .mvgo })
                Button("Classic", background: .gray, action: { selectedTheme = .kotlin })
                Toggle(isOn: $isDarkMode) {
                    Button(isDarkMode ? "Dark" : "Light",
                           background: .gray,
                           action: {isDarkMode.toggle()})
                }.toggleStyle(TStyle())
            }
            .padding()
        }
        .sheet(isPresented: $show,
               content: {
            NearbyTransitView()
                .preferredColorScheme(colorScheme)
        })
        .navigationBarHidden(true)
        .background(
            palette.background
                .edgesIgnoringSafeArea(.all)
        )
        
        switch selectedTheme {
        case .kotlin: return AnyView(content)
        case .jelbi: return AnyView(content.modifier(JelbiTheme()))
        case .yumuv: return AnyView(content.modifier(YumuvTheme()))
        case .mvgo: return AnyView(content.modifier(MvgoTheme()))
        }
    }
}

struct TStyle: ToggleStyle {
    
    func makeBody(configuration: Configuration) -> some View {
        configuration.label
    }
}

@available(iOS 14.0, *)
public struct DarkModeViewModifier: ViewModifier {
    @AppStorage("isDarkMode") var isDarkMode: Bool = true
    public func body(content: Content) -> some View {
        content
            .environment(\.colorScheme, isDarkMode ? .dark : .light)
            .preferredColorScheme(isDarkMode ? .dark : .light)
    }
}

@available(iOS 14.0, *)
struct BedrockDemo_Previews: PreviewProvider {
    
    static var darkTheme = true
//    static var darkTheme = false

    static var previews: some View {
        BedrockDemo()
            .modifier(DarkModeViewModifier())
//            .environment(\.colorScheme, darkTheme ? .dark : .light)
//            .preferredColorScheme(darkTheme ? .dark : .light)

    }
}
