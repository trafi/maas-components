import SwiftUI
import Combine
import ComposableArchitecture
import CoreBinary

struct SampleStateView: View {

    private let store: Store<SampleState, SampleAction>

    init(state: SampleState, environment: SampleEnvironment = SampleEnvironment()) {
        store = Store(
            initialState: state,
            reducer: Reducer(SampleState.reduce),
            environment: environment
        )
    }

    var body: some View {
        WithViewStore(store) { viewStore in
            VStack {
                HStack {
                    SwiftUI.Button("−") { viewStore.send(.DecrementButtonTapped()) }
                    Text("\(viewStore.count)")
                    SwiftUI.Button("+") { viewStore.send(.IncrementButtonTapped()) }
                }

                SwiftUI.Button("Number fact") { viewStore.send(.NumberFactButtonTapped()) }
            }
            .alert(
                item: viewStore.binding(
                    get: { $0.numberFactAlert.map(FactAlert.init(title:)) },
                    send: .FactAlertDismissed()
                ),
                content: { Alert(title: Text($0.title)) }
            )
        }
    }
}

struct FactAlert: Identifiable {
  var title: String
  var id: String { self.title }
}


#if DEBUG
struct SampleStateView_Previews: PreviewProvider {

    static var previews: some View {
        SampleStateView(state: SampleState(count: 0, numberFactAlert: nil))
    }
}
#endif

