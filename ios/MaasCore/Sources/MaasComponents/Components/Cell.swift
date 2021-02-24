import CoreBinary
import MaasCore
import MaasTheme

public struct Cell<P: View, S: View, C: View>: View {

    let content: () -> C
    let prefix: () -> P?
    let suffix: () -> S?

    public init(content: @escaping () -> C)
    where P == Never, S == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = { nil }
    }

    public init(content: @escaping () -> C,
         prefix: @escaping () -> P?)
    where S == Never {
        self.content = content
        self.prefix = prefix
        self.suffix = { nil }
    }

    public init(content: @escaping () -> C,
         suffix: @escaping () -> S?)
    where P == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = suffix
    }

    public init(content: @escaping () -> C,
         prefix: @escaping () -> P?,
         suffix: @escaping () -> S?) {
        self.content = content
        self.prefix = prefix
        self.suffix = suffix
    }

    public var body: some View {
        HStack(spacing: Spacing.listItemGutter.value) {
            prefix()
            content()
            Group {
                if suffix() != nil {
                    Spacer()
                    suffix()
                }
            }
        }
        .padding([.leading, .trailing], Spacing.listItemVertical.value)
        .padding([.top, .bottom], Spacing.listItemHorizontal.value)
        .frame(maxWidth: .infinity, alignment: .leading)
    }
}

#if DEBUG
public struct Cell_Previews: PreviewProvider, Snapped {

    public static var snapped: [String: AnyView] {
        [
            "Simple": AnyView(
                Cell {
                    Text("Hello")
                }),

            "Prefix": AnyView(
                Cell {
                    Text("Hello")
                } prefix: {
                    Text("Pre")
                }),

            "Suffix": AnyView(
                Cell {
                    Text("Hello")
                } suffix: {
                    Text("Suff")
                }),

            "Complex": AnyView(
                Cell {
                    Text("Hello")
                } prefix: {
                    Text("Pre")
                } suffix: {
                    Text("Suff")
                }),
        ]
    }

    public static var paddingEdges: Edge.Set { [] }
    public static var elementWidth: CGFloat? { 320 }
}
#endif
