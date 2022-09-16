flake-utils: { config, lib, pkgs, ... }:

with lib;

let

  cfg = config.programs.tabry;

  tabry = import ../default.nix pkgs;
  tabryLang = import ../treesitter flake-utils pkgs;

  mkInitFish = fileName: let
    commandName = tabryLang.commandNameFromTabryFilename fileName;
  in ''
    tabry_completion_init ${commandName}
  '';

  compileTabryFiles = map tabryLang.compileTabryFile;

in {

  options.programs.tabry = {
    enable = mkEnableOption "tabry, a tab completion library";
    enableFishIntegration = mkEnableOption "enables fish completions";
    tabryFiles = mkOption {
      type = with types; listOf path;
      default = { };
      description = ''
        *.tabry files to be compiled to completion json
      '';
    };
  };

  config = mkIf cfg.enable {
    home.packages = [tabry];

    # for each file, compile it to json
    # then add the dir to $TABRY_IMPORTS_PATH

    programs.fish.shellInit = mkIf cfg.enableFishIntegration (
      let 
        tabryImportsPath = builtins.concatStringsSep ":" (compileTabryFiles cfg.tabryFiles);
      in ''
        set -x TABRY_IMPORTS_PATH "${builtins.trace tabryImportsPath tabryImportsPath}:$TABRY_IMPORTS_PATH"
        source ${tabry}/sh/fish/tabry_fish.fish
        ${builtins.concatStringsSep "\n" (map mkInitFish cfg.tabryFiles)}
      ''
    );
  };
}