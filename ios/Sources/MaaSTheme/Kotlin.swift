import UIKit
import SwiftUI

@dynamicMemberLookup
public struct Kotlin<T> {

    let value: T
    public init(_ value: T) { self.value = value }

    public subscript(dynamicMember keyPath: KeyPath<T, UIFont>) -> Font {
        Font(value[keyPath: keyPath])
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
    
    public subscript(dynamicMember keyPath: KeyPath<T, Int32>) -> Int {
        Int(value[keyPath: keyPath])
    }
}
