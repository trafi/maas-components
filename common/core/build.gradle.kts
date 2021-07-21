import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    id("com.android.library")
    kotlin("multiplatform")
    kotlin("plugin.serialization") version Versions.kotlin
    id("org.jlleitschuh.gradle.ktlint")
    id("maven-publish")
    id("maven-meta")
}

kotlin {
    android {
        publishAllLibraryVariants()
        compilations.all {
            kotlinOptions {
                jvmTarget = "1.8"
            }
        }
    }
    ios {
        binaries {
            framework {
                baseName = "CoreBinary"
            }
        }
    }
    sourceSets {
        all {
            with(languageSettings) {
                useExperimentalAnnotation("kotlin.RequiresOptIn")
                useExperimentalAnnotation("kotlin.ExperimentalUnsignedTypes")
            }
        }
        val commonMain by getting {
            dependencies {
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:${Versions.kotlinxSerialization}")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core") {
                    // https://kotlinlang.org/docs/mobile/concurrency-and-coroutines.html#multithreaded-coroutines
                    version { strictly(Versions.coroutines) }
                }
                implementation("io.ktor:ktor-client-core:${Versions.ktor}")
                implementation("io.ktor:ktor-client-serialization:${Versions.ktor}")
                implementation("io.ktor:ktor-client-logging:${Versions.ktor}")
            }
        }
        val commonTest by getting {
            dependencies {
                implementation(kotlin("test-common"))
                implementation(kotlin("test-annotations-common"))
                implementation("io.ktor:ktor-client-mock:${Versions.ktor}")
            }
        }
        val androidMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-android:${Versions.ktor}")
                implementation("androidx.compose.ui:ui:${Versions.compose}")
            }
        }
        val androidAndroidTestRelease by getting
        val androidTest by getting {
            // https://discuss.kotlinlang.org/t/disabling-androidandroidtestrelease-source-set-in-gradle-kotlin-dsl-script/21448
            dependsOn(androidAndroidTestRelease)
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

android {
    compileSdk = Versions.androidCompileSdk
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        minSdk = Versions.androidMinSdk
        consumerProguardFiles("consumer-rules.pro")
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

ktlint {
    filter {
        exclude("**/com/trafi/core/model/**")
        exclude("**/kotlinx/serialization/internal/**")
    }
}

val xcframeworkPath = "../../ios/MaasCore/Sources/CoreBinary/CoreBinary.xcframework"

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
