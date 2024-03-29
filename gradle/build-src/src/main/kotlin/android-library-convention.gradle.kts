@file:Suppress("UnstableApiUsage")

plugins {
    id("com.android.library")
    id("kotlin-android")
    id("maven-publish-android")
}

val libs: VersionCatalog = extensions.getByType<VersionCatalogsExtension>().named("libs")

android {
    compileSdk = libs.findVersion("android.compileSdk").get().requiredVersion.toInt()

    defaultConfig {
        minSdk = libs.findVersion("android.minSdk").get().requiredVersion.toInt()
    }

    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    kotlinOptions {
        jvmTarget = "1.8"

        // avoid kotlin_module clash for projects with the same name, e.g. 'ui' & 'routes:ui"
        // https://discuss.kotlinlang.org/t/dealing-with-kotlin-module-conflict-when-building-apk-for-project-with-non-unique-project-names/11247
        freeCompilerArgs = freeCompilerArgs + listOf("-module-name", "$group.$name")
        // enable explicit API mode, see https://youtrack.jetbrains.com/issue/KT-37652
        freeCompilerArgs = freeCompilerArgs + "-Xexplicit-api=strict"
        // allow opting-in to experimental Compose APIs
        freeCompilerArgs = freeCompilerArgs + "-Xopt-in=kotlin.RequiresOptIn"
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerExtensionVersion = libs.findVersion("compose").get().requiredVersion
    }
}
