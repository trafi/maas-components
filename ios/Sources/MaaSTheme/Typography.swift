import MaasCore
import SwiftUI

struct HeadingXXL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingXXL }
}
struct HeadingXL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingXL }
}
struct HeadingL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingL }
}
struct HeadingM: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().headingM }
}
struct TextL: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textL }
}
struct TextM: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textM }
}
struct TextS: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().textS }
}
struct Label: EnvironmentKey {
    static var defaultValue: UIFont { TypographyScale().label }
}

public extension EnvironmentValues {

    var fontHeadingXXL: Font { Font(uiFontHeadingXXL) }
    var uiFontHeadingXXL: UIFont {
        get { self[HeadingXXL.self].scaled(sizeCategory) }
        set { self[HeadingXXL.self] = newValue }
    }

    var fontHeadingXL: Font { Font(uiFontHeadingXL) }
    var uiFontHeadingXL: UIFont {
        get { self[HeadingXL.self].scaled(sizeCategory) }
        set { self[HeadingXL.self] = newValue }
    }

    var fontHeadingL: Font { Font(uiFontHeadingL) }
    var uiFontHeadingL: UIFont {
        get { self[HeadingL.self].scaled(sizeCategory) }
        set { self[HeadingL.self] = newValue }
    }

    var fontHeadingM: Font { Font(uiFontHeadingM) }
    var uiFontHeadingM: UIFont {
        get { self[HeadingM.self].scaled(sizeCategory) }
        set { self[HeadingM.self] = newValue }
    }

    var fontTextL: Font { Font(uiFontTextL) }
    var uiFontTextL: UIFont {
        get { self[TextL.self].scaled(sizeCategory) }
        set { self[TextL.self] = newValue }
    }

    var fontTextM: Font { Font(uiFontTextM) }
    var uiFontTextM: UIFont {
        get { self[TextM.self].scaled(sizeCategory) }
        set { self[TextM.self] = newValue }
    }

    var fontTextS: Font { Font(uiFontTextS) }
    var uiFontTextS: UIFont {
        get { self[TextS.self].scaled(sizeCategory) }
        set { self[TextS.self] = newValue }
    }

    var fontLabel: Font { Font(uiFontLabel) }
    var uiFontLabel: UIFont {
        get { self[Label.self].scaled(sizeCategory) }
        set { self[Label.self] = newValue }
    }
}

extension UIFont {

    func scaled(_ sizeCategory: ContentSizeCategory) -> UIFont {

        let textStyle: UIFont.TextStyle

        switch pointSize {
        case 28...: textStyle = .title1
        case 22...: textStyle = .title2
        case 20...: textStyle = .title3
        case 17...: textStyle = .body
        case 16...: textStyle = .callout
        case 15...: textStyle = .subheadline
        case 13...: textStyle = .footnote
        case 12...: textStyle = .caption1
        default:    textStyle = .caption2
        }

        return self.withSize(pointSize * textStyle.scaleFactor(for: sizeCategory))
    }
}

private extension UIFont.TextStyle {

    func scaleFactor(for sizeCategory: ContentSizeCategory) -> CGFloat {

        let medium = UIFont.preferredFont(
            forTextStyle: self,
            compatibleWith: UITraitCollection(preferredContentSizeCategory: .medium)
        )

        let scaled = UIFont.preferredFont(
            forTextStyle: self,
            compatibleWith: UITraitCollection(preferredContentSizeCategory: sizeCategory.ui)
        )

        return scaled.pointSize / medium.pointSize
    }
}

private extension ContentSizeCategory {
    var ui: UIContentSizeCategory {
        switch self {
        case .extraSmall: return .extraSmall
        case .small: return .small
        case .medium: return .medium
        case .large: return .large
        case .extraLarge: return .extraLarge
        case .extraExtraLarge: return .extraExtraLarge
        case .extraExtraExtraLarge: return .extraExtraExtraLarge
        case .accessibilityMedium: return .accessibilityMedium
        case .accessibilityLarge: return .accessibilityLarge
        case .accessibilityExtraLarge: return .accessibilityExtraLarge
        case .accessibilityExtraExtraLarge: return .accessibilityExtraExtraLarge
        case .accessibilityExtraExtraExtraLarge: return .accessibilityExtraExtraExtraLarge
        }
    }
}

