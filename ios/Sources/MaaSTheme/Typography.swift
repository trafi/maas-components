import MaasCore
import SwiftUI

struct HeadingXXL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingXXL.uiFont }
}
struct HeadingXL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingXL.uiFont }
}
struct HeadingL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingL.uiFont }
}
struct HeadingM: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingM.uiFont }
}
struct TextL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textL.uiFont }
}
struct TextM: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textM.uiFont }
}
struct TextS: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textS.uiFont }
}
struct Label: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().label.uiFont }
}

public extension EnvironmentValues {

    var fontHeadingXXL: UIFont {
        get { self[HeadingXXL.self] }
        set { self[HeadingXXL.self] = newValue }
    }

    var fontHeadingXL: UIFont {
        get { self[HeadingXL.self] }
        set { self[HeadingXL.self] = newValue }
    }

    var fontHeadingL: UIFont {
        get { self[HeadingL.self] }
        set { self[HeadingL.self] = newValue }
    }

    var fontHeadingM: UIFont {
        get { self[HeadingM.self] }
        set { self[HeadingM.self] = newValue }
    }

    var fontTextL: UIFont {
        get { self[TextL.self] }
        set { self[TextL.self] = newValue }
    }

    var fontTextM: UIFont {
        get { self[TextM.self] }
        set { self[TextM.self] = newValue }
    }

    var fontTextS: UIFont {
        get { self[TextS.self] }
        set { self[TextS.self] = newValue }
    }

    var fontLabel: UIFont {
        get { self[Label.self] }
        set { self[Label.self] = newValue }
    }
}

public extension Font {

    static var headingXXL: Font { TypographyScale().headingXXL.font }
    static var headingXL: Font { TypographyScale().headingXL.font }
    static var headingL: Font { TypographyScale().headingL.font }
    static var headingM: Font { TypographyScale().headingM.font }
    static var textL: Font { TypographyScale().textL.font }
    static var textM: Font { TypographyScale().textM.font }
    static var textS: Font { TypographyScale().textS.font }
    static var label: Font { TypographyScale().label.font }
}

public extension UIFont {

    var os: OsTextStyle {
        OsTextStyle(font: self, lineSpacing: 0)
    }
}

public extension BasicTextStyle {
    var uiFont: UIFont {
        UIFont.systemFont(
            ofSize: CGFloat(fontSize),
            weight: fontWeight.weight
        )
    }
    var font: Font {
        Font(uiFont as CTFont)
    }
}

extension BasicFontWeight {
    var weight: UIFont.Weight {
        switch self {
        case .normal: return .regular
        case .semibold: return .semibold
        case .bold: return .bold
        default: return .regular
        }
    }
}

struct TypographyTextView: View {

    var body: some View {
        List {
            Text(text)
                .font(.headingXXL)
            Text(text)
                .font(.headingXL)
            Text(text)
                .font(.headingL)
            Text(text)
                .font(.headingM)
            Text(text)
                .font(.textL)
            Text(text)
                .font(.textM)
            Text(text)
                .font(.textS)
            Text(text)
                .font(.label)
        }
    }

    let text = "Cultivate visionary integrated ecologies. Harness matrix and revolutionize world-class seamless target brand sexy infrastructures."
}

#if DEBUG
struct TypographyTextView_Previews: PreviewProvider {
    static var previews: some View {
        TypographyTextView()
            .environment(\.fontHeadingL, .systemFont(ofSize: 12))
            // .environment(\.theme, .myTheme)
            .previewLayout(.sizeThatFits)
    }
}
#endif
