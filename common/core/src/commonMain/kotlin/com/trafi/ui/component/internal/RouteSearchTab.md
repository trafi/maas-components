# Route search tab

A tab used to filter out route search results by mobility mode


## Preview

[Figma](https://www.figma.com/file/1P6PQxKaqIaLjxxfy1cFtH/MaaS-Design-System?node-id=735%3A16160)


## Usage

For now used only in the carousel in route search screen


## Variations and Constituents

**Types**
states: default, active


## API

[embedmd]:# (RouteSearchTabConstants.kt kotlin /class / $)
```kotlin
class RouteSearchTabConstants (theme: CurrentTheme) {
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
