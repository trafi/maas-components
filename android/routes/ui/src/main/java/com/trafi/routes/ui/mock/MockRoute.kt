package com.trafi.routes.ui.mock

import androidx.ui.tooling.preview.PreviewParameterProvider
import com.trafi.core.android.model.AffectedSchedule
import com.trafi.core.android.model.Disruption
import com.trafi.core.android.model.Distance
import com.trafi.core.android.model.Duration
import com.trafi.core.android.model.Fare
import com.trafi.core.android.model.LatLng
import com.trafi.core.android.model.Location
import com.trafi.core.android.model.Money
import com.trafi.core.android.model.Route
import com.trafi.core.android.model.RouteDisruption
import com.trafi.core.android.model.RouteExactDeparture
import com.trafi.core.android.model.RouteFare
import com.trafi.core.android.model.RouteSegment
import com.trafi.core.android.model.RouteSegmentDisruption
import com.trafi.core.android.model.RouteSegmentStop
import com.trafi.core.android.model.RouteSegmentTransit
import com.trafi.core.android.model.RouteSegmentWalking
import com.trafi.core.android.model.RoutesResult
import com.trafi.core.android.model.Schedule
import com.trafi.core.android.model.Stop
import com.trafi.core.android.model.Track
import com.trafi.core.android.model.WalkingPath

internal class RouteSegmentPreviewParameterProvider : PreviewParameterProvider<RouteSegment> {
    override val values: Sequence<RouteSegment>
        get() = sequenceOf(mockSegment1, mockSegment2, mockSegment3)
}

// val debeBvgbusTransport: Transport = Transport(
//     id = "debe_bvgbus",
//     name = "BVG Bus",
//     namePlural = "BVG Buses",
//     icon = "bus",
//     color = "95276E"
// )

internal val mockSegment1: RouteSegment = RouteSegment(
    id = "22d256d8-14bb-4fd8-b27a-763aaaf967b7",
    mode = RouteSegment.Mode.WALKING,
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
                walkType = WalkingPath.WalkType.REGULAR
            )
        )
    )
)

internal val mockSegment2: RouteSegment = RouteSegment(
    id = "05d7a74c-7ba8-46af-b771-47148e3b049c",
    mode = RouteSegment.Mode.TRANSIT,
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
    shape = "kjq_IcczpA??Tb@Vj@HPnA~C\\v@n@dB|BzFl@xA??BHdC~FVd@l@gARw@hDsFJTKU`" +
        "@q@`@Wx@sAZu@|CyEf@YV_@PPv@PjBxB\\p@Vp@nEhF`BvBhB|C??v@lAPVrGrKx@tAb@vA" +
        "VnAJx@Fb@@l@??@HFrA@d@FtBLrFVlJBpB??FjALbGF|BLxD@RBPNJFJ@NJn@?LBXNhE?j@" +
        "?\\??HnBDnBDtABhA?FHz@B|A?rADz@BpAVxJ?H?TDlAJrEBxA??DfA\\fND~@DrADhB@p@" +
        "??Bx@Dv@Af@BjAB`CXnIDzA??Bh@",
    transit = RouteSegmentTransit(
        schedule = Schedule(
            id = "debe_17350_700",
            name = "200",
            longName = "Hertzallee - Prenzlauer Berg, Michelangelostr.",
            color = "95276E",
            transportId = "debe_bvgbus",
            transportType = "bus"
        ),
        track = Track(
            id = "2-070101005461-070101007309-070101003687",
            destination = "S+U Zoologischer Garten via Potsdamer Platz",
            name = "Prenzlauer Berg, Michelangelostr. - S+U Zoologischer Garten",
            shape = "cau_I{mbqARk@DOAKiAoAESB]hBmGJWVSVIZDVPvHlNf@fAj@|@LR??`@`" +
                "@TX`BrCpCdFN^|A|C??lOzX??DFtBvD",
            direction = Track.Direction.BACKWARD,
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
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
                    type = Stop.Type.REGULAR,
                    exits = emptyList(),
                    transportIds = listOf("debe_bvgbus"),
                    parentId = "debe_900000005208"
                )
            )
        ),
        exactDeparture = RouteExactDeparture(
            time = "2020-07-31T09:22:00+02:00",
            isRealtime = false
        ),
        exactAlternativeDepartures = emptyList(),
        alternatives = listOf()
    ),
    fareId = "08b66834-5d0b-4225-bb2e-0d9e73fe0032",
    disruption = RouteSegmentDisruption(severity = RouteSegmentDisruption.Severity.INFORMATION)
)

internal val mockSegment3: RouteSegment = RouteSegment(
    id = "e167519e-0e52-4315-a61e-b37fd84e923d",
    mode = RouteSegment.Mode.WALKING,
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
                walkType = WalkingPath.WalkType.REGULAR
            )
        )
    )
)

internal val mockRoute = Route(
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
    labelKey = "optimal",
    disruption = RouteDisruption(
        severity = RouteDisruption.Severity.INFORMATION,
        title = "Archäologische Ausgrabungen",
        disruptions = listOf(
            Disruption(
                severity = Disruption.Severity.INFORMATION,
                title = "Archäologische Ausgrabungen",
                description = "Bus 200: Haltestelle Nikolaiviertel ist " +
                    "(in Richtung Hertzallee) aufgehoben.",
                fromTime = "2019-08-04T04:00:00+02:00",
                toTime = "2100-01-01T00:00:00+02:00",
                eventId = "940290",
                affectedSchedules = listOf(
                    AffectedSchedule(
                        Schedule(
                            id = "debe_17350_700",
                            name = "200",
                            longName = "Hertzallee - Prenzlauer Berg, Michelangelostr.",
                            color = "95276E",
                            transportId = "deve_bvgbus"
                        )
                    )
                )
            )
        )
    )
)

internal val mockResult = RoutesResult(
    id = "08b66834-5d0b-4225-bb2e-0d9e73fe0034",
    now = "2020-07-31T09:16:15+02:00",
    routes = listOf(mockRoute, mockRoute.copy(id = "60cbd9dd-7885-4547-816e-229a3c7bcf35")),
    groups = null
)
