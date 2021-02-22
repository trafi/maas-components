import SwiftUI
import MaasCore
import MaasComponents
import Combine

class SharedVehiclesState: ObservableObject {

    private var cancelableStore = Set<AnyCancellable>()

    // MARK: - Request

    func getSharedVehicles() {
        guard response == nil else { return }
        OndemandApi.shared.vehicles()
            .publisher
            .sink(receiveCompletion: onCompletion, receiveValue: onValue)
            .store(in: &cancelableStore)
    }

    func startBooking() {
        guard let request = selectedVehicle?.bookingRequest else { return }
        OndemandApi.shared.startBooking(request: request)
            .publisher
            .sink(receiveCompletion: onCompletion, receiveValue: { print("Booking Request \($0)") })
            .store(in: &cancelableStore)
    }

    private func onCompletion(_ completion: Subscribers.Completion<ApiError>) {
        switch completion {
        case .finished:
            self.error = nil
        case let .failure(error):
            self.error = error
        }
    }

    private func onValue(_ completion: SharedVehiclesResponse) {
        response = completion
    }

    // MARK: - Publishers

    @Published var error: ApiError? = nil

    @Published var response: SharedVehiclesResponse? = nil

    @Published var selectedVehicle: SharedVehicle? = nil
}

struct SharedVehiclesView: View {

    @ObservedObject var state: SharedVehiclesState = .init()

    var body: some View {
        ScrollView {
            VStack {
                ForEach(state.response?.vehicles.compactMap { $0 } ?? [], id: \.self) { vehicle in
                    vehicle.listItem.background(
                        NavigationLink(
                            destination: SharedVehicleView().environmentObject(state),
                            tag: vehicle,
                            selection: $state.selectedVehicle,
                            label: { EmptyView() }
                        )
                    )
                    .onTapGesture { state.selectedVehicle = vehicle }
                }
            }
        }
        .navigationTitle("Micromobility")
        .onAppear { state.getSharedVehicles() }
    }
}

private extension SharedVehicle {

    var listItem: some View {
        Cell(
            content: content,
            suffix: suffix
        )
    }

    func content() -> some View {
        VStack {
            name.flatMap { Text($0) }
        }
    }

    func suffix() -> some View { Image(systemName: "chevron.right") }

    var bookingRequest: CreateSharingBookingRequest {
        .init(
            vehicleId: id,
            providerPaymentMethodId: nil,
            notificationSettings: nil,
            ext: nil,
            coordinates: location.coordinate,
            initialBookingStatus: .reserved
        )
    }
}

struct SharedVehicleView: View {

    @EnvironmentObject var state: SharedVehiclesState

    var body: some View {
        VStack {
            Button("Book", action: { state.startBooking() })
        }
        .padding()
        .alert(item: $state.error) {
            Alert(title: Text($0.developerMessage ?? ""))
        }
    }
}

extension ApiError: Identifiable {
    public var id: UUID { UUID() }
}
