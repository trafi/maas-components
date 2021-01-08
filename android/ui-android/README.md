## MaaS Design System for Jetpack Compose

*Work in progress, not ready for use in production.*

A design system built for mobility-as-a-service (MaaS) data and services.

### Usage

The design system consists of several key parts:

1. A `@Composable fun MaasTheme()` that allows configuring design tokens - colors, typography, spacing & corner radius.
1. Foundational UI components such as `Button` that adhere to `MaasTheme` tokens.

The API of `MaasTheme` closely matches that of [`MaterialTheme` in Google's Jetpack Compose theming guide][compose-themes].

```kotlin
MaasTheme {
  Button("Hello!", onClick = {})
}
```

#### Colors

```kotlin
MaasTheme(
  colors = MaasTheme.darkColors(primary = Color(0xffff1499))
) {
  Button("Hello color!", onClick = {})
}
```

#### Typography

```kotlin
MaasTheme(
  typography = MaasTypography(defaultFontFamily = ComicNeue)
) {
  Button("Hello fonts!", onClick = {})
}

private val ComicNeue = fontFamily(
  font(R.font.comic_neue_regular, FontWeight.Normal),
  font(R.font.comic_neue_bold, FontWeight.Bold),
)
```

#### Spacing

```kotlin
MaasTheme(
  spacing = MaasSpacing(globalMargin = Spacing.md)
) {
  Button("Hello space!", onClick = {})
}
```

#### Corner radius

```kotlin
MaasTheme(
  cornerRadius = MaasCornerRadius(buttonRadius = CornerRadius.none)
) {
  Button("Hello corners!", onClick = {})
}
```

### Attribution

The bundled font [Inter][inter] is licensed under the [SIL Open Font License][inter-license].

[compose-themes]: https://developer.android.com/jetpack/compose/themes
[inter]: https://rsms.me/inter/
[inter-license]: https://github.com/rsms/inter/blob/master/LICENSE.txt
