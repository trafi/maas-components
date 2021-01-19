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
    implementation("org.jetbrains.kotlin:kotlin-gradle-plugin:${versions["version.kotlin"]}")
    implementation("com.karumi:shot:${versions["version.shot"]}")
}
