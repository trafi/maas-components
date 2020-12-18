# Info Button
## Preview  
[see in Figma](https://www.figma.com/file/1P6PQxKaqIaLjxxfy1cFtH/MaaS-Design-System?node-id=617%3A7782)
  
## Specifications
**Where -** 
Used through out the app as tertiary CTA, which opens additional information screens.  
**Usage -** 
Open dedicated information screen/modal after user interaction  (e.g. Help, How it Works, Stop Information, etc.)  
**Types -** 
Default, Active, Disabled  
**Behavior -** onTap changes state to “Active”

 ## Recommendations
- This button should be used as tertiary button to call a non destructive action, like station information modal

## API
**Missing** [InfoButton](InfoButtonConstants.kt)


```kotlin
class InfoButtonConstants(theme: currentTheme){

  val iconWidth = 16.dp
  val iconHeight = 16.dp

  val paddingVertical = SpacingScale.md
  val paddingHorizontal = SpacingScale.sm
  val spaceBetween = SpacingScale.xs
  
  val maxLinesCount = 1
  
  val textStyle = theme.typographyScale.textL.copy(fontWeight = Bold)
  val cornerRadius = theme.cornerRadiusScale.buttonRadius
  
  val defaultContentColor = theme.colorPalette.onSurface
  val disabledContentColor = defaultContentColor.alpha(0.38f)
  
  val highlightedGradient = Gradient(
      direction = Gradient.Direction.Horizontal,
      colors = listOf(
         theme.colorPalette.grayScale.gray300.alpha(0f),
         theme.colorPalette.grayScale.gray300,
         theme.colorPalette.grayScale.gray300.alpha(0f),
      )
  )
}
```

## Preview from automated tests
**Missing**
