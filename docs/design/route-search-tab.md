# Route search tab

[API](#api) SwiftUI [Jetpack Compose][rstab-compose]

A tab used to filter out route search results by mobility mode


## Preview

<iframe
    style="border: 1px solid rgba(0, 0, 0, 0.1);"
    width="800"
    height="450"
    src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2F1P6PQxKaqIaLjxxfy1cFtH%2FMaaS-Design-System%3Fnode-id%3D735%253A16160"
    allowfullscreen
/></iframe>


## Usage

For now used only in the carousel in route search screen


## Variations and Constituents

**Types**
states: default, active


## API

[embedmd]:# (../../common/core/src/commonMain/kotlin/com/trafi/ui/component/internal/RouteSearchTabConstants.kt kotlin /class / $)
```kotlin
class RouteSearchTabConstants(theme: CurrentTheme) {
    val contentColorPrimary = theme.colorPalette.onSurface
    val contentColorSecondary = theme.colorPalette.grayScale.gray600
    val defaultBackgroundColor = theme.colorPalette.grayScale.gray100
    val activeBackgroundColor = theme.colorPalette.primary.alpha(0.1f)

    val titleStyle = theme.typographyScale.textM.copy(fontWeight = Bold)
    val subtitleStyle = theme.typographyScale.textS.copy(fontWeight = Normal)

    val padding = SpacingScale.xxs

    val spacerBelowIcon = SpacingScale.xxs
    val spacerBelowTitle = SpacingScale.xxxs

    val minTabWidth = 64.dp
    val minTabHeight = 74.dp

    val borderRadius = SpacingScale.xs
    val iconWidth = 24.dp
    val iconHeight = 24.dp

    val borderColorActive = theme.colorPalette.primary
    val borderWidth = 1.5.dp
}
```


## Preview from automated tests

No tests yet


[rstab-compose]: https://github.com/trafi/maas-components/blob/main/android/routes/ui/src/main/java/com/trafi/routes/ui/RouteSearchTab.kt
