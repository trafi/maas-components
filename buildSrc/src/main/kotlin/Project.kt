import org.gradle.api.*

fun Project.resolveProperty(propertyKey: String, environmentVariable: String? = null): String? {
    val gradleProp = findProperty(propertyKey)?.toString()
    if (gradleProp != null) {
        return gradleProp
    }

    environmentVariable?.let { System.getenv(it) }?.let { return it }

    val local = rootProject.file("local.properties")
    if (!local.canRead()) return null

    val localProperties = java.util.Properties()
    local.reader().use { localProperties.load(it) }
    return localProperties.getProperty(propertyKey)
}
