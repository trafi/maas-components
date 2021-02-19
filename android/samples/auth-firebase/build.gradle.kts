plugins {
    id("android-sample-convention")
}

if (file("google-services.json").exists()) {
    apply(plugin = "com.google.gms.google-services")
} else {
    android.defaultConfig {
        resValue(type = "string", name = "default_web_client_id", value = "placeholder")
    }
}

android.defaultConfig.applicationId = "com.trafi.sample.auth.firebase"

dependencies {
    implementation(project(":common:core"))
    implementation(project(":android:ui-android"))

    // Firebase Auth
    implementation(platform("com.google.firebase:firebase-bom:26.4.0"))
    implementation("com.google.firebase:firebase-auth-ktx")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-play-services:${Versions.coroutines}")

    // Google Sign-In
    implementation("com.google.android.gms:play-services-auth:19.0.0")

    implementation("org.jetbrains.kotlin:kotlin-stdlib:${Versions.kotlin}")
    implementation("androidx.core:core-ktx:1.3.2")
    implementation("androidx.appcompat:appcompat:1.2.0")
    implementation("com.google.android.material:material:1.2.1")
    implementation("androidx.compose.foundation:foundation-layout:${Versions.compose}")
    implementation("androidx.compose.material:material:${Versions.compose}")
    implementation("androidx.compose.ui:ui-tooling:${Versions.compose}")
    implementation("androidx.navigation:navigation-compose:${Versions.composeNavigation}")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:${Versions.coroutines}")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.2.0")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:2.2.0")
    implementation("androidx.activity:activity-ktx:1.1.0")
}
