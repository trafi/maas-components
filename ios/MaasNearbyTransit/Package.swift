// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MaasNearbyTransit",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "MaasNearbyTransit",
            targets: ["MaasNearbyTransit"]),
    ],
    dependencies: [
        .package(
            name: "Swappable",
            url: "https://github.com/trafi/swappable.git", .upToNextMinor(from: "0.0.1")),
        .package(
            name: "MaasCore",
            path: "../MaasCore"),
    ], 
    targets: [
        .target(
            name: "MaasNearbyTransit",
            dependencies: ["MaasCore", "Swappable"]),
        .testTarget(
            name: "MaasNearbyTransitTests",
            dependencies: ["MaasNearbyTransit"]),
    ]
)
