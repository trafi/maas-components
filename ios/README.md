## MaaS Components for iOS

*Work in progress, not ready for use in production.*

Frictionless access to mobility-as-a-service (MaaS) data and services.
Ready-built UI components to get you started quickly out of the box, built with [SwiftUI][swiftui].

### Usage

Search for locations.

```swift
let locationsApi = LocationsApi(baseUrl: "<#API_BASE_URL#>", apiKey: "<#API_KEY#>", regionId = "<#REGION_ID#>")

let result = locationsApi.search(query) { result in
  switch result {
    case .success(let result): print("Found \(result.value.size) locations.")
    case .failure(let error): print("Error: \(error.localizedDescription)")
  }
}
```

Geocode and reverse geocode locations.

```swift
let coordinate = LatLng(54.685563, 25.287704)
let end = locationsApi.resolveAddress(coordinate).flatMap { address in
  Location(coordinate, address: address)
}
```

Search for routes.

```swift
let routesApi = RoutesApi(baseUrl: "<#API_BASE_URL#>", apiKey: "<#API_KEY#>")

let result = routesApi.search(start, end) { result in
  switch result {
    case .success(let results): print("Found \(results.routes.size) routes.")
    case .failure(let error): print("Error: \(error.localizedDescription)")
  }
}
```

Display those routes with [SwiftUI][swiftui].

```swift
var body: some View {
    RoutesResultView(results)
}
```

[swiftui]: https://developer.apple.com/documentation/swiftui
