package com.trafi.example

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.compose.Composable
import androidx.ui.core.setContent
import androidx.ui.foundation.Text
import androidx.ui.material.MaterialTheme
import androidx.ui.material.Surface
import androidx.ui.tooling.preview.Preview
import com.trafi.example.ui.MaasTheme

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContent {
            MaasTheme {
                // A surface container using the 'background' color from the theme
                Surface(color = MaterialTheme.colors.background) {
                    Greeting("Android")
                }
            }
        }

//        val moshi = Moshi.Builder()
//                .add(KotlinJsonAdapterFactory())
//                .build()
//        val routesService = Retrofit.Builder()
//                .addConverterFactory(MoshiConverterFactory.create(moshi))
//                .baseUrl("https://whitelabel-app-api-wl.trafi.dev.trafi.com/")
//                .build()
//                .create(RoutesService::class.java)
//        lifecycleScope.launch {
//            val result = routesService.search(
//                    startLat = 54.670394,
//                    startLng = 25.284265,
//                    endLat = 54.693161,
//                    endLng = 25.289088
//            )
//        }
    }
}

@Composable
fun Greeting(name: String) {
    Text(text = "Hello $name!")
}

@Preview(showBackground = true)
@Composable
fun DefaultPreview() {
    MaasTheme {
        Greeting("Android")
    }
}