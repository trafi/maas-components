@file:Suppress("UnstableApiUsage")

plugins {
    id("com.android.library")
    id("kotlin-android")
    id("maven-publish-android")
}

android {
    compileSdkVersion(30)

    defaultConfig {
        minSdkVersion(23)
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    kotlinOptions {
        jvmTarget = "1.8"
        useIR = true

        // avoid kotlin_module clash for projects with the same name, e.g. 'ui' & 'routes:ui"
        // https://discuss.kotlinlang.org/t/dealing-with-kotlin-module-conflict-when-building-apk-for-project-with-non-unique-project-names/11247
        freeCompilerArgs = freeCompilerArgs + listOf("-module-name", "$group.$name")
        // enable explicit API mode, see https://youtrack.jetbrains.com/issue/KT-37652
        freeCompilerArgs = freeCompilerArgs + "-Xexplicit-api=strict"
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerVersion = Versions.kotlin
        kotlinCompilerExtensionVersion = Versions.compose
    }
}
