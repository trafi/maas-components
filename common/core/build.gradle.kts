import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization") version Versions.kotlin
    id("maven-publish")
    id("maven-meta")
}

repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
}

android {
    compileSdkVersion(Versions.androidCompileSdk)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdkVersion(Versions.androidMinSdk)
        consumerProguardFiles("consumer-rules.pro")
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
    // workaround for https://youtrack.jetbrains.com/issue/KT-43944
    // the android { } block had to be moved before kotlin { } due to this, too
    configurations {
        create("androidTestApi")
        create("androidTestDebugApi")
        create("androidTestReleaseApi")
        create("testApi")
        create("testDebugApi")
        create("testReleaseApi")
    }
}

kotlin {
    android {
        publishAllLibraryVariants()
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
                useIR = true
            }
        }
    }
    ios {
        binaries {
            framework {
                baseName = "MaasCore"
            }
        }
    }
    sourceSets {
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:${Versions.kotlinxSerialization}")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:${Versions.coroutines}")
                implementation("io.ktor:ktor-client-core:${Versions.ktor}")
                implementation("io.ktor:ktor-client-serialization:${Versions.ktor}")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-android:${Versions.ktor}")
                implementation("androidx.compose.ui:ui:${Versions.compose}")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.13.1")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:${Versions.ktor}")
            }
        }
        val iosTest by getting
    }
}

val xcframeworkPath = "../../ios/MaasCore/Sources/MaasCore/Core.xcframework"

val cleanXcframework by tasks.registering(Exec::class) {

    group = "cleanup"

    commandLine("rm", "-rf", xcframeworkPath)
}

val xcframework by tasks.registering(Exec::class) {

    group = "build"

    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val arm64 = kotlin.targets.getByName<KotlinNativeTarget>("iosArm64").binaries.getFramework(mode)
    val x64 = kotlin.targets.getByName<KotlinNativeTarget>("iosX64").binaries.getFramework(mode)

    dependsOn(cleanXcframework)
    dependsOn(arm64.linkTask)
    dependsOn(x64.linkTask)

    commandLine(
        "xcodebuild", "-create-xcframework",
        "-framework", arm64.outputFile,
        "-debug-symbols", arm64.outputFile.path + ".dSYM",
        "-framework", x64.outputFile,
        "-debug-symbols", x64.outputFile.path + ".dSYM",
        "-output", xcframeworkPath
    )
}

val xcframeworkSimulator by tasks.registering(Exec::class) {

    group = "build"

    val mode = System.getenv("CONFIGURATION") ?: "DEBUG"
    val x64 = kotlin.targets.getByName<KotlinNativeTarget>("iosX64").binaries.getFramework(mode)

    dependsOn(cleanXcframework)
    dependsOn(x64.linkTask)

    commandLine(
        "xcodebuild", "-create-xcframework",
        "-framework", x64.outputFile,
        "-debug-symbols", x64.outputFile.path + ".dSYM",
        "-output", xcframeworkPath
    )
}
