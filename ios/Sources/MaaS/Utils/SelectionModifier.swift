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
        isSelected: Bool,
        selection: @escaping ((Bool) -> Modifier)
    ) -> some View {
        self.modifier(SelectionModifier(isSelected: isSelected, selection: selection))
    }
}

final class SelectionModifier<Modifier: ViewModifier>: EnvironmentalModifier {
    
    init(isSelected: Bool, selection: @escaping (Bool) -> Modifier) {
        self.isSelected = isSelected
        self.selection = selection
    }
    
    let isSelected: Bool
    var selection: (Bool) -> Modifier
    
    func resolve(in environment: EnvironmentValues) -> Modifier {
        if environment.mockSelected {
            return selection(!isSelected)
        } else {
            return selection(isSelected)
        }
    }
}
