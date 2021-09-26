plugins {
    id("android-library-convention")
}

dependencies {
    api(project(":common:core"))
    api(project(":android:ui-android"))
    implementation(libs.kotlin.stdlib)
    implementation(libs.androidx.core)
    implementation(libs.androidx.lifecycle.viewmodel)
    implementation(libs.compose.viewmodel)
    implementation(libs.compose.foundation.layout)
    implementation(libs.compose.material)
    implementation(libs.compose.ui.tooling.preview)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.compose.constraintlayout)
}
