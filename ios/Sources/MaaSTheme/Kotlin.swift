import UIKit
import SwiftUI
import MaasCore

@dynamicMemberLookup
public struct Kotlin<T> {

    public let value: T
    public init(_ value: T) { self.value = value }

    public subscript(dynamicMember keyPath: KeyPath<T, TextStyle>) -> TextStyle {
        value[keyPath: keyPath]
    }

    public subscript(dynamicMember keyPath: KeyPath<T, KotlinULong>) -> Color {
        Color(value[keyPath: keyPath].uint64Value.color)
    }

    public subscript(dynamicMember keyPath: KeyPath<T, UInt64>) -> Color {
        Color(value[keyPath: keyPath].color)
    }

    public subscript(dynamicMember keyPath: KeyPath<T, Float>) -> CGFloat {
        CGFloat(value[keyPath: keyPath])
    }

    public subscript(dynamicMember keyPath: KeyPath<T, Int32>) -> CGFloat {
        CGFloat(value[keyPath: keyPath])
    }
}
