{
  description = "Tabry";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-22.05";
  };

  outputs = { self, nixpkgs, flake-utils, ... }:
    let
      tabryHmModule = import ./nix/tabry-hm-module.nix;
    in
      flake-utils.lib.eachDefaultSystem (
        system:
          let
            pkgs = nixpkgs.legacyPackages."${system}";
            tabry = pkgs.callPackage ./default.nix {};
            tabryLang = pkgs.callPackage ./treesitter {};
            withTabry = pkgs.callPackage ./nix/withTabry.nix {};
          in {
            packages = {
              default = tabry;
              tabry = tabry;
              tabryc = tabryLang.tabryc;
            };
            inherit withTabry;
            apps = {
              tabryc = flake-utils.lib.mkApp {
                drv = tabryLang.tabryc;
                name = "tabryc";
              };
            };
          }
      ) // {
        homeModules = {
          tabry = tabryHmModule;
        };
      };
}