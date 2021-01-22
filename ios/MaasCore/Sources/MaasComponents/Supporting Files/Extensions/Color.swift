public extension String {
    /**
     Parses a hexadecimal string as a color. See [Color.init(hex: String?)](x-source-tag://colorInitHex).
     */
    func parseColor() -> Color {
        .init(hex: self)
    }
}

public extension Optional where Wrapped == String {
    /**
     Parses a hexadecimal string as a color. See [Color.init(hex: String?)](x-source-tag://colorInitHex).
     */
    func parseColor() -> Color {
        .init(hex: self)
    }
}
