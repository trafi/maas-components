struct HeadingXXL: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().headingXXL }
}
struct HeadingXL: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().headingXL }
}
struct HeadingL: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().headingL }
}
struct HeadingM: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().headingM }
}
struct TextL: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().textL }
}
struct TextM: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().textM }
}
struct TextS: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().textS }
}
struct Label: EnvironmentKey {
    static var defaultValue: TextStyle { TypographyScale().label }
}
struct TextFont: EnvironmentKey {
    let get: (CGFloat) -> Font
    static var defaultValue: TextFont { TextFont { Font.system(size: $0) } }
}


public extension EnvironmentValues {

    var textStyleHeadingXXL: TextStyle {
        get { self[HeadingXXL.self].scaled(sizeCategory) }
        set { self[HeadingXXL.self] = newValue }
    }

    var textStyleHeadingXL: TextStyle {
        get { self[HeadingXL.self].scaled(sizeCategory) }
        set { self[HeadingXL.self] = newValue }
    }

    var textStyleHeadingL: TextStyle {
        get { self[HeadingL.self].scaled(sizeCategory) }
        set { self[HeadingL.self] = newValue }
    }

    var textStyleHeadingM: TextStyle {
        get { self[HeadingM.self].scaled(sizeCategory) }
        set { self[HeadingM.self] = newValue }
    }

    var textStyleTextL: TextStyle {
        get { self[TextL.self].scaled(sizeCategory) }
        set { self[TextL.self] = newValue }
    }

    var textStyleTextM: TextStyle {
        get { self[TextM.self].scaled(sizeCategory) }
        set { self[TextM.self] = newValue }
    }

    var textStyleTextS: TextStyle {
        get { self[TextS.self].scaled(sizeCategory) }
        set { self[TextS.self] = newValue }
    }

    var textStyleLabel: TextStyle {
        get { self[Label.self].scaled(sizeCategory) }
        set { self[Label.self] = newValue }
    }

    var textFont: (CGFloat) -> Font {
        get { self[TextFont.self].get }
        set { self[TextFont.self] = TextFont(get: newValue) }
    }
}

// MARK: - TextStyle

public extension View {

    func textStyle(_ textStyle: TextStyle) -> some View {
        ModifiedContent(content: self, modifier: TextStyleModifier(textStyle: textStyle))
    }
}

private struct TextStyleModifier: ViewModifier {

    let textStyle: TextStyle
    @Environment(\.textFont) var textFont

    func body(content: Content) -> some View {

        let textStyle = Kotlin(self.textStyle)

        let styled = content
            .lineSpacing(textStyle.lineSpacing)
            .font(
                textFont(textStyle.fontSize)
                    .weight(textStyle.fontWeight)
                    .style(textStyle.fontStyle)
            )


        if let color = textStyle.color {
            return AnyView(styled.foregroundColor(color))
        } else {
            return AnyView(styled)
        }
    }
}

private extension Font {

    func style(_ style: BasicFontStyle) -> Font {
        switch style {
        case .italic: return italic()
        case .normal: return self
        default: fatalError("Invalid 'BasicFontStyle' - \(self)")
        }
    }
}

extension BasicFontWeight {

    var fontWeight: Font.Weight {
        switch self {
        case .normal: return .regular
        case .semibold: return .semibold
        case .bold: return .bold
        default: fatalError("Invalid 'BasicFontWeight' - \(self)")
        }
    }
}

// MARK: - Scaling

extension TextStyle {

    func scaled(_ sizeCategory: ContentSizeCategory) -> TextStyle {

        let textStyle: UIFont.TextStyle

        switch fontSize {
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

        return self.withSize(CGFloat(fontSize) * textStyle.scaleFactor(for: sizeCategory))
    }

    func withSize(_ newFontSize: CGFloat) -> TextStyle {
        TextStyle(
            fontWeight: fontWeight,
            fontStyle: fontStyle,
            fontSize: Int32(newFontSize),
            lineSpacing: lineSpacing,
            color: color
        )
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

