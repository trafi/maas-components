@file:Suppress("UnstableApiUsage")

plugins {
    alias(libs.plugins.ktlint) apply false
}

allprojects {
    group = "com.trafi.maas"
    version = "0.1.0-dev07-SNAPSHOT"

    repositories {
        google()
        mavenCentral()
    }
}

subprojects {
    afterEvaluate {
        if (project.hasProperty("android")) {
            apply(plugin = libs.plugins.ktlint.get().pluginId)
            extensions.getByType<org.jlleitschuh.gradle.ktlint.KtlintExtension>().apply {
                version.set(libs.versions.ktlint.asProvider())
                android.set(true)
            }
        }
    }
}

tasks.register<Delete>("clean") {
    delete(rootProject.buildDir)
}
