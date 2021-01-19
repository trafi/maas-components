plugins {
    id("com.android.application")
    id("kotlin-android")
    id("shot")
}

val compose_version: String by rootProject.extra
val kotlin_version: String by rootProject.extra

android {

    compileSdkVersion(30)
    buildToolsVersion("30.0.2")

    defaultConfig {
        applicationId = "com.trafi.example"
        minSdkVersion(23)
        targetSdkVersion(30)
        versionCode = 1
        versionName = "1.0"
        testInstrumentationRunner = "com.karumi.shot.ShotTestRunner"
        buildConfigField("String", "API_BASE_URL",
                "\"${resolveProperty("trafi.apiBaseUrl", "TRAFI_API_BASE_URL") ?: ""}\"")
        buildConfigField("String", "API_KEY",
                "\"${resolveProperty("trafi.apiKey", "TRAFI_API_KEY") ?: ""}\"")
        buildConfigField("String", "REGION_ID",
                "\"${resolveProperty("trafi.regionId", "TRAFI_REGION_ID") ?: ""}\"")
    }

    buildTypes {
        release {
            minifyEnabled(false)
            proguardFiles(getDefaultProguardFile("proguard-android-optimize.txt"), "proguard-rules.pro")
        }
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
    kotlinOptions {
        useIR = true
    }
    buildFeatures {
        compose = true
    }
    composeOptions {
        kotlinCompilerVersion = kotlin_version
        kotlinCompilerExtensionVersion = compose_version
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
    implementation(project(":android:ui-android"))
    implementation(project(":android:routes-ui-android"))
    implementation("org.jetbrains.kotlin:kotlin-stdlib:$kotlin_version")
    implementation("org.jetbrains.kotlin:kotlin-reflect:$kotlin_version")
    implementation("androidx.core:core-ktx:1.3.2")
    implementation("androidx.appcompat:appcompat:1.2.0")
    implementation("com.google.android.material:material:1.2.1")
    implementation("androidx.compose.foundation:foundation-layout:$compose_version")
    implementation("androidx.compose.material:material:$compose_version")
    implementation("androidx.compose.ui:ui-tooling:$compose_version")
    implementation("androidx.navigation:navigation-compose:1.0.0-alpha03")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-android:1.4.1")
    implementation("androidx.lifecycle:lifecycle-runtime-ktx:2.2.0")
    implementation("androidx.lifecycle:lifecycle-viewmodel-ktx:2.2.0")
    implementation("androidx.activity:activity-ktx:1.1.0")
    implementation("junit:junit:4.13.1")
    implementation("androidx.compose.ui:ui-test-junit4:$compose_version")
    implementation("androidx.compose.ui:ui-test:$compose_version")
    implementation("com.karumi:shot-android:5.5.0")
}
