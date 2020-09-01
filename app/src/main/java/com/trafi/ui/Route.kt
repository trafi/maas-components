package com.trafi.ui

import androidx.compose.foundation.Box
import androidx.compose.foundation.Image
import androidx.compose.foundation.Text
import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.Row
import androidx.compose.foundation.layout.Spacer
import androidx.compose.foundation.layout.fillMaxHeight
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.layout.size
import androidx.compose.foundation.shape.RoundedCornerShape
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Surface
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.graphics.Color
import androidx.compose.ui.graphics.ColorFilter
import androidx.compose.ui.res.imageResource
import androidx.compose.ui.unit.dp
import androidx.ui.tooling.preview.Preview
import androidx.ui.tooling.preview.PreviewParameter
import androidx.ui.tooling.preview.PreviewParameterProvider
import com.trafi.core.model.*
import com.trafi.example.R
import com.trafi.example.ui.MaasTheme

@Composable
fun Route(route: Route) {
    Card {
        Column {
            Row {
                route.segments.forEachIndexed { index, segment ->
                    RouteSegment(segment)
                    if (index != route.segments.lastIndex) {
                        Spacer(modifier = Modifier.size(4.dp))
                    }
                }
            }
            route.disruption?.title?.let { disruptionTitle ->
                Row {
                    Text(route.disruption.severity.toString())
                    Spacer(modifier = Modifier.size(4.dp))
                    Text(disruptionTitle)
                }
            }
        }
    }
}

@Preview(showBackground = true)
@Composable
fun RoutePreview() {
    MaasTheme {
        Route(mockRoute)
    }
}

@Composable
fun RouteSegment(segment: RouteSegment) {
    when (segment.mode) {
        RouteSegmentMode.TRANSIT -> {
            val transit = segment.transit ?: return
            val color = Color(android.graphics.Color.parseColor("#" + transit.schedule.color))
//            val image = imageResource(R.drawable.providers_bus_xs)
            Surface(
                color = color,
                contentColor = Color.White,
                shape = RoundedCornerShape(4.dp)
            ) {
                Row {
//                    Image(image, colorFilter = ColorFilter.tint(Color.White))
//                    Box(
//                        backgroundColor = Color.White,
//                        modifier = Modifier.size(1.dp, 0.dp).fillMaxHeight()
//                    )
                    Text(
                        text = transit.schedule.name,
                        style = MaterialTheme.typography.body2,
                        modifier = Modifier.padding(4.dp)
                    )
                }
            }
        }
        RouteSegmentMode.WALKING -> {
            Text(text = segment.mode.toString())
        }
    }
}

class RouteSegmentPreviewParameterProvider : PreviewParameterProvider<RouteSegment> {
    override val values: Sequence<RouteSegment>
        get() = sequenceOf(mockSegment1, mockSegment2, mockSegment3)
}

@Preview(showBackground = true)
@Composable
fun RouteSegmentPreview(@PreviewParameter(RouteSegmentPreviewParameterProvider::class) segment: RouteSegment) {
    MaasTheme {
        RouteSegment(segment)
    }
}

val mockSegment1: RouteSegment = RouteSegment(
    id = "22d256d8-14bb-4fd8-b27a-763aaaf967b7",
    mode = RouteSegmentMode.WALKING,
    start = Location(
        coordinate = LatLng(52.521981, 13.413306)
    ),
    end = Location(
        coordinate = LatLng(52.522808, 13.40992),
        name = "S+U Alexanderplatz Bhf/Memhardstr."
    ),
    startTime = "2020-07-31T09:16:15+02:00",
    endTime = "2020-07-31T09:20:00+02:00",
    shape = "keq_IexzpA[OCFOb@IRGPUn@M`@Uh@{@vBm@tAA`@CDEJGLABCDCBEJDFn@jAXf@Xh@EV",
    walking = RouteSegmentWalking(
        distance = Distance(meters = 328, text = "328 m"),
        paths = listOf(
            WalkingPath(
                distance = Distance(meters = 328, text = "328 m"),
                startTime = "2020-07-31T09:16:15+02:00",
                endTime = "2020-07-31T09:20:00+02:00",
                start = Location(
                    coordinate = LatLng(52.521981, 13.413306)
                ),
                end = Location(
                    coordinate = LatLng(52.522808, 13.40992),
                    name = "S+U Alexanderplatz Bhf/Memhardstr."
                ),
                shape = "keq_IexzpA[OCFOb@IRGPUn@M`@Uh@{@vBm@tAA`@CDEJGLABCDCBEJDFn@jAXf@Xh@EV",
                walkType = WalkType.REGULAR
            )
        )
    )
)

