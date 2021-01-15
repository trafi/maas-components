// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MaasCore",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "MaasCore",
            targets: ["MaasCore", "MaasComponents", "MaasTheme"]),
    ],
    dependencies: [
        .package(
            name: "Swappable",
            url: "https://github.com/trafi/swappable.git", .upToNextMinor(from: "0.0.1")),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
         .binaryTarget(
             name: "Core",
             path: "Sources/MaasCore/Core.xcframework"),
        //.binaryTarget(
        //    name: "Core",
        //    url: "https://github.com/trafi/maas-components/releases/download/0.1.0-dev06/MaasCore.xcframework.zip",
        //    checksum: "d22ef85f0be67f6bf54267d4e1924fedc94ad54377281db250d2465e8e1b8448"),
        .target(
            name: "MaasCore",
            dependencies: ["Core", "MaasTheme", "MaasComponents"],
            path: "Sources/MaasCore"),
        .target(
            name: "MaasTheme",
            dependencies: ["Swappable"],
            path: "Sources/MaasTheme"),
        .target(
            name: "MaasComponents",
            dependencies: ["MaasTheme", "Swappable"],
            path: "Sources/MaasComponents"),
    ]
)
