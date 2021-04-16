import java.io.FileNotFoundException
import java.util.Properties

object Versions {
    private val versions = loadProperties("versions.properties")

    val kotlin: String = versions.getProperty("version.kotlin")
    val androidGradlePlugin: String = versions.getProperty("version.androidGradlePlugin")

    const val androidBuildToolsVersion = "30.0.3"
    const val androidCompileSdk = 30
    const val androidTargetSdk = 30
    const val androidMinSdk = 23

    const val compose = "1.0.0-alpha11"
    const val composeNavigation = "1.0.0-alpha06"

    const val ktor = "1.5.1"
    const val coroutines = "1.4.2-native-mt"
    const val kotlinxSerialization = "1.0.1"

    const val ktlintGradlePlugin = "10.0.0"
    const val ktlint = "0.41.0"
    val shot: String = versions.getProperty("version.shot")
}

private fun Any.loadProperties(propFileName: String): Properties {
    val props = Properties()
    val inputStream = javaClass.classLoader!!.getResourceAsStream(propFileName)
        ?: throw FileNotFoundException("property file '$propFileName' not found in the classpath")
    inputStream.use { props.load(it) }
    return props
}
