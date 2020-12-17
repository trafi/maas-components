import ComposableArchitecture
import Combine
import XCTest

@testable import MaasCore

final class SampleAppStateTests: XCTestCase {

    func testSampleAppState() {

        let environment = AppEnvironment()
        let numberFactResponse = AppAction.NumberFactResponse(
            result: ApiResultSuccess(value: "0 is a good number Brent")
        )
        environment.fetchNumberFact = { _ in Just(numberFactResponse).eraseToEffect() }

        let store = TestStore(
            initialState: AppState(count: 0, numberFactAlert: nil),
            reducer: Reducer(AppState.reduce),
            environment: environment)

        store.assert(
          // Test that tapping on the increment/decrement buttons changes the count
          .send(.IncrementButtonTapped()) {
            $0.count = 1
          },
          .send(.DecrementButtonTapped()) {
            $0.count = 0
          },

          // Test that tapping the fact button causes us to receive a response from the effect. Note
          // that we have to advance the scheduler because we used `.receive(on:)` in the reducer.
          .send(.NumberFactButtonTapped()),
          .advanceScheduler(),
          .receive(numberFactResponse) {
            $0.numberFactAlert = "0 is a good number Brent"
          },

          // And finally dismiss the alert
          .send(.FactAlertDismissed()) {
            $0.numberFactAlert = nil
          }
        )
    }
}


extension TestStore.Step {

    static func advanceScheduler() -> TestStore.Step {
        TestStore.Step.do {
            for _ in 0...5 {
              RunLoop.current.run(mode: .default, before: Date())
            }
        }
    }
}
