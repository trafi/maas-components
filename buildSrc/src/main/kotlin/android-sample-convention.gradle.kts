@file:Suppress("UnstableApiUsage")

import com.android.build.api.dsl.ApkSigningConfig
import com.android.build.api.dsl.ApplicationBuildType

plugins {
    id("com.android.application")
    id("kotlin-android")
}

android {
    compileSdk = Versions.androidCompileSdk
    buildToolsVersion = Versions.androidBuildToolsVersion

    defaultConfig {
        minSdk = Versions.androidMinSdk
        targetSdk = Versions.androidTargetSdk

        versionCode = 1
        versionName = "1.0"

        buildConfigField(
            type = "String",
            name = "API_BASE_URL",
            value = "\"${resolveProperty("trafi.apiBaseUrl", "TRAFI_API_BASE_URL") ?: ""}\"")
        buildConfigField(type = "String",
            name = "API_KEY",
            value = "\"${resolveProperty("trafi.apiKey", "TRAFI_API_KEY") ?: ""}\"")
        buildConfigField(
            type = "String",
            name = "REGION_ID",
            value = "\"${resolveProperty("trafi.regionId", "TRAFI_REGION_ID") ?: ""}\"")
    }
    signingConfigs {
        getByName<ApkSigningConfig>("debug") {
            keyAlias = "androiddebugkey"
            keyPassword = "android"
            storeFile = rootProject.file("android/keystores/debug.keystore")
            storePassword = "android"
        }
    }
    buildTypes {
        getByName<ApplicationBuildType>("debug") {
            signingConfig = signingConfigs.getByName("debug")
        }
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    kotlinOptions {
        jvmTarget = "1.8"
        useIR = true
        languageVersion = "1.5"

        // allow opting-in to experimental Compose APIs
        freeCompilerArgs = freeCompilerArgs + "-Xopt-in=kotlin.RequiresOptIn"
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerExtensionVersion = Versions.compose
    }
}
