plugins {
    id("android-sample-convention")
}

android.defaultConfig.applicationId = "com.trafi.sample.routes"

dependencies {
    implementation(project(":android:ui-android"))
    implementation(project(":android:routes-ui-android"))
    implementation("org.jetbrains.kotlin:kotlin-stdlib:${Versions.kotlin}")
    implementation("org.jetbrains.kotlin:kotlin-reflect:${Versions.kotlin}")
    implementation("androidx.core:core-ktx:${Versions.core}")
    implementation("androidx.appcompat:appcompat:${Versions.appcompat}")
    implementation("com.google.android.material:material:${Versions.material}")
    implementation("androidx.compose.foundation:foundation-layout:${Versions.compose}")
    implementation("androidx.compose.material:material:${Versions.compose}")
    implementation("androidx.compose.ui:ui-tooling-preview:${Versions.compose}")
    debugImplementation("androidx.compose.ui:ui-tooling:${Versions.compose}")
    implementation("androidx.navigation:navigation-compose:${Versions.composeNavigation}")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:${Versions.coroutines}")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:${Versions.lifecycle}")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:${Versions.lifecycle}")
    implementation("androidx.activity:activity-ktx:${Versions.activity}")
    implementation("androidx.activity:activity-compose:${Versions.composeActivity}")
    implementation("androidx.fragment:fragment-ktx:${Versions.fragment}")
}
