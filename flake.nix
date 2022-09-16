{
  description = "Tabry";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-22.05";
  };

  outputs = { self, nixpkgs, flake-utils, ... }:
    let
      tabryHmModule = import ./nix/tabry-hm-module.nix flake-utils;
    in
      flake-utils.lib.eachDefaultSystem (
        system:
          let
            pkgs = nixpkgs.legacyPackages."${system}";
            tabry = import ./default.nix pkgs;
            tabryLang = import ./treesitter flake-utils pkgs;
          in {
            packages = {
              default = tabry;
              tabry = tabry;
              tabryc = tabryLang.tabryc;
            };
            apps = {
              tabryc = tabryLang.tabrycApp;
            };
          }
      ) // {
        homeModules = {
          tabry = tabryHmModule;
        };
      };
}