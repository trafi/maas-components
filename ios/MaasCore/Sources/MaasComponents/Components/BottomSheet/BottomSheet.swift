import SwiftUI
import Combine

struct BottomSheet: ViewModifier {

    @Themeable(BottomSheetConstants.init) var constants

    @EnvironmentObject var environment: BottomSheetEnvironment

    @State var dragOffset: CGFloat = 0

    @State var contentBounds: CGRect = .zero

    @State var presenterBounds: CGRect = .zero

    var topAnchor: CGFloat { presenterBounds.height - contentBounds.height }

    var bottomAnchor: CGFloat { UIScreen.main.bounds.height }

    var topInset: CGFloat {
        UIApplication.shared.windows.first?.safeAreaInsets.top ?? 20.0
    }

    var sheetPosition: CGFloat {
        if environment.isPresented {
            let position = topAnchor + dragOffset
            return position < topInset
                ? topInset
                : position
        } else {
            return bottomAnchor - dragOffset
        }
    }

    func body(content: Content) -> some View {
        ZStack {
            content
            sheetContentView
        }
        .animation(BottomSheetEnvironment.defaultAnimation)
        .bounds(key: PresenterContentPreferenceKey.self) { presenterBounds = $0 }
    }
}

// MARK: - Bottom Sheet Appearance

private extension BottomSheet {

    var sheetKnobView: some View {
        RoundedRectangle(cornerRadius: 2.5)
            .fill(constants.knobColor)
            .frame(width: 32, height: 5, alignment: .center)
    }

    var backgroundView: some View {
        constants
            .backgroundColor
            .onTapGesture {
                withAnimation(BottomSheetEnvironment.defaultAnimation) {
                    environment.isPresented = false
                    environment.onDismiss?()
                }
            }
            .edgesIgnoringSafeArea(.vertical)
    }

    var sheetContentView: some View {
        ZStack {

            if environment.isPresented {
                backgroundView
            }

            VStack(spacing: 0) {
                sheetKnobView
                    .padding(.top, 8)

                VStack {

                    environment.sheetContent
                        .padding([.top, .bottom], constants.sheetContentVerticalPadding)
                        .padding([.leading, .trailing], constants.sheetContentHorizontalPadding)
                        .bounds(key: ContentPreferenceKey.self) { contentBounds = $0 }

                    Spacer()
                }
            }
            .frame(width: UIScreen.main.bounds.width)
            .background(constants.backgroundColor)
            .cornerRadius(radius: constants.sheetCornerRadius, corners: [.topLeft, .topRight])
            .shadowStyle(constants.sheetShadowStyle)
            .offset(y: sheetPosition)
            .gesture(dragGesture)
        }
    }
}

// MARK: -

struct BottomSheedEnvironmentWrapper<Base: View, InnerContent: View>: View {

    @EnvironmentObject var environment: BottomSheetEnvironment

    @Binding var isPresented: Bool
    let content: () -> InnerContent
    let base: Base

    @State var model = Model()

    var body: some View {
        if model.update(value: isPresented) {
            DispatchQueue.main.async(execute: updateContent)
        }
        return base
    }

    func updateContent() {
        environment.updatePartialSheet(isPresented: isPresented, content: content, onDismiss: {
            self.isPresented = false
        })
    }

    // hack around .onChange not being available in iOS13
    class Model {
        private var savedValue: Bool?
        func update(value: Bool) -> Bool {
            guard value != savedValue else { return false }
            savedValue = value
            return true
        }
    }
}

public extension View {

    func bottomSheet<Content: View>(isPresented: Binding<Bool>, @ViewBuilder content: @escaping () -> Content) -> some View {
        BottomSheedEnvironmentWrapper(isPresented: isPresented, content: content, base: self)
            .modifier(BottomSheet())
    }
}
