struct ExampleButton: View {
    
    @State private var isLoadingButton = false
    @State private var isSpinning = true
    var title: String {
        isLoadingButton
            ? "Buttoning..."
            : "Button"
    }
    
    var body: some View {
        HStack(alignment: .center, content: {
            Spacer()
            
            NewButton(
                title,
                icon: Image(systemName: "command"),
                isLoading: $isLoadingButton,
                action: tappedButton
            )
            .frame(width: 200)
            
            Spinner(color: .red, isAnimating: $isSpinning)
//            Spacer()
        })
    }
    
    func tappedButton() {
        isSpinning.toggle()
        isLoadingButton = true
        Timer.scheduledTimer(withTimeInterval: 1, repeats: false) { _ in
            isLoadingButton = false
        }
    }
    
}


struct ExampleButton_Preview: PreviewProvider {

    static var previews: some View {
        ExampleButton()
    }
}
