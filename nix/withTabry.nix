{lib, callPackage, stdenv, installShellFiles, ruby}:
let 
  tabry = callPackage ../default.nix {};
  tabryLang = callPackage ../treesitter {};
in
  tabryFile: package: 
    let
      cmd = builtins.replaceStrings [".tabry"] [""] (builtins.baseNameOf tabryFile);
    in stdenv.mkDerivation {
      name = "${package.name}-with-tabry";
      nativeBuildInputs = [ installShellFiles ];
      src = ./.;
      installPhase = ''
        mkdir -p $out/bin
        cp -R ${package}/bin $out/

        ${tabry}/bin/tabry-generate-bash-complete ${cmd} \
          ${tabryLang.compileTabryFile tabryFile}/${cmd}.json \
          --uniq-fn-id NIX_${lib.toUpper package.name} >> ${cmd}.bash

        installShellCompletion ${cmd}.bash

        ${tabry}/bin/tabry-generate-fish-complete ${cmd} \
          ${tabryLang.compileTabryFile tabryFile}/${cmd}.json \
          --uniq-fn-id NIX_${lib.toUpper package.name} >> ${cmd}.fish

        installShellCompletion ${cmd}.fish
      '';
      meta = {
        mainProgram = cmd;
      };
    }
