package com.trafi.example.dagger

import com.trafi.example.PreviewTest
import dagger.Component
import javax.inject.Singleton

@Singleton
@Component(
    modules = [
        TestModule::class
    ]
)
interface TestComponent  {
    @Component.Factory
    interface Factory {
        fun create(): TestComponent
    }

    fun inject(tests: PreviewTest)
}

