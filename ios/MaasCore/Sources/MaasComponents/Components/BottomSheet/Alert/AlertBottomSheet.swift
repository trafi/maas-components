import SwiftUI

public struct AlertBottomSheet: View {

    public class ViewModel: ObservableObject {

        @Published public var image: UIImage?
        @Published public var title: String?
        @Published public var subtitle: String?
        @Published public var buttons: [AlertBottomSheet.Button]

        public init(image: UIImage?, title: String?, subtitle: String?, buttons: [AlertBottomSheet.Button]) {
            self.image = image
            self.title = title
            self.subtitle = subtitle
            self.buttons = buttons
        }
    }

    @EnvironmentObject var viewModel: ViewModel

    @Binding var isPresenting: Bool

    @Themeable(AlertBottomSheetConstants.init) var constants

    public init(isPresenting: Binding<Bool>) {
        self._isPresenting = isPresenting
    }

    public var body: some View {
        VStack(spacing: constants.contentVerticalSpacing) {

            if let title = viewModel.title {
                Text(title)
                    .textStyle(constants.titleTextStyle)
            }

            if let subtitle = viewModel.subtitle {
                Text(subtitle)
                    .textStyle(constants.subtitleTextStyle)
            }

            ForEach(viewModel.buttons.indices, id: \.self) {
                viewModel.buttons[$0].view { isPresenting = false }
            }
        }
        .multilineTextAlignment(.center)
    }
}

// MARK: - Button

// TODO: Delete Me
public extension AlertBottomSheet {

    struct Button {

        let text: String
        let image: AnyView?
        let spacing: Float
        let foreground: Color?
        let background: Color?
        let action: () -> Void

        public init(
            _ text: String,
            image: AnyView? = nil,
            spacing: Float = SpacingScale().xs,
            foreground: Color? = nil,
            background: Color? = nil,
            action: @escaping () -> Void
        ) {
            self.text = text
            self.image = image
            self.spacing = spacing
            self.foreground = foreground
            self.background = background
            self.action = action
        }

        public static func primary(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
            .init(
                title,
                image: image,
                action: { action?() }
            )
        }

        public static func secondary(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
            .init(
                title,
                image: image,
                foreground: Color(.label),
                background: Color(.systemGray6),
                action: { action?() }
            )
        }

        public static func cancel(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
            .init(
                title,
                image: image,
                foreground: Color(.label),
                background: Color(.clear),
                action: { action?() }
            )
        }
    }
}

private extension AlertBottomSheet.Button {

    func view(tapHandler: @escaping () -> ()) -> MaasComponents.Button {
        .init(text, foreground: foreground, background: background, action: { tapHandler(); action() })
    }
}


// MARK: - Presenting

public extension View {

    func alertBottomSheet(
        error: Binding<ApiError?>,
        image: UIImage? = nil,
        title: String? = nil,
        subtitle: String? = nil,
        buttons: [AlertBottomSheet.Button] = [.cancel(title: "Cancel")]
    ) -> some View {
        // TODO: L10n | subtitle correct message
        bottomSheet(
            isPresented: .bool(error),
            content: { AlertBottomSheet(isPresenting: .bool(error)) }
        )
        .environmentObject(
            AlertBottomSheet.ViewModel(
                image: image,
                title: title ?? "Something went wrong",
                subtitle: error.wrappedValue?.message ?? subtitle,
                buttons: buttons
            )
        )
    }

    func alertBottomSheet(
        isPresented: Binding<Bool>,
        image: UIImage? = nil,
        title: String? = nil,
        subtitle: String? = nil,
        buttons: [AlertBottomSheet.Button]
    ) -> some View {

        bottomSheet(
            isPresented: isPresented,
            content: { AlertBottomSheet(isPresenting: isPresented) }
        )
        .environmentObject(
            AlertBottomSheet.ViewModel(image: image, title: title, subtitle: subtitle, buttons: buttons)
        )
    }
}
// TODO: Is this good ?
private extension ApiError {

    var message: String? {
        switch self {
        case let .error(error):
            return error?.developerMessage
        case let .unauthorized(error):
            return error?.developerMessage
        case let .failure(developerMessage):
            return developerMessage
        }
    }
}

private extension Binding where Value == Bool {

    static func bool<T>(_ binding: Binding<T?>) -> Binding<Value> {
        .init(
            get: { binding.wrappedValue != nil },
            set: { if !$0 { binding.wrappedValue = nil } }
        )
    }
}
