import SwiftUI
import UIKit
import MaasCore

public extension EnvironmentValues {

    var currentTheme: CurrentTheme {
        get {
            CurrentTheme(
                colorPalette: CurrentColorPalette(
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
                typographyScale: CurrentTypographyScale(
                    headingXXL: uiFontHeadingXXL,
                    headingXL: uiFontHeadingXL,
                    headingL: uiFontHeadingL,
                    headingM: uiFontHeadingM,
                    textL: uiFontTextL,
                    textM: uiFontTextM,
                    textS: uiFontTextS,
                    label: uiFontLabel
                ),
                spacingScale: CurrentSpacingScale(
                    globalMargin: Float(SpacingScale.Default().GlobalMargin)
                ),
                cornerRadiusScale: CurrentCornerRadiusScale(
                    buttonRadius: cornerRadiusButton.float)
            )
        }
    }
}
