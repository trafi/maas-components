plugins {
    id("android-library-convention")
}

dependencies {
    api(project(":common:core"))
    api(project(":android:ui-android"))
    implementation("org.jetbrains.kotlin:kotlin-stdlib:${Versions.kotlin}")
    implementation("androidx.core:core-ktx:1.5.0")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:2.3.1")
    implementation("androidx.lifecycle:lifecycle-viewmodel-compose:${Versions.composeLifecycleViewmodel}")
    implementation("androidx.compose.foundation:foundation-layout:${Versions.compose}")
    implementation("androidx.compose.material:material:${Versions.compose}")
    implementation("androidx.compose.ui:ui-tooling:${Versions.compose}")
    implementation("androidx.constraintlayout:constraintlayout-compose:${Versions.composeConstraintLayout}")
}
