package com.trafi.localization

import com.squareup.kotlinpoet.FileSpec
import com.squareup.kotlinpoet.KModifier
import com.squareup.kotlinpoet.PropertySpec
import com.squareup.kotlinpoet.TypeSpec
import com.trafi.localization.model.Language
import com.trafi.localization.model.Translation
import kotlinx.coroutines.async
import kotlinx.coroutines.awaitAll
import kotlinx.coroutines.coroutineScope
import java.io.File
import java.util.Locale

class LocalizationManager(
    private val client: LocalizationClient,
    private val outputPath: String
) {
    private val Translation.propertyName
        get() = key.toUpperCase(Locale.ENGLISH)
            .replace('.', '_')
            .replace(':', '_')
    private val Translation.propertyValue
        get() = value
    private val Language.fileName
        get() = code
    private val Language.objectName
        get() = code.toUpperCase(Locale.ENGLISH)

    suspend fun generate() {
        client.getLanguages().map { language ->
            generateLocalizationFile(language)
        }
    }

    private fun generateLocalizationFile(language: Language) {
        val properties = language.translations.map { translation ->
            PropertySpec
                .builder(translation.propertyName, String::class, KModifier.INTERNAL, KModifier.CONST)
                .initializer("%S", translation.propertyValue)
                .build()
        }

        val content = FileSpec.builder(this::class.java.packageName, language.fileName)
            .indent("    ")
            .addComment("Generated with https://github.com/trafi/maas-components\n")
            .addComment("Do not edit manually.")
            .addType(TypeSpec
                .objectBuilder(language.objectName)
                .addModifiers(KModifier.INTERNAL)
                .addProperties(properties)
                .build()
            )
            .build()
            .toString()

        val file = File(outputPath).resolve("${language.code}.kt")
        println("Writing generated code to $file")
        file.writer().use { it.write(content) }
    }
}
