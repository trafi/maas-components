@file:Suppress("UnstableApiUsage")

plugins {
    id("com.android.application")
    id("kotlin-android")
}

android {
    compileSdkVersion(Versions.androidCompileSdk)
    buildToolsVersion(Versions.androidBuildToolsVersion)

    defaultConfig {
        minSdkVersion(Versions.androidMinSdk)
        targetSdkVersion(Versions.androidTargetSdk)

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
        getByName("debug") {
            keyAlias = "androiddebugkey"
            keyPassword = "android"
            storeFile = rootProject.file("android/keystores/debug.keystore")
            storePassword = "android"
        }
    }
    buildTypes {
        getByName("debug") {
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
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerVersion = Versions.kotlin
        kotlinCompilerExtensionVersion = Versions.compose
    }
}
