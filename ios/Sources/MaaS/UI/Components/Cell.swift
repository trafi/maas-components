import SwiftUI

struct Cell<P: View, S: View, C: View>: View {

    let content: () -> C
    let prefix: () -> P?
    let suffix: () -> S?

    init(content: @escaping () -> C)
    where P == Never, S == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = { nil }
    }

    init(content: @escaping () -> C,
         prefix: @escaping () -> P?)
    where S == Never {
        self.content = content
        self.prefix = prefix
        self.suffix = { nil }
    }

    init(content: @escaping () -> C,
         suffix: @escaping () -> S?)
    where P == Never {
        self.content = content
        self.prefix = { nil }
        self.suffix = suffix
    }

    init(content: @escaping () -> C,
         prefix: @escaping () -> P?,
         suffix: @escaping () -> S?) {
        self.content = content
        self.prefix = prefix
        self.suffix = suffix
    }

    var body: some View {
        HStack {
            prefix()
            content()
            Spacer()
            suffix()
        }
        .padding()
    }
}

#if DEBUG
struct Cell_Previews: PreviewProvider, Snapped {

    static var snapped: [String: AnyView] {
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

    static var paddingEdges: Edge.Set { [] }
    static var elementWidth: CGFloat? { 320 }
}
#endif
