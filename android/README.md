## MaaS Components for Android

*Work in progress, not ready for use in production.*

Frictionless access to mobility-as-a-service (MaaS) data and services.
Ready-built UI components to get you started quickly out of the box, built with [Jetpack Compose][compose].

### Usage

Search for locations.

```groovy
dependencies {
    implementation 'com.trafi.maas:core:0.1.0-dev05'
}
```

```kotlin
val configuration = ApiConfiguration()
val locationsApi = LocationsApi(configuration)

lifecycleScope.launch {
    when (val result = locationsApi.search(query)) {
        is ApiResult.Success -> println("Found ${result.value.locations.size} locations.")
        is ApiResult.Failure -> throw result.throwable
    }
}
```

Search for routes.

```groovy
dependencies {
    implementation 'com.trafi.maas:core:0.1.0-dev05'
}
```

```kotlin

val configuration = ApiConfiguration()
val routesApi = RoutesApi(configuration)

lifecycleScope.launch {
    when (val result = routesApi.search(start, end)) {
        is ApiResult.Success -> println("Found ${result.value.routes.size} routes.")
        is ApiResult.Failure -> throw result.throwable
    }
}
```

Display those routes with [Jetpack Compose][compose].

```groovy
dependencies {
  implementation 'com.trafi.maas:routes-ui-android:0.1.0-dev05'
}
```

```kotlin
setContent {
  RoutesResult(result, { route -> println(route) }) 
}
```

Or try out the [included sample][sample].

[sample]: https://github.com/trafi/maas-components-android/tree/maas-wrapper/android/samples/routes
[compose]: https://developer.android.com/jetpack/compose
