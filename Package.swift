// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MaaS",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "MaaS",
            targets: ["MaaS"]),
        .library(
            name: "MaasCore",
            targets: ["MaasCore"]),
        .library(
            name: "MaasTheme",
            targets: ["MaasTheme"]),
    ],
    dependencies: [
        .package(
            name: "Snapped",
            url: "git@github.com:trafi/snapped.git", .upToNextMinor(from: "0.0.1")),
        .package(
            name: "Swappable",
            url: "git@github.com:trafi/swappable.git", .upToNextMinor(from: "0.0.1")),
    ],
    targets: [
        // Used for production
        .binaryTarget(
            name: "MaasCore",
            url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev03/MaasCore.xcframework.zip",
            checksum: "4699b5d6ee92295ad19cfb90b5f7dc1bee3b17c954c262679af236046187d1b4"),
        // Used for development
//        .binaryTarget(
//            name: "MaasCore",
//            path: "common/core/build/bin/xcframework/MaasCore.xcframework"),
        .target(
            name: "MaaS",
            dependencies: ["MaasCore", "Snapped", "Swappable", "MaasTheme"],
            path: "ios/Sources/MaaS"),
        .testTarget(
            name: "MaasTests",
            dependencies: ["MaaS", .product(name: "SnapSpec", package: "Snapped")],
            path: "ios/Tests/MaasTests",
            exclude: ["__Snapshots__"]),
        .target(
            name: "MaasTheme",
            dependencies: ["MaasCore"],
            path: "ios/Sources/MaasTheme"),
    ]
)
