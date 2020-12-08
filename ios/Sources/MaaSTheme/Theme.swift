import SwiftUI
import UIKit
import MaasCore

public extension EnvironmentValues {

    var maasTheme: Theme {
        get {
            Theme(
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
            )
        }
    }
}
