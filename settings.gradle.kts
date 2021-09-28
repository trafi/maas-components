rootProject.name = "maas-components"

enableFeaturePreview("VERSION_CATALOGS")
enableFeaturePreview("TYPESAFE_PROJECT_ACCESSORS")

pluginManagement {
    repositories {
        google()
        gradlePluginPortal()
    }

    @Suppress("UnstableApiUsage")
    includeBuild("gradle/build-src")
}

include(
    ":common:core",
    ":android:ui-android",
    ":android:routes-ui-android",
    ":android:transit-ui-android",
    ":android:samples:routes",
    ":android:samples:auth-firebase"
)
