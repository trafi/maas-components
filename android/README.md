## MaaS Components for Android

*Work in progress, not ready for use in production.*

Frictionless access to mobility-as-a-service (MaaS) data and services.
Ready-built UI components to get you started quickly out of the box, built with [Jetpack Compose][compose].

### Usage

Search for locations.

```groovy
dependencies {
  implementation 'com.trafi.maas:locations-android:0.1.0-dev01'
}
```

```kotlin
val locationsApi = LocationsApi(baseUrl = "$API_BASE_URL", apiKey = "$API_KEY", regionId = "$REGION_ID")

lifecycleScope.launch {
  val result = locationsApi.search(query)
  when (result) {
    is ApiResult.Success -> println("Found ${result.value.size} locations.")
    is ApiResult.Failure -> throw result.exception
  }
}
```

Geocode and reverse geocode locations.

```kotlin
lifecycleScope.launch {
  val start = locationsApi.resolveLocation(location)

  val coordinate = LatLng(54.685563, 25.287704)
  val end = (locationsApi.resolveAddress(coordinate) as? ApiResult.Success)?.value?.let { address ->
    Location(coordinate, address = address)
  }
}
```

Search for routes.

```groovy
dependencies {
  implementation 'com.trafi.maas:routes-android:0.1.0-dev01'
}
```

```kotlin
val routesApi = RoutesApi(baseUrl = "$API_BASE_URL", apiKey = "$API_KEY")

lifecycleScope.launch {
  val result = routesApi.search(start, end)
  when (result) {
    is ApiResult.Success -> println("Found ${result.value.routes.size} routes.")
    is ApiResult.Failure -> throw result.exception
  }
}
```

Display those routes with [Jetpack Compose][compose].

```groovy
dependencies {
  implementation 'com.trafi.maas:routes-ui-android:0.1.0-dev01'
}
```

```kotlin
setContent {
  RoutesResult(result)
}
```

Or try out the [included sample][sample].

[sample]: https://github.com/trafi/maas-components-android/tree/master/app
[compose]: https://developer.android.com/jetpack/compose
