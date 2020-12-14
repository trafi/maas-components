package com.trafi.example.dagger

import androidx.compose.ui.test.junit4.ComposeTestRule
import androidx.compose.ui.test.junit4.createComposeRule
import dagger.Module
import dagger.Provides

@Module
object TestModule {
    @[Provides JvmStatic]
    fun providesComposeTestRule(): ComposeTestRule = createComposeRule()
}