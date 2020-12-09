package com.trafi.routes.ui.mock

import androidx.ui.tooling.preview.PreviewParameterProvider
import com.trafi.core.model.RouteSegment
import com.trafi.core.model.mockSegment1
import com.trafi.core.model.mockSegment2
import com.trafi.core.model.mockSegment3

internal class RouteSegmentPreviewParameterProvider : PreviewParameterProvider<RouteSegment> {
    override val values: Sequence<RouteSegment>
        get() = sequenceOf(mockSegment1, mockSegment2, mockSegment3)
}
