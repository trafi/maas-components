// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

// MARK: - Setup

private let environment: Environment = .production

let package = Package(
    name: "Maas",
    platforms: [ 
        .iOS(.v13),
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "Maas",
            targets: ["Maas", "Examples"]),
    ] + environment.products,
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(
            name: "Swappable",
            url: "https://github.com/trafi/swappable.git", .upToNextMinor(from: "0.0.1")),
        .package(
            name: "SnapshotTesting",
            url: "https://github.com/pointfreeco/swift-snapshot-testing.git", from: "1.8.2"),
        .package(
            name: "Quick",
            url: "https://github.com/Quick/Quick.git", from: "3.0.0"),
    ] + environment.dependencies,
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "Maas",
            dependencies: ["Swappable"],
            path: "ios/Sources/Maas"),
        .target(
            name: "Examples",
            dependencies: [
                "MaasRouteSearch",
                "MaasNearbyTransit",
            ],
            path: "ios/Sources/Examples"
        ),
        .testTarget(
            name: "MaasTests",
            dependencies: [
                "Maas",
                "MaasRouteSearch",
                "MaasNearbyTransit",
                "SnapshotTesting",
                "Quick"
            ],
            path: "ios/Tests/MaasTests",
            exclude: ["__Snapshots__"]), 
    ] + environment.targets
)

// MARK: - Environment

private enum Environment {
    case development, production
}

private extension Environment {

    var products: [Product] {
        switch self {
        case .development:
            return [
                // --
            ]
        case .production:
            return [
                .library(
                    name: "MaasRouteSearch",
                    targets: ["MaasRouteSearch"]),
                .library(
                    name: "MaasNearbyTransit",
                    targets: ["MaasNearbyTransit"]),
           ]
        }
    }

    var targets: [Target] {
        switch self {
        case .development:
            return [
                // --
            ]
        case .production:
            return [ 
                .binaryTarget(
                    name: "CoreBinary",
                    url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev07/CoreBinary.xcframework.zip",
                    checksum: "50308f39f322be329f65b12f24340d7de22094973dac9159a1c753d1a069e138"),
                .target(
                    name: "MaasTheme",
                    dependencies: ["Swappable"],
                    path: "ios/MaasCore/Sources/MaasTheme"),
                .target(
                    name: "MaasComponents",
                    dependencies: ["MaasTheme", "Swappable"],
                    path: "ios/MaasCore/Sources/MaasComponents"),
                .maasTarget(name: "MaasNearbyTransit"),
                .maasTarget(name: "MaasRouteSearch"),
            ]
        }
    }

    var dependencies: [Package.Dependency] {
        switch self {
        case .development:
            return [
                .package(path: "ios/MaasCore"),
                .package(path: "ios/MaasRouteSearch"),
                .package(path: "ios/MaasNearbyTransit"),
            ] 
        case .production:
            return [
                // --
            ]
        }
    }
}

private extension Target {

    static func maasTarget(name: String) -> Target {
        .target(
            name: name,
            dependencies: ["CoreBinary", "MaasTheme", "MaasComponents", "Swappable"],
            path: "ios/\(name)/Sources",
            exclude: ["Package.resolved"]
        )
    }
}
