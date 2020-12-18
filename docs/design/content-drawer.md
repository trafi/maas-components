# Content Drawer

[API](#api) SwiftUI Jetpack Compose

## Preview

<iframe
    style="border: 1px solid rgba(0, 0, 0, 0.1);"
    width="800"
    height="450"
    src="https://www.figma.com/embed?embed_host=share&url=https%3A%2F%2Fwww.figma.com%2Ffile%2F1P6PQxKaqIaLjxxfy1cFtH%2FMaaS-Design-System%3Fnode-id%3D1795%253A608"
    allowfullscreen
/></iframe>


# Specifications
**What**  
Content box in which we hold stuff  

**Usage**  
To hold a content, if there is screen/information beneath it (e.g. map, other screens)  

**Types**  
Default Content drawer (Holds any information)  
Active Micro Mobility drawer (Different size and colour drawer head which holds dynamic information)  
Stationary Vehicle Sharing Reservation drawer (Different size and colour drawer head which holds dynamic information)  
Stationary Vehicle Sharing Booking drawer (Different size and colour drawer head which holds dynamic information)  

**Behavior**  
onTap changes state to “Active”

## API

**TBD**

```kotlin
lass ContentDrawerConstants(theme: currentTheme) {

  val iconWidth = 32.dp
  val iconHeight = 6.dp
  val iconTopPadding = SpacingScale.md
  
  val paddingVertical = SpacingScale.md
  val paddingHorizontal = SpacingScale.sm
  
  val topCornerRadius = theme.cornerRadiusScale.drawerRadius
  
  val dropShadow = Shadow(
    postion = x0.y0, 
    color = theme.colorPalette.onSurface(0.28),
    blur = 12
  ) 
}
```

## Preview from automated tests
**Missing**
