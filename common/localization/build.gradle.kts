repositories {
    mavenCentral()
    gradlePluginPortal()
    jcenter()
    google()
}

val ktorVersion = "1.4.1"
val serializationVersion = "1.0.1"
val coroutinesVersion = "1.4.1-native-mt"

plugins {
    application
    kotlin("jvm")
    kotlin("plugin.serialization") version "1.4.21"
}

application {
    mainClassName = "com.trafi.localization.LocalizationKt"
}

dependencies {
    implementation("org.jetbrains.kotlinx:kotlinx-serialization-json:$serializationVersion")
    implementation("org.jetbrains.kotlinx:kotlinx-coroutines-core:$coroutinesVersion")
    implementation("io.ktor:ktor-client-core:$ktorVersion")
    implementation("io.ktor:ktor-client-serialization:$ktorVersion")
    implementation("io.ktor:ktor-client-cio:$ktorVersion")
    implementation("io.ktor:ktor-client-logging:$ktorVersion")
    implementation("org.slf4j:slf4j-simple:1.7.30")
    implementation("com.squareup:kotlinpoet:1.7.2")
    implementation("com.github.ajalt.clikt:clikt:3.0.1")

    testImplementation("junit:junit:4.13.1")
    testImplementation(kotlin("test-common"))
    testImplementation(kotlin("test-annotations-common"))
    testImplementation(kotlin("test-junit"))
    implementation(kotlin("stdlib-jdk8"))
}
