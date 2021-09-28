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
    implementation(projects.common.core)
    implementation(projects.android.uiAndroid)

    // Firebase Auth
    implementation(platform("com.google.firebase:firebase-bom:26.4.0"))
    implementation("com.google.firebase:firebase-auth-ktx")
    implementation(libs.kotlinx.coroutines.play.services)

    // Google Sign-In
    implementation("com.google.android.gms:play-services-auth:19.0.0")

    implementation(libs.kotlin.stdlib)
    implementation(libs.androidx.core)
    implementation(libs.androidx.appcompat)
    implementation(libs.androidx.material)
    implementation(libs.compose.foundation.layout)
    implementation(libs.compose.material)
    implementation(libs.compose.ui.tooling.preview)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.compose.navigation)
    implementation(libs.compose.constraintlayout)
    implementation(libs.kotlinx.coroutines.android)
    implementation(libs.androidx.lifecycle)
    implementation(libs.androidx.lifecycle.viewmodel)
    implementation(libs.androidx.activity)
    implementation(libs.compose.activity)
    implementation(libs.androidx.fragment)
}
