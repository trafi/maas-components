# See https://github.com/Kotlin/kotlinx.serialization#android
-keepattributes *Annotation*, InnerClasses
-dontnote kotlinx.serialization.AnnotationsKt # core serialization annotations

# kotlinx-serialization-json specific. Add this if you have java.lang.NoClassDefFoundError kotlinx.serialization.json.JsonObjectSerializer
-keepclassmembers class kotlinx.serialization.json.** {
    *** Companion;
}
-keepclasseswithmembers class kotlinx.serialization.json.** {
    kotlinx.serialization.KSerializer serializer(...);
}

-keep,includedescriptorclasses class com.trafi.core.model.**$$serializer { *; }
-keepclassmembers class com.trafi.core.model.** {
    *** Companion;
}
-keepclasseswithmembers class com.trafi.core.model.** {
    kotlinx.serialization.KSerializer serializer(...);
}
