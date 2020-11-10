import SwiftUI
import MaasCore

struct LocationView: View {

    var location: AutoCompleteLocation

    var body: some View {
        Cell {
            VStack(alignment: .leading, spacing: 4) {
                Text(location.name).font(.headline)
                if location.address != nil {
                    Text(location.address!)
                        .font(.subheadline)
                        .foregroundColor(.gray)
                }
            }
        } prefix: {
            locationImage
                .frame(width: 40, height: 40, alignment: .center)
                .fixedSize()
        }
    }

    var locationImage: some View {
        if location.icon != nil {
            return Image(systemName: location.icon!)
        } else {
            return Image(systemName: "mappin")
        }
    }
}

struct LocationView_Previews: PreviewProvider {
    static var previews: some View {
        LocationView(location: location)
            .previewLayout(.fixed(width: 320, height: 60))
    }
}

let location = AutoCompleteLocation(
    id: UUID().uuidString,
    type: .poi,
    name: "Gedimino kalnas",
    icon: "mappin",
    address: "Arsenalo gatvė 1, Vilnius 31337",
    schedules: nil,
    transports: nil,
    coordinate: LatLng(lat: 54.6870, lng: 25.2922),
    direction: nil
)
