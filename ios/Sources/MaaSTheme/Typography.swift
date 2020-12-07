import MaasCore
import SwiftUI

public struct HeadingXXL: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().headingXXL.font
    }
}

public struct HeadingXL: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().headingXL.font
    }
}

public struct HeadingL: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().headingL.font
    }
}

public struct HeadingM: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().headingM.font
    }
}

public struct TextL: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().textL.font
    }
}

public struct TextM: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().textM.font
    }
}

public struct TextS: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().textS.font
    }
}

public struct Label: EnvironmentKey {
    public static var defaultValue: Font {
        TypographyScale().label.font
    }
}

public extension EnvironmentValues {

    var fontHeadingXXL: Font {
        get { self[HeadingXXL.self] }
        set { self[HeadingXXL.self] = newValue }
    }

    var fontHeadingXL: Font {
        get { self[HeadingXL.self] }
        set { self[HeadingXL.self] = newValue }
    }

    var fontHeadingL: Font {
        get { self[HeadingL.self] }
        set { self[HeadingL.self] = newValue }
    }

    var fontHeadingM: Font {
        get { self[HeadingM.self] }
        set { self[HeadingM.self] = newValue }
    }

    var fontTextL: Font {
        get { self[TextL.self] }
        set { self[TextL.self] = newValue }
    }

    var fontTextM: Font {
        get { self[TextM.self] }
        set { self[TextM.self] = newValue }
    }

    var fontTextS: Font {
        get { self[TextS.self] }
        set { self[TextS.self] = newValue }
    }

    var fontLabel: Font {
        get { self[Label.self] }
        set { self[Label.self] = newValue }
    }
}


public extension Font {

    static var headingXXL: Font {
        TypographyScale().headingXXL.font
    }

    static var headingXL: Font {
        TypographyScale().headingXL.font
    }

    static var headingL: Font {
        TypographyScale().headingL.font
    }

    static var headingM: Font {
        TypographyScale().headingM.font
    }

    static var textL: Font {
        TypographyScale().textL.font
    }

    static var textM: Font {
        TypographyScale().textM.font
    }

    static var textS: Font {
        TypographyScale().textS.font
    }

    static var label: Font {
        TypographyScale().label.font
    }
}

public extension BasicTextStyle {
    var font: Font {
        Font.system(
            size: CGFloat(fontSize),
            weight: fontWeight.weight,
            design: .default)
    }
}

extension BasicFontWeight {
    var weight: Font.Weight {
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
            .environment(\.fontHeadingL, .headingL)
            // .environment(\.theme, .myTheme)
            .previewLayout(.sizeThatFits)
    }
}
#endif
