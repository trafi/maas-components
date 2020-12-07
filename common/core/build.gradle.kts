import org.jetbrains.kotlin.gradle.plugin.mpp.KotlinNativeTarget

plugins {
    kotlin("multiplatform")
    kotlin("plugin.serialization") version "1.4.10"
    id("com.android.library")
    id("kotlin-android-extensions")
    id("maven-publish")
}
group = "com.trafi.maas"
version = rootProject.version

val ktorVersion = "1.4.1"
val serializationVersion = "1.0.0-RC2"
val coroutinesVersion = "1.3.9-native-mt-2"

repositories {
    gradlePluginPortal()
    google()
    jcenter()
    mavenCentral()
}
kotlin {
    android {
        publishAllLibraryVariants()
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
                implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:$serializationVersion")
                implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
                implementation("io.ktor:ktor-client-core:$ktorVersion")
                implementation("io.ktor:ktor-client-serialization:$ktorVersion")
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
                implementation("io.ktor:ktor-client-android:$ktorVersion")
            }
        }
        val androidTest by getting {
            dependencies {
                implementation(kotlin("test-junit"))
                implementation("junit:junit:4.12")
            }
        }
        val iosMain by getting {
            dependencies {
                implementation("io.ktor:ktor-client-ios:$ktorVersion")
            }
        }
        val iosTest by getting
    }
}
android {
    compileSdkVersion(30)
    sourceSets["main"].manifest.srcFile("src/androidMain/AndroidManifest.xml")
    defaultConfig {
        consumerProguardFiles("consumer-rules.pro")
    }
    buildTypes {
        getByName("release") {
            isMinifyEnabled = false
        }
    }
}

apply(from = "../../android/scripts/maven-meta.gradle")

val xcframeworkPath = "build/bin/xcframework/MaasCore.xcframework"

val cleanXcframework by tasks.creating(Exec::class) {

    group = "cleanup"

    commandLine("rm", "-rf", xcframeworkPath)
}

val xcframework by tasks.creating(Exec::class) {

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
