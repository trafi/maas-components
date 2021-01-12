enum NearbyTransitComponentsPreviewData {

    static let stop = Stop(
        id: "debe_070101005179",
        name: "Fischerinsel",
        regionId: "berlin",
        location: LatLng(lat: 52.513773, lng: 13.405061),
        type: .regular,
        exits: [],
        transportIds: ["debe_bvgbus"],
        address: "",
        direction: "U Spittelmarkt",
        parentId: "",
        zoneId: "debe_A",
        platformCode: "platformCode"
    )

    static let track = Track(
        id: "2-070101005461-070101007309-070101003687",
        destination: "S+U Zoologischer Garten",
        name: "Prenzlauer Berg, Michelangelostr. - S+U Zoologischer Garten",
        shape: "cau_I{mbqARk@DOAKiAoAESB]hBmGJWVSVIZDVPvHlNf@fAj@|@LR??`@`@TX`BrCpCdFN^|A|C??lOzX??DFtBvD\\n@|EzI`@t@rAbC??BFjKfRJVDVVjEBb@??hCnc@JhB?H??tAbV??b@tG?PCRCZGbA?n@Hp@Vb@T`@rJzNFJ??bBxBFP@J@JCNCNQj@yAvEITaArCWp@Wx@_AlCI^EV?V?VDX@JDJ^d@FHZZh@d@NL??dAlA`C~C~@pAf@h@~AzBV`@^f@p@bAX\\V`@JJ`@n@JPJ\\~@hBJLFLL^??Tb@Vj@HPnA~C\\v@n@dB|BzFl@xA??BHdC~FVd@l@gARw@hDsFJTKU`@q@`@Wx@sAZu@|CyEf@YV_@PPv@PjBxB\\p@Vp@nEhF`BvBhB|C??v@lAPVrGrKx@tAb@vAVnAJx@Fb@@l@??@HFrA@d@FtBLrFVlJBpB??FjALbGF|BLxD@RBPNJFJ@NJn@?LBXNhE?l@?Z??HnBDnBDtABhA?FHz@B|A?rADz@BpAVxJ?H?TDlAJrEBxA??DfA\\fND~@DrADhB@p@??Bx@Dv@Af@BjAB`CXnIDzA??Bh@Dz@VdIF|BBh@@RDh@DVJX`@jAT^Pf@JX@H@D?D?FA@]|A]xAi@jDqD_B}@_@u@?MFfCfXl@fGOhM?nAErFAnAC`BBnDH`En@hPA^?nAQrBEd@Ap@BzAJlBN`B??Hp@Nl@Tr@^j@`@Zb@R^Db@Ph@Tf@`@h@b@j@t@??NT\\f@j@tA\\pALr@Lz@p@|FLlA??RzAvA~LBNNr@LtAH`@DPJNFJLJVHXDLHHF@JAPGVIj@C`@Ch@A~@@`ABl@FlAJhAHhA@f@Bp@?|@C|@IpAA`@AP??Cn@_@tJG`@SbAWp@g@|@q@nBm@bB_@hACH",
        direction: .backward,
        visible: true
    )

    static let exactDeparture = ExactDeparture(
        time: "2020-12-11T14:51:00+01:00",
        isRealtime: false,
        tags: ["accessible"],
        tripId: "eyJTdG9wSWQiOiJkZWJlXzA3MDEwMTAwNTE3OSIsIlNjaGVkdWxlSWQiOiJkZWJlXzE3MzUwXzcwMCIsIlRyYWNrSWQiOiIyLTA3MDEwMTAwNTQ2MS0wNzAxMDEwMDczMDktMDcwMTAxMDAzNjg3IiwiSXNSZWFsdGltZSI6ZmFsc2UsIlZlaGljbGVJZCI6bnVsbCwiU2Vjb25kc1NpbmNlTWlkbmlnaHQiOjUxOTYwLCJXZWVrZGF5c0lkIjozMiwiRGVwYXJ0dXJlVGltZXN0YW1wIjoxNjA3Njk0NjYwfQ==",
        destination: "S+U Zoologischer Garten",
        disruption: .init(severity: .notAffected)
    )

    static let trackWithDeparturesDisruption = TrackWithDeparturesDisruption(
        severity: .notAffected
    )

    static let trackWithDepartures = TrackWithDepartures(
        track: track,
        exactDepartures: [exactDeparture],
        disruption: nil
    )

    static func scheduleWithDepartures(name: String, color: String = "95276E") -> ScheduleWithDepartures {
        .init(
            schedule: Schedule(
                id: "debe_17350_700",
                name: name,
                color: color,
                transportId: "transport\(color)",
                longName: "Hertzallee - Prenzlauer Berg, Michelangelostr.",
                textColor: nil,
                transportType: nil
            ),
            trackDepartures: [trackWithDepartures]
        )
    }

    static let stopWithSchedulesWithDepartures = StopWithSchedulesWithDepartures(
        stop: stop,
        now: "2020-12-11T14:44:42+01:00",
        scheduleDepartures: [
            scheduleWithDepartures(name: "200"),
            scheduleWithDepartures(name: "248"),
            scheduleWithDepartures(name: "265"),
            scheduleWithDepartures(name: "265"),
            scheduleWithDepartures(name: "310", color: "45935D"),
            scheduleWithDepartures(name: "320", color: "45935D"),
            scheduleWithDepartures(name: "365", color: "45935D"),
            scheduleWithDepartures(name: "310", color: "45935D"),
            scheduleWithDepartures(name: "320", color: "45935D"),
            scheduleWithDepartures(name: "900", color: "45935D"),
        ]
    )

    static let mockFilterDataItems: [FilterItem] = MockFiltersKt.mockFilters
}

extension StopWithSchedulesWithDepartures: Identifiable { }
extension StopWithSchedulesWithDepartures {
    public var id: UUID { UUID() }
}