val debeBvgbusTransport: Transport = Transport(
    id = "debe_bvgbus",
    name = "BVG Bus",
    namePlural = "BVG Buses",
    icon = "bus",
    color = "95276E"
)

val mockSegment2: RouteSegment = RouteSegment(
    id = "05d7a74c-7ba8-46af-b771-47148e3b049c",
    mode = RouteSegmentMode.TRANSIT,
    start = Location(
        coordinate = LatLng(52.522808, 13.40992),
        name = "S+U Alexanderplatz Bhf/Memhardstr."
    ),
    end = Location(
        coordinate = LatLng(52.509485, 13.373982),
        name = "Varian-Fry-Str./Potsdamer Platz"
    ),
    startTime = "2020-07-31T09:22:00+02:00",
    endTime = "2020-07-31T09:41:00+02:00",
    shape = "kjq_IcczpA??Tb@Vj@HPnA~C\\v@n@dB|BzFl@xA??BHdC~FVd@l@gARw@hDsFJTKU`@q@`@Wx@sAZu@|CyEf@YV_@PPv@PjBxB\\p@Vp@nEhF`BvBhB|C??v@lAPVrGrKx@tAb@vAVnAJx@Fb@@l@??@HFrA@d@FtBLrFVlJBpB??FjALbGF|BLxD@RBPNJFJ@NJn@?LBXNhE?j@?\\??HnBDnBDtABhA?FHz@B|A?rADz@BpAVxJ?H?TDlAJrEBxA??DfA\\fND~@DrADhB@p@??Bx@Dv@Af@BjAB`CXnIDzA??Bh@",
    transit = RouteSegmentTransit(
        providerId = "sts",
        schedule = Schedule(
            id = "debe_17350_700",
            name = "200",
            longName = "Hertzallee - Prenzlauer Berg, Michelangelostr.",
            color = "95276E",
            transport = debeBvgbusTransport,
            transportId = "debe_bvgbus",
            transportType = "bus"
        ),
        track = Track(
            id = "2-070101005461-070101007309-070101003687",
            destination = "S+U Zoologischer Garten via Potsdamer Platz",
            name = "Prenzlauer Berg, Michelangelostr. - S+U Zoologischer Garten",
            shape = "cau_I{mbqARk@DOAKiAoAESB]hBmGJWVSVIZDVPvHlNf@fAj@|@LR??`@`@TX`BrCpCdFN^|A|C??lOzX??DFtBvD",
            direction = TrackDirection.BACKWARD,
            visible = true
        ),
        stops = listOf(
            RouteSegmentStop(
                Stop(
                    id = "debe_070101007153",
                    name = "S+U Alexanderplatz Bhf/Memhardstr.",
                    direction = "Spandauer Str./Marienkirche",
                    regionId = "berlin",
                    location = LatLng(52.522808, 13.40992),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100031"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101007309",
                    name = "Spandauer Str./Marienkirche",
                    direction = "Lustgarten",
                    regionId = "berlin",
                    location = LatLng(52.520877, 13.406071),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100515"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101007373",
                    name = "Berliner Rathaus",
                    direction = "Fischerinsel",
                    regionId = "berlin",
                    location = LatLng(52.518771, 13.40632),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100045"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101005179",
                    name = "Fischerinsel",
                    direction = "U Spittelmarkt",
                    regionId = "berlin",
                    location = LatLng(52.513773, 13.405061),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100526"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101005263",
                    name = "U Spittelmarkt",
                    direction = "Jerusalemer Str.",
                    regionId = "berlin",
                    location = LatLng(52.511307, 13.400528),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100013"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101005180",
                    name = "Jerusalemer Str.",
                    direction = "U Stadtmitte",
                    regionId = "berlin",
                    location = LatLng(52.511013, 13.395679),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100527"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101005181",
                    name = "U Stadtmitte",
                    direction = "Leipziger Str./Wilhelmstr.",
                    regionId = "berlin",
                    location = LatLng(52.510469, 13.390409),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100528"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101005182",
                    name = "Leipziger Str./Wilhelmstr.",
                    direction = "S+U Potsdamer Platz",
                    regionId = "berlin",
                    location = LatLng(52.510101, 13.384505),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100535"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101006844",
                    name = "S+U Potsdamer Platz",
                    direction = "Varian-Fry-Str./Potsdamer Platz",
                    regionId = "berlin",
                    location = LatLng(52.509735, 13.37812),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000100721"
                )
            ),
            RouteSegmentStop(
                Stop(
                    id = "debe_070101002075",
                    name = "Varian-Fry-Str./Potsdamer Platz",
                    direction = "Kulturforum",
                    regionId = "berlin",
                    location = LatLng(52.509485, 13.373982),
                    type = StopType.REGULAR,
                    exits = emptyList(),
                    transports = listOf(debeBvgbusTransport),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000005208"
                )
            )
        ),
        exactDeparture = RouteExactDeparture(
            time = "2020-07-31T09:22:00+02:00",
            isRealtime = false
        ),
        alternatives = listOf()
    ),
    fareId = "08b66834-5d0b-4225-bb2e-0d9e73fe0032",
    disruption = RouteSegmentDisruption(severity = DisruptionSeverity.INFORMATION)
)

