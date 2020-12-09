package com.trafi.routes.internal

import com.trafi.core.model.Location

internal val Location?.displayText: String
    get() = this?.run {
        name
            ?: address
            ?: coordinate.run { "$lat,$lng" }
    } ?: ""
