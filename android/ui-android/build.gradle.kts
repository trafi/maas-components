plugins {
    id("android-library-convention")
    id("shot")
}

android {
    defaultConfig {
        testApplicationId = "com.trafi.ui.test"
        testInstrumentationRunner = "com.karumi.shot.ShotTestRunner"
    }
    // Workaround for https://github.com/Kotlin/kotlinx.coroutines/issues/2023
    packagingOptions {
        resources {
            excludes += "META-INF/AL2.0"
            excludes += "META-INF/LGPL2.1"
        }
    }
}

shot {
    // https://github.com/Karumi/Shot/issues/247
    applicationId = "con.trafi.ui"
}

dependencies {
    implementation(project(":common:core"))
    implementation(libs.kotlin.stdlib)
    implementation(libs.androidx.core)
    implementation(libs.compose.foundation.layout)
    implementation(libs.compose.runtime)
    implementation(libs.compose.material)
    implementation(libs.compose.ui.tooling.preview)
    debugImplementation(libs.compose.ui.tooling)
    implementation(libs.compose.constraintlayout)

    androidTestImplementation(libs.androidx.test.rules)
    androidTestImplementation(libs.compose.ui.test.junit4)
    debugImplementation(libs.compose.ui.test.manifest)
    debugImplementation(libs.androidx.appcompat)
}
