import org.jetbrains.kotlin.konan.properties.loadProperties

plugins {
    `kotlin-dsl`
}

repositories {
    google()
    gradlePluginPortal()
    mavenCentral()
}

val versions = loadProperties("$projectDir/src/main/resources/versions.properties")

dependencies {
    implementation("com.android.tools.build:gradle:${versions["version.androidGradlePlugin"]}")
}
