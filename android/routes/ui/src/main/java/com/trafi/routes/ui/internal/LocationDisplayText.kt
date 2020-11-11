package com.trafi.routes.ui.internal

import com.trafi.core.android.model.Location

internal val Location?.displayText: String
    get() = this?.run {
        name
            ?: address
            ?: coordinate.run { "$lat,$lng" }
    } ?: ""
