package com.trafi.localization

import com.squareup.kotlinpoet.FileSpec
import com.squareup.kotlinpoet.KModifier
import com.squareup.kotlinpoet.PropertySpec
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
    private val privateConstModifier = listOf(KModifier.PRIVATE, KModifier.CONST)

    private val Translation.propertyName
        get() = key.toUpperCase(Locale.ENGLISH)
            .replace('.', '_')
            .replace(':', '_')
    private val Translation.propertyValue
        get() = value

    suspend fun generate() {
        client.getLanguages().map { language ->
            generateLocalizationFile(language)
        }
    }

    private fun generateLocalizationFile(language: Language) {
        val builder = FileSpec.builder(this::class.java.packageName, language.code)
            .indent("    ")
            .addComment("Generated with https://github.com/trafi/maas-components\n")
            .addComment("Do not edit manually.");
        language.translations.forEach { translation ->
            builder.addProperty(PropertySpec
                .builder(translation.propertyName, String::class, privateConstModifier)
                .initializer("%S", translation.propertyValue)
                .build()
            )
        }

        val content = builder.build().toString()

        val file = File(outputPath).resolve("${language.code}.kt")
        println("Writing generated code to $file")
        file.writer().use { it.write(content) }
    }
}
