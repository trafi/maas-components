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
            ],
            path: "ios/Sources/Examples"
        ),
        .testTarget(
            name: "MaasTests",
            dependencies: [
                "Maas",
                "MaasRouteSearch",
                "SnapshotTesting",
                "Quick"
            ],
            path: "ios/Tests/MaasTests",
            exclude: ["__Snapshots__"]), 
    ] + environment.targets 
)

// MARK: - Environment

private enum Environment {
    case development
    case production
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
                    targets: ["MaasCore"]),
               .library(
                   name: "MaasRouteSearch",
                   targets: ["MaasRouteSearch"]),
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
                    name: "MaasCore",
                    url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev06/MaasCore.xcframework.zip",
                    checksum: "d22ef85f0be67f6bf54267d4e1924fedc94ad54377281db250d2465e8e1b8448"),
                .target(
                    name: "MaasTheme", 
                    dependencies: ["Swappable"],
                    path: "ios/MaasCore/Sources/MaasTheme"),
                .target(
                    name: "MaasComponents",
                    dependencies: ["MaasTheme", "Swappable"],
                    path: "ios/MaasCore/Sources/MaasComponents"), 
                .target(
                    name: "MaasRouteSearch",
                    dependencies: ["MaasCore", "MaasTheme", "MaasComponents", "Swappable"],
                    path: "ios/MaasRouteSearch/Sources",
                    exclude: ["Package.resolved"]),
            ]
        } 
    }

    var dependencies: [Package.Dependency] {
        switch self {
        case .development:
            return [
                .package(path: "ios/MaasCore"),
                .package(path: "ios/MaasRouteSearch"),
            ] 
        case .production:
            return [
                // --
            ]
        }
    }
}
