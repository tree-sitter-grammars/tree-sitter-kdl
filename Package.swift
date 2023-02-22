// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterKDL",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterKDL", targets: ["TreeSitterKDL"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterKDL",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "test",
                    "examples",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
                    "script",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.c",
                ],
                resources: [
                    .copy("queries")
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
