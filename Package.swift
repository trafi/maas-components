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
    ],
    dependencies: [
        // Dependencies declare other packages that this package depends on.
//        .package(name: "shared", path: "common/shared/swift-package")
        .package(name: "shared", url: "git@github.com:trafi/maas-framework.git", .branch("main"))
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        .target(
            name: "MaaS",
            dependencies: [.product(name: "shared", package: "shared")],
            path: "ios/Sources/MaaS"),
        .testTarget(
            name: "MaaSTests",
            dependencies: ["MaaS"],
            path: "ios/Tests/MaaSTests"),
    ]
)