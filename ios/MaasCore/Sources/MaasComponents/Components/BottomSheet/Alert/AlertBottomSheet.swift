import SwiftUI

public struct AlertBottomSheet: View {

    var image: UIImage?
    var title: String?
    var subtitle: String?
    var buttons: [AlertBottomSheet.Button]

    @Themeable(AlertBottomSheetConstants.init) var constants

    @Binding var isPresenting: Bool

    public init(
        isPresenting: Binding<Bool>,
        image: UIImage? = nil,
        title: String? = nil,
        subtitle: String? = nil,
        buttons: [AlertBottomSheet.Button]
    ) {
        self.image = image
        self.title = title
        self.subtitle = subtitle
        self.buttons = buttons
        self._isPresenting = isPresenting
    }

    public var body: some View {
        VStack(spacing: constants.contentVerticalSpacing) {

            if let title = title {
                Text(title)
                    .textStyle(constants.titleTextStyle)
            }

            if let subtitle = subtitle {
                Text(subtitle)
                    .textStyle(constants.subtitleTextStyle)
            }

            ForEach(buttons.indices, id: \.self) {
                buttons[$0].view { isPresenting = false }
            }
        }
        .multilineTextAlignment(.center)
    }
}

// MARK: - Button

public extension AlertBottomSheet {

    struct Button {

        let text: String
        let image: AnyView?
        let spacing: Float
        let foreground: Color?
        let background: Color?
        let action: () -> Void

        init(
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

        static func primary(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
            .init(
                title,
                image: image,
                action: { action?() }
            )
        }

        static func secondary(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
            .init(
                title,
                image: image,
                foreground: Color(.label),
                background: Color(.systemGray6),
                action: { action?() }
            )
        }

        static func cancel(title: String, image: AnyView? = nil, action: (() -> ())? = nil) -> Self {
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

// TODO: find better solution to store latest valid value.
//private var errorFallback: ApiError? = nil

public extension View {

//    func alertBottomSheet(error: Binding<ApiError?>) -> some View {
//
//        /* Store latest existing error */
//        error.wrappedValue.flatMap { errorFallback = $0 }
//
//        return alertBottomSheet(
//            isPresented: .init(
//                get: { error.wrappedValue != nil },
//                set: { _ in error.wrappedValue = nil }
//            ),
//            title: "Something went wrong",
//            subtitle: errorFallback?.localizedDescription,
//            buttons: [
//                .secondary(title: "Close")
//            ]
//        )
//    }

    func alertBottomSheet(
        isPresented: Binding<Bool>,
        image: UIImage? = nil,
        title: String? = nil,
        subtitle: String? = nil,
        buttons: [AlertBottomSheet.Button]
    ) -> some View {
        bottomSheet(
            isPresented: isPresented,
            content: {
                AlertBottomSheet(
                    isPresenting: isPresented,
                    image: image,
                    title: title,
                    subtitle: subtitle,
                    buttons: buttons
                )
            }
        )
    }
}
