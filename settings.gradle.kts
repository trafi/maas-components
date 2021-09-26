rootProject.name = "maas-components"

enableFeaturePreview("VERSION_CATALOGS")

include(
    ":common:core",
    ":android:ui-android",
    ":android:routes-ui-android",
    ":android:transit-ui-android",
    ":android:samples:routes",
    ":android:samples:auth-firebase"
)
