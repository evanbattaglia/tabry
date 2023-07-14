{ config, lib, pkgs, ... }:

let

  cfg = config.programs.tabry;

  tabry = pkgs.callPackage ../default.nix {};
  tabryLang = pkgs.callPackage ../treesitter {};

  mkInitFish = fileName: let
    commandName = tabryLang.commandNameFromTabryFilename fileName;
  in ''
    tabry_completion_init ${commandName}
  '';

  compileTabryFiles = map tabryLang.compileTabryFile;

in {

  options.programs.tabry = {
    enable = lib.mkEnableOption "tabry, a tab completion library";
    enableFishIntegration = lib.mkEnableOption "enables fish completions";
    tabryFiles = lib.mkOption {
      type = with lib.types; listOf path;
      default = { };
      description = ''
        *.tabry files to be compiled to completion json
      '';
    };
  };

  config = lib.mkIf cfg.enable {
    home.packages = [tabry];

    # for each file, compile it to json
    # then add the dir to $TABRY_IMPORTS_PATH

    programs.fish.shellInit = lib.mkIf cfg.enableFishIntegration (
      let 
        tabryImportsPath = builtins.concatStringsSep ":" (compileTabryFiles cfg.tabryFiles);
      in ''
        set -x TABRY_IMPORTS_PATH "${builtins.trace tabryImportsPath tabryImportsPath}:$TABRY_IMPORTS_PATH"
        set -x TABRY_PATH ${tabry}
        source ${tabry}/sh/fish/tabry_fish.fish
        ${builtins.concatStringsSep "\n" (map mkInitFish cfg.tabryFiles)}
      ''
    );
  };
}