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
                    buttonRadius: cornerRadiusButton.float)
            )
        }
    }
}
