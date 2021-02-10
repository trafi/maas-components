public extension View {

    func shadowStyle(_ shadowStyle: ShadowStyle) -> some View {
        ModifiedContent(content: self, modifier: ShadowStyleModifier(shadowStyle: shadowStyle))
    }
}

private struct ShadowStyleModifier: ViewModifier {

    let shadowStyle: ShadowStyle

    func body(content: Content) -> some View {

        var modifiedContent = AnyView(content)

        Kotlin(self.shadowStyle).shadows.forEach {
            let shadow = Kotlin($0)
            modifiedContent = AnyView(
                modifiedContent
                    .shadow(color: shadow.color, radius: shadow.radius, x: shadow.x, y: shadow.y)
            )
        }

        return modifiedContent
    }
}
