plugins {
    `maven-publish`
    signing
}

extra["signing.keyId"] = resolveProperty("signing.keyId", "MAVEN_SIGNING_KEY_ID")
extra["signing.password"] = resolveProperty("signing.password", "MAVEN_SIGNING_KEY_PASSOWRD")
extra["signing.secretKeyRingFile"] = resolveProperty("signing.secretKeyRingFile", "MAVEN_SIGNING_KEY_RING_FILE")
val sonatypeUsername = resolveProperty("sonatypeUsername", "SONATYPE_USERNAME")
val sonatypePassword = resolveProperty("sonatypePassword", "SONATYPE_PASSWORD")

publishing {
    publications.withType<MavenPublication>().configureEach {
        pom {
            name.set("MaaS Components")
            description.set("Mobility-as-a-service SDK & UI components")
            url.set("https://github.com/trafi/maas-components")
            licenses {
                license {
                    name.set("The Apache License, Version 2.0")
                    url.set("http://www.apache.org/licenses/LICENSE-2.0.txt")
                }
            }
            developers {
                developer {
                    id.set("trafi")
                    name.set("Trafi Ltd.")
                    email.set("development@trafi.com")
                }
            }
            scm {
                connection.set("scm:git:https://github.com/trafi/maas-components.git")
                developerConnection.set("scm:git:ssh://github.com/trafi/maas-components.git")
                url.set("https://github.com/trafi/maas-components")
            }
        }
    }
    repositories {
        maven {
            name = "sonatype"

            val releasesRepoUrl = "https://oss.sonatype.org/service/local/staging/deploy/maven2/"
            val snapshotsRepoUrl = "https://oss.sonatype.org/content/repositories/snapshots/"
            url = uri(if (version.toString().endsWith("SNAPSHOT")) snapshotsRepoUrl else releasesRepoUrl)

            credentials {
                username = sonatypeUsername
                password = sonatypePassword
            }
        }
    }
}

signing {
    sign(publishing.publications)
}
