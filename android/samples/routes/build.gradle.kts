plugins {
    id("android-sample-convention")
}

android.defaultConfig.applicationId = "com.trafi.sample.routes"

dependencies {
    implementation(project(":android:ui-android"))
    implementation(project(":android:routes-ui-android"))
    implementation(libs.kotlin.stdlib)
    implementation(libs.androidx.core)
    implementation(libs.androidx.appcompat)
    implementation(libs.androidx.material)
    implementation(libs.compose.foundation.layout)
    implementation(libs.compose.material)
    implementation(libs.compose.ui.tooling.preview)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.compose.navigation)
    implementation(libs.kotlinx.coroutines.android)
    implementation(libs.androidx.lifecycle)
    implementation(libs.androidx.lifecycle.viewmodel)
    implementation(libs.androidx.activity)
    implementation(libs.compose.activity)
    implementation(libs.androidx.fragment)
    implementation(libs.compose.accompanist.navigation)
}
