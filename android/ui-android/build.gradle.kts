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

dependencies {
    implementation(project(":common:core"))
    implementation("org.jetbrains.kotlin:kotlin-stdlib:${Versions.kotlin}")
    implementation("androidx.core:core-ktx:${Versions.core}")
    implementation("androidx.compose.foundation:foundation-layout:${Versions.compose}")
    implementation("androidx.compose.runtime:runtime:${Versions.compose}")
    implementation("androidx.compose.material:material:${Versions.compose}")
    implementation("androidx.compose.ui:ui-tooling-preview:${Versions.compose}")
    debugImplementation("androidx.compose.ui:ui-tooling:${Versions.compose}")
    implementation("androidx.constraintlayout:constraintlayout-compose:${Versions.composeConstraintLayout}")

    androidTestImplementation("androidx.test:rules:1.4.0")
}