val mockSegment3: RouteSegment = RouteSegment(
    id = "e167519e-0e52-4315-a61e-b37fd84e923d",
    mode = RouteSegmentMode.WALKING,
    start = Location(
        coordinate = LatLng(52.509485, 13.373982),
        name = "Varian-Fry-Str./Potsdamer Platz"
    ),
    end = Location(
        coordinate = LatLng(52.509649, 13.373755)
    ),
    startTime = "2020-07-31T09:41:00+02:00",
    endTime = "2020-07-31T09:41:00+02:00",
    shape = "gwn_IkbspA?L?@a@Z",
    walking = RouteSegmentWalking(
        distance = Distance(meters = 27, text = "27 m"),
        paths = listOf(
            WalkingPath(
                distance = Distance(meters = 27, text = "27 m"),
                startTime = "2020-07-31T09:41:00+02:00",
                endTime = "2020-07-31T09:41:00+02:00",
                start = Location(
                    coordinate = LatLng(52.509485, 13.373982),
                    name = "Varian-Fry-Str./Potsdamer Platz"
                ),
                end = Location(
                    coordinate = LatLng(52.509649, 13.373755)
                ),
                shape = "gwn_IkbspA?L?@a@Z",
                walkType = WalkType.REGULAR
            )
        )
    )
)

val mockRoute = Route(
    id = "60cbd9dd-7885-4547-816e-229a3c7bcf34",
    groupId = "public",
    fare = RouteFare(
        total = Money(
            amount = 2.9,
            currency = "EUR",
            text = "€2.90"
        ),
        fares = listOf(
            Fare(
                id = "08b66834-5d0b-4225-bb2e-0d9e73fe0032",
                price = Money(
                    amount = 2.9,
                    currency = "EUR",
                    text = "€2.90"
                )
            )
        )
    ),
    segments = listOf(
        mockSegment1,
        mockSegment2,
        mockSegment3
    ),
    startTime = "2020-07-31T09:16:15+02:00",
    endTime = "2020-07-31T09:41:00+02:00",
    duration = Duration(seconds = 1485, text = "25 min"),
    isAvailable = true,
    firstTransitSegmentExactDepartures = listOf(
        RouteExactDeparture(
            time = "2020-07-31T09:22:00+02:00",
            isRealtime = false
        )
    ),
    labelKey = "optimal",
    disruption = RouteDisruption(
        severity = DisruptionSeverity.INFORMATION,
        title = "Archäologische Ausgrabungen",
        disruptions = listOf(
            Disruption(
                severity = DisruptionSeverity.INFORMATION,
                title = "Archäologische Ausgrabungen",
                description = "Bus 200: Haltestelle Nikolaiviertel ist (in Richtung Hertzallee) aufgehoben.",
                fromTime = "2019-08-04T04:00:00+02:00",
                eventId = "940290",
                affectedSchedules = listOf(
                    AffectedSchedule(
                        Schedule(
                            id = "debe_17350_700",
                            name = "200",
                            longName = "Hertzallee - Prenzlauer Berg, Michelangelostr.",
                            color = "95276E",
                            transport = debeBvgbusTransport,
                            transportId = "deve_bvgbus"
                        )
                    )
                )
            )
        )
    )
)
