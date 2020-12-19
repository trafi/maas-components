# Button

## Preview

```{raw} html
<iframe
    style="border: 1px solid rgba(0, 0, 0, 0.1);"
    width="800"
    height="450"
    src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2F1P6PQxKaqIaLjxxfy1cFtH%2FMaaS-Design-System%3Fnode-id%3D410%253A0"
    allowfullscreen
/></iframe>
```


## Specifications
**Types:** Primary, Secondary.  
**Sizes:** Small, Normal, Large.  
**States:** Normal, Active, Disabled  
**Behaviour:** onTap changes state to “Active”. If interaction takes longer than 300ms changes state to “inProgress” [TBD].  

## Recommendations
- As a rule of thumb, there should be only one primary button per screen. If you need more actions, please consider secondary, and/or tertiary buttons.
- Keep text concise. Text longer than 22 symbols, might be truncated on smaller screens.

## API

[embedmd]:# (../../common/core/src/commonMain/kotlin/com/trafi/ui/component/internal/ButtonConstants.kt kotlin /class / $)
```kotlin
class ButtonConstants(theme: CurrentTheme) {
    val defaultBackgroundColor = theme.colorPalette.primary
    val defaultContentColor = theme.colorPalette.onPrimary
    val disabledBackgroundColor = theme.colorPalette.primary.alpha(0.12f)
    val disabledContentColor = theme.colorPalette.onPrimary
    val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
    val minHeight = 48.dp
    val cornerRadius = theme.cornerRadiusScale.buttonRadius
    val defaultTruncate = true
}
```

## Preview from automated tests
![Button](../../ios/Tests/MaasTests/__Snapshots__/Components/Button.2x.png)
