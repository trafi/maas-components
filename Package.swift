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
            type: .dynamic,
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
        .package(
            name: "swift-composable-architecture",
            url: "https://github.com/pointfreeco/swift-composable-architecture", from: "0.10.0"),
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
                "MaasCore",
                "MaasRouteSearch",
                "MaasNearbyTransit",
                "MaasAccount",
            ],
            path: "ios/Sources/Examples"
        ),
        .testTarget(
            name: "MaasTests",
            dependencies: [
                "Maas",
                "MaasRouteSearch",
                "MaasNearbyTransit",
                "MaasAccount",
                "SnapshotTesting",
                "Quick",
                .product(name: "ComposableArchitecture", package: "swift-composable-architecture")
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
                    name: "MaasCore",
                    type: .dynamic,
                    targets: ["CoreBinary", "MaasCore"]),
                .library(
                    name: "MaasTheme",
                    type: .dynamic,
                    targets: ["MaasTheme"]),
                .library(
                    name: "MaasComponents",
                    type: .dynamic,
                    targets: ["MaasComponents"]),
                .library(
                    name: "MaasRouteSearch",
                    type: .dynamic,
                    targets: ["MaasRouteSearch"]),
                .library(
                    name: "MaasNearbyTransit",
                    type: .dynamic,
                    targets: ["MaasNearbyTransit"]),
                .library(
                    name: "MaasAccount",
                    type: .dynamic,
                    targets: ["MaasAccount"]),
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
                    url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev03/CoreBinary.xcframework.zip",
                    checksum: "c8b376464436b341bd70847d70f7c4605b381006da33db495d40716323673b55"),
                .maasCoreTarget(name: "MaasCore", dependencies: [.product(name: "ComposableArchitecture", package: "swift-composable-architecture")]),
                .maasCoreTarget(name: "MaasTheme", dependencies: ["MaasCore"]),
                .maasCoreTarget(name: "MaasComponents", dependencies: ["MaasTheme", "MaasCore", "Swappable"]),
                .maasTarget(name: "MaasRouteSearch"),
                .maasTarget(name: "MaasNearbyTransit"),
                .maasTarget(name: "MaasAccount"),
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
                .package(path: "ios/MaasAccount"),
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
            dependencies: ["MaasCore", "MaasTheme", "MaasComponents", "Swappable"],
            path: "ios/\(name)/Sources",
            exclude: ["Package.resolved"]
        )
    }

    static func maasCoreTarget(name: String, dependencies: [Target.Dependency] = []) -> Target {
        .target(
            name: name,
            dependencies: dependencies + ["CoreBinary"],
            path: "ios/MaasCore/Sources/\(name)"
        )
    }
}
