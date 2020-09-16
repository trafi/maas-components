## MaaS Components for Android

*Work in progress, not ready for use in production.*

Frictionless access to mobility-as-a-service (MaaS) data and services.
Ready-built UI components to get you started quickly out of the box, built with [Jetpack Compose][compose].

### Usage

Search for routes.

```kotlin
val routesApi = RoutesApi(baseUrl = "$API_BASE_URL")

lifecycleScope.launch {
  val result = routesApi.search(start, end)
  when (result) {
    is ApiResult.Success -> println("Found ${result.value.routes.size} routes.")
    is ApiResult.Failure -> throw result.exception
  }
}
```

Display those routes with [Jetpack Compose][compose].

```kotlin
setContent {
  RoutesResult(result)
}
```

Or try out the [included sample][sample].

### Installation

*Coming soon*

[sample]: https://github.com/trafi/maas-components-android/tree/master/app
[compose]: https://developer.android.com/jetpack/compose
