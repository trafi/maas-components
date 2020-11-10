import SwiftUI
import shared

struct MaaSTextField: View {

    var textField: TextField<Text>

    init<T: StringProtocol>(_ title: T, text: Binding<String>) {
        textField = TextField(title, text: text)

    }

    var body: some View {
        textField
            .padding()
            .background(RoundedRectangle(cornerRadius: 10).stroke(Color.gray))
    }
}

struct RouteSearchFormView: View {

    @Binding var departure: String
    @Binding var departureType: AutoCompleteLocation.Type_

    @Binding var destination: String
    @Binding var destinationType: AutoCompleteLocation.Type_

    var body: some View {
        ZStack(alignment: Alignment(horizontal: .trailing, vertical: .center)) {
            HStack {
                VStack(spacing: 20) {
                    HStack(spacing: 8) {
                        departureType.image
                        MaaSTextField("Departure", text: $departure)
                    }
                    HStack(spacing: 8) {
                        destinationType.image
                        MaaSTextField("Destination", text: $destination)
                    }
                }
            }.padding()
            Button(action: {}, label: {
                Image(systemName: "arrow.up.arrow.down")
                    .accentColor(.black)
                    .frame(width: 60, height: 60)
                    .background(
                        Circle()
                            .fill(Color.white)
                            .shadow(radius: 4)
                    )

            })
            .padding(.trailing, 36)
        }
    }
}

extension AutoCompleteLocation.Type_ {

    var image: some View {

        var view: Image
        switch self {
        case .address: view = Image(systemName: "rectangle.and.pencil.and.ellipsis")
        case .coordinate: view = Image(systemName: "safari")
        case .currentLocation: view = Image(systemName: "location.fill.viewfinder")
        case .locationTypeNone: view = Image(systemName: "mappin")
        case .poi: view = Image(systemName: "command")
        case .stops: view = Image(systemName: "bus.fill")
        default: view = Image(systemName: "mappin")
        }

        return view.frame(width: 40, height: 40, alignment: .center)
    }

}

struct RouteSearchFormView_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            RouteSearchFormView(
                departure: .constant("Europos aikštė"),
                departureType: .constant(.stops),
                destination: .constant("52.54234,13.40232"),
                destinationType: .constant(.coordinate)
            )
            RouteSearchFormView(
                departure: .constant("Bliūdų g. 5"),
                departureType: .constant(.address),
                destination: .constant("Kalnų parkas"),
                destinationType: .constant(.poi)
            )
            RouteSearchFormView(
                departure: .constant("Arkos g. 2"),
                departureType: .constant(.currentLocation),
                destination: .constant("LT-14180"),
                destinationType: .constant(.locationTypeNone)
            )
        }
        .previewLayout(.fixed(width: 375, height: 180))
    }
}
