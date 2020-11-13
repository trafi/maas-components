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
    ],
    targets: [
        .binaryTarget(
            name: "MaasCore",
            url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev01/MaasCore.xcframework.zip",
            checksum: "85deadc84b588c66a15536e1377b98a86bb8e4045aa4b2f7aa91e5278cece37d"),
        .target(
            name: "MaaS",
            dependencies: ["MaasCore"],
            path: "ios/Sources/MaaS"),
    ]
)
