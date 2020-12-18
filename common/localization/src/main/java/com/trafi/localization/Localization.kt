package com.trafi.localization

import com.github.ajalt.clikt.core.CliktCommand
import com.github.ajalt.clikt.parameters.options.default
import com.github.ajalt.clikt.parameters.options.option
import com.github.ajalt.clikt.parameters.options.required
import com.trafi.localization.poeditor.PoEditorClient
import kotlinx.coroutines.runBlocking
import java.io.File

fun main(args: Array<String>) = Localization().main(args)

class Localization : CliktCommand() {
    private val projectId: String by option().required()
    private val apiKey: String by option().required()
    private val outputPath: String by option().default(defaultOutputPath)

    private val defaultOutputPath
        get() = File("").absolutePath +
                "/../core/src/commonMain/kotlin/com/trafi/core/localization"

    override fun run() {
        runBlocking {
            LocalizationManager(
                PoEditorClient(
                    apiKey = apiKey,
                    projectId = projectId
                ), outputPath = outputPath
            ).generate()
        }
    }
}
