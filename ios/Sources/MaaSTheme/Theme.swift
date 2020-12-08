import SwiftUI
import UIKit
import MaasCore

public extension EnvironmentValues {

    var maasTheme: Theme {
        get {
            Theme(
                colorPalette: ColorPalette_(
                    primary: uiColorPrimary.i64(colorScheme),
                    primaryVariant: uiColorPrimaryVariant.i64(colorScheme),
                    secondary: uiColorSecondary.i64(colorScheme),
                    secondaryVariant: uiColorSecondaryVariant.i64(colorScheme),
                    background: uiColorBackground.i64(colorScheme),
                    surface: uiColorSurface.i64(colorScheme),
                    error: uiColorError.i64(colorScheme),
                    onPrimary: uiColorOnPrimary.i64(colorScheme),
                    onSecondary: uiColorOnSecondary.i64(colorScheme),
                    onBackground: uiColorOnBackground.i64(colorScheme),
                    onSurface: uiColorOnSurface.i64(colorScheme),
                    onError: uiColorOnError.i64(colorScheme)),
                typographyScale: TypographyScale_(
                    headingXXL: fontHeadingXXL.os(sizeCategory),
                    headingXL: fontHeadingXL.os(sizeCategory),
                    headingL: fontHeadingL.os(sizeCategory),
                    headingM: fontHeadingM.os(sizeCategory),
                    textL: fontTextL.os(sizeCategory),
                    textM: fontTextM.os(sizeCategory),
                    textS: fontTextS.os(sizeCategory),
                    label: fontLabel.os(sizeCategory)
                ),
                cornerRadiusScale: CornerRadiusScale_(
                    buttonRadius: cornerRadiusButton.float)
            )
        }
    }
}
