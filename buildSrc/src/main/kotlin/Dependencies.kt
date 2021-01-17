import java.io.FileNotFoundException
import java.util.Properties

object Versions {
    private val versions = loadProperties("versions.properties")

    val kotlin: String = versions.getProperty("version.kotlin")
    val androidGradlePlugin: String = versions.getProperty("version.androidGradlePlugin")

    const val compose = "1.0.0-alpha08"
}

private fun Any.loadProperties(propFileName: String): Properties {
    val props = Properties()
    val inputStream = javaClass.classLoader!!.getResourceAsStream(propFileName)
        ?: throw FileNotFoundException("property file '$propFileName' not found in the classpath")
    inputStream.use { props.load(it) }
    return props
}
