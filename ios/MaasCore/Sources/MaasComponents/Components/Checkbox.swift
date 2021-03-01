import SwiftUI
import Swappable
import MaasCore
import MaasTheme

public struct Checkbox: View, Swappable  {

    public struct InputType {
        public let isOn: Binding<Bool>
        public let content: ((Bool) -> AnyView)?
    }
    public var input: InputType

    @Environment(\.isEnabled) var isEnabled
    @Themeable(CheckboxConstants.init) var constants

    public init(isOn: Binding<Bool>) {
        self.input = .init(isOn: isOn, content: nil)
    }

    public init(input: InputType) {
        self.input = input
    }

    public var defaultBody: some View {
        defaultContent(input.isOn.wrappedValue)
            .frame(width: constants.width, height: constants.height)
            .onTapGesture {
                if !isEnabled {
                    input.isOn.wrappedValue.toggle()
                }
            }
    }

    // TODO: Replace when normal assets appears
    func defaultContent(_ isOn: Bool) -> some View {
        guard let content = input.content else {

            let content = isOn
                ? Image(systemName: "checkmark.circle")
                : Image(systemName: "circle")

            let foregroundColor = isEnabled
                ? constants.enabledColor
                : constants.disabledColor

            return content
                .foregroundColor(foregroundColor)
                .erased
        }

        return content(isOn)
    }
}

#if DEBUG

struct ToggleView_Previews: PreviewProvider {

    static var previews: some View {
        Checkbox(isOn: .constant(true))
    }
}

#endif
