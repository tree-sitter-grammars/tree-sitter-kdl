use std::env::var;
use std::path::Path;

fn main() {
    let src_dir = Path::new("src");

    let mut c_config = cc::Build::new();
    c_config.std("c11").include(src_dir);

    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    if var("TARGET").unwrap() == "wasm32-unknown-unknown" {
        let Ok(wasm_headers) = var("DEP_TREE_SITTER_LANGUAGE_WASM_HEADERS") else {
            panic!(
                "Environment variable DEP_TREE_SITTER_LANGUAGE_WASM_HEADERS must be set by the language crate"
            );
        };

        c_config.include(&wasm_headers);
    }

    let parser_path = src_dir.join("parser.c");
    c_config.file(&parser_path);
    println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());

    let scanner_path = src_dir.join("scanner.c");
    if scanner_path.exists() {
        c_config.file(&scanner_path);
        println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    }

    c_config.compile("tree-sitter-kdl");

    let query_configs = [
        ("with_highlights_query", "queries/highlights.scm"),
        ("with_injections_query", "queries/injections.scm"),
        ("with_locals_query", "queries/locals.scm"),
    ];
    for (config, path) in query_configs {
        println!("cargo:rustc-check-cfg=cfg({config})");
        if Path::new(path).exists() {
            println!("cargo:rustc-cfg={config}");
        }
    }
}
