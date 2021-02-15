public extension AnyView {

    static var empty: AnyView { AnyView(EmptyView()) }
}

public extension View {

    var erased: AnyView { AnyView(self) }
}
