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

    const val core = "1.6.0"
    const val activity = "1.3.1"
    const val fragment = "1.3.6"
    const val lifecycle = "2.4.0-alpha03"
    const val appcompat = "1.3.1"
    const val material = "1.4.0"

    const val compose = "1.0.1"
    const val composeNavigation = "2.4.0-alpha06"
    const val composeConstraintLayout = "1.0.0-beta02"
    const val composeActivity = activity
    const val composeLifecycleViewmodel = "1.0.0-alpha07"
    const val accompanist = "0.16.1"

    const val ktor = "1.6.2"
    const val coroutines = "1.5.1"
    const val kotlinxSerialization = "1.2.2"

    const val ktlintGradlePlugin = "10.1.0"
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
