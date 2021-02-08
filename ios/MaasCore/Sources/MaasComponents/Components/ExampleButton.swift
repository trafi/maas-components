// TODO: delete this file
struct ExampleButton: View {
    
    @State private var isLoadingButton = false
    @State var dFlag = false
    
    var title: String {
        dFlag
            ? isLoadingButton
                ? ""
                : "Button"
            :  isLoadingButton
                ? "Iconning..."
                : "ICON"
    }
    
    var icon: Image? {
        dFlag
            ? Image(systemName: "command")
            : nil
    }
    
    var body: some View {
        VStack(spacing: 20) {
            HStack {
                SwiftUI.Button("start") { isLoadingButton = true }
                SwiftUI.Button("stop") { isLoadingButton = false }
                SwiftUI.Button("icon") {
                        dFlag.toggle()
                }
            }
            
            Button(
                title,
                icon: icon,
                isHugging: false,
                isLoading: $isLoadingButton,
                action: tappedButton
            ).padding()
            
            Spinner(color: .black, lineWidth: 20, isAnimating: $isLoadingButton)
                .frame(width: 100, height: 100, alignment: .center)
        }
    }
    
    
    func tappedButton() {
        isLoadingButton = true
        Timer.scheduledTimer(withTimeInterval: 2, repeats: false) { _ in
            isLoadingButton = false
        }
    }
}

struct ExampleButton_Preview: PreviewProvider {
    
    static var previews: some View {
        ExampleButton()
    }
}
