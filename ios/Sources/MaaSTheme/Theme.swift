import SwiftUI
import UIKit
import MaasCore

public extension EnvironmentValues {

    var currentTheme: CurrentTheme {
        get {
            CurrentTheme(
                colorPalette: CurrentColorPalette(
                    primary: uiColorPrimary.ui64(colorScheme),
                    primaryVariant: uiColorPrimaryVariant.ui64(colorScheme),
                    secondary: uiColorSecondary.ui64(colorScheme),
                    secondaryVariant: uiColorSecondaryVariant.ui64(colorScheme),
                    background: uiColorBackground.ui64(colorScheme),
                    surface: uiColorSurface.ui64(colorScheme),
                    error: uiColorError.ui64(colorScheme),
                    onPrimary: uiColorOnPrimary.ui64(colorScheme),
                    onSecondary: uiColorOnSecondary.ui64(colorScheme),
                    onBackground: uiColorOnBackground.ui64(colorScheme),
                    onSurface: uiColorOnSurface.ui64(colorScheme),
                    onError: uiColorOnError.ui64(colorScheme)),
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
                    globalMargin: Float(spacingGlobalMargin)
                ),
                cornerRadiusScale: CurrentCornerRadiusScale(
                    buttonRadius: Float(cornerRadiusButton))
            )
        }
    }
}
