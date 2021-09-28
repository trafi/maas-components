import com.android.build.gradle.BaseExtension

plugins {
    `maven-publish`
    id("maven-meta")
}

// this works around the AGP not being applied before this precompiled script plugin
// https://youtrack.jetbrains.com/issue/KT-44279
project.pluginManager.withPlugin("com.android.base") {
    val android = project.extensions.getByName("android") as BaseExtension
    tasks.register<Jar>("androidSourcesJar") {
        @Suppress("DEPRECATION")
        classifier = "sources"
        from(android.sourceSets["main"].java.srcDirs)
    }
}
val androidSourcesJar by tasks.existing

publishing {
    publications {
        register("androidRelease", MavenPublication::class) {
            afterEvaluate {
                from(components["release"])
                artifact(androidSourcesJar)
            }
        }
    }
}

artifacts {
    archives(androidSourcesJar)
}
