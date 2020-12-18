import SwiftUI

struct MockSelected: EnvironmentKey {
    static var defaultValue: Bool { false }
}

public extension EnvironmentValues {
    
    var mockSelected: Bool {
        get { self[MockSelected.self] }
        set { self[MockSelected.self] = newValue }
    }
}

extension View {
    
    func selectionModifier<Modifier: ViewModifier>(
        _ isSelected: Bool,
        selectionModifier: @escaping ((Bool) -> Modifier)
    ) -> some View {
        self.modifier(SelectionModifier(isSelected: isSelected, selectionModifier: selectionModifier))
    }
}

final class SelectionModifier<Modifier: ViewModifier>: EnvironmentalModifier {
    
    init(isSelected: Bool, selectionModifier: @escaping (Bool) -> Modifier) {
        self.isSelected = isSelected
        self.selectionModifier = selectionModifier
    }
    
    let isSelected: Bool
    var selectionModifier: (Bool) -> Modifier
    
    func resolve(in environment: EnvironmentValues) -> Modifier {
        if environment.mockSelected {
            return selectionModifier(!isSelected)
        } else {
            return selectionModifier(isSelected)
        }
    }
}
