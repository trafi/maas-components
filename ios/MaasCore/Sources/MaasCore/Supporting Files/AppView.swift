import SwiftUI
import Combine
import ComposableArchitecture

struct AppView: View {

    private let store: Store<AppState, AppAction>

    init(state: AppState, environment: AppEnvironment = AppEnvironment()) {
        store = Store(
            initialState: state,
            reducer: Reducer(AppState.reduce),
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
struct AppView_Previews: PreviewProvider {

    static var previews: some View {
        AppView(state: AppState(count: 0, numberFactAlert: nil))
    }
}
#endif

