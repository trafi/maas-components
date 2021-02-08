import SwiftUI
import Combine

struct BottomSheet: ViewModifier {

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
        .animation(.easeInOut(duration: BottomSheetEnvironment.animationDuration))
        .bounds(key: PresenterContentPreferenceKey.self) { presenterBounds = $0 }
    }
}

// MARK: - Bottom Sheet Appearance

private extension BottomSheet {

    // knobCornerRadius
    // knobColor
    // knobWidth
    // knobHeight
    // knobVerticalSpacing

    var sheetKnobView: some View {
        RoundedRectangle(cornerRadius: 2.5)
            .fill(Color.init(UIColor.systemGray4))
            .frame(width: 32, height: 5, alignment: .center)
            .padding(.top, 8)
    }

    // backgroundColor

    var backgroundView: some View {
        Color.black
            .opacity(0.16)
            .onTapGesture {
                withAnimation(.easeInOut(duration: BottomSheetEnvironment.animationDuration)) {
                    environment.isPresented = false
                    environment.onDismiss?()
                }
            }
            .edgesIgnoringSafeArea(.vertical)
    }

    // sheetCornerRadius
    // sheetShadowRadius
    // sheetShadowColor
    // sheetPadding

    var sheetContentView: some View {
        ZStack {

            Group {
                if environment.isPresented {
                    backgroundView
                }
            }

            VStack(spacing: 0) {
                sheetKnobView
                VStack {
                    VStack {
                        environment.sheetContent
                            .padding(20)
                            .bounds(key: ContentPreferenceKey.self) { contentBounds = $0 }
                    }
                    Spacer()
                }
            }
            .frame(width: UIScreen.main.bounds.width)
            .background(Color(.systemBackground))
            .cornerRadius(radius: 20, corners: [.topLeft, .topRight])
            .shadow(color: Color(.black).opacity(0.16), radius: 10)
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
