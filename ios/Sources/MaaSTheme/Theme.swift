import SwiftUI
import UIKit
import MaasCore

public struct Themed<Content: View>: View {

    private let content: (Theme) -> Content
    public init(@ViewBuilder content: @escaping (Theme) -> Content) {
        self.content = content
    }

    @Environment(\.fontHeadingXXL) var fontHeadingXXL
    @Environment(\.fontHeadingXL) var fontHeadingXL
    @Environment(\.fontHeadingL) var fontHeadingL
    @Environment(\.fontHeadingM) var fontHeadingM
    @Environment(\.fontTextL) var fontTextL
    @Environment(\.fontTextM) var fontTextM
    @Environment(\.fontTextS) var fontTextS
    @Environment(\.fontLabel) var fontLabel

    @Environment(\.colorPrimary) var colorPrimary
    @Environment(\.colorPrimaryVariant) var colorPrimaryVariant
    @Environment(\.colorSecondary) var colorSecondary
    @Environment(\.colorSecondaryVariant) var colorSecondaryVariant
    @Environment(\.colorBackground) var colorBackground
    @Environment(\.colorSurface) var colorSurface
    @Environment(\.colorError) var colorError
    @Environment(\.colorOnPrimary) var colorOnPrimary
    @Environment(\.colorOnSecondary) var colorOnSecondary
    @Environment(\.colorOnBackground) var colorOnBackground
    @Environment(\.colorOnSurface) var colorOnSurface
    @Environment(\.colorOnError) var colorOnError

    @Environment(\.cornerRadiusButton) var cornerRadiusButton

    public var body: some View {
        content(Theme(
            colorPalette: ColorPalette_(
                primary: colorPrimary.i64,
                primaryVariant: colorPrimaryVariant.i64,
                secondary: colorSecondary.i64,
                secondaryVariant: colorSecondaryVariant.i64,
                background: colorBackground.i64,
                surface: colorSurface.i64,
                error: colorError.i64,
                onPrimary: colorOnPrimary.i64,
                onSecondary: colorOnSecondary.i64,
                onBackground: colorOnBackground.i64,
                onSurface: colorOnSurface.i64,
                onError: colorOnError.i64),
            typographyScale: TypographyScale_(
                headingXXL: fontHeadingXXL.os,
                headingXL: fontHeadingXL.os,
                headingL: fontHeadingL.os,
                headingM: fontHeadingM.os,
                textL: fontTextL.os,
                textM: fontTextM.os,
                textS: fontTextS.os,
                label: fontLabel.os
            ),
            cornerRadiusScale: CornerRadiusScale_(
                buttonRadius: Float(cornerRadiusButton))
        ))
    }
}
