package com.trafi.routes.data

import com.trafi.core.model.RoutesResult

class TabState {



    fun bindTabItems(routesResult: RoutesResult){

    }

}

data class TabItem(
    val id: String,
    val icon: String,
    val name: String,
    val duration: String?,
    val price: String?,
    val active: Boolean
)
