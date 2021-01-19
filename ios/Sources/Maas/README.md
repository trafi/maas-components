#  New Feature Package

1. Create new feature Package 📦. (e.x MaasTicketing) under ../ios/ folder.
2. Setup MaasTicketing Package.swift with necessary dependencies for local development.
```
let package = Package(
    ...
    dependencies: [
        // Dependencies declare other packages that this package depends on.
        .package(
            name: "MaasCore",
            path: "../MaasCore"),
        .package(...),
     ]
)
```
3. Update Maas Package.swift
- Update Examples target:
```
.target(
   ...,
   dependencies: [
      ...,
      "MaasTicketing",
   ],
   ...
),
```

- Update MaasTests testTarget:
```
.testTarget(
   ...,
   dependencies: [
      ...,
      "MaasTicketing",
   ],
   ...
),
```

4. Setup New Package for Development/Production environments.
- Add new products for production:
```
var products: [Product] {
   switch self {
   case .development:
      ...
   case .production:
      return [
         .library(...),
         .library(
             name: "MaasTicketing",
             targets: ["MaasTicketing"]),
      ]
   }
}
```

- Add new targets for production:
```
var targets: [Target] {
   switch self {
   case .development:
      ...
   case .production:
      return [
         .target(...),
         .target(
             name: "MaasTicketing",
             dependencies: ["MaasCore", "MaasTheme", "MaasComponents", ... ],
             path: "ios/MaasTicketing/Sources",
             exclude: ["Package.resolved"]),
      ]
   }
}
```

- Add new dependencies for development:
```
var dependencies: [Package.Dependency] {
   switch self {
   case .development:
      return [
         .package(...),
         .package(path: "ios/MaasTicketing"),
      ]
   case .production:
      ...
   }
}
```

#  Local Development

1. Open Maas scheme.
2. Go to Build Section -> Pre-Actions.
3. Change path in to your local sources directory.
```
cd ~/path/to/maas-components
./gradlew xcframeworkSimulator
```
