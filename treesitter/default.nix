{
  mkYarnPackage,
  python3,
  stdenv,
  lib,
  xcbuild,
  nodejs-16_x,
  ...
}:

  let
    # treesitter doesn't work with node 17/18
    treesitterNode = nodejs-16_x;

    # converts /nix/store/.../foo.tabry to "foo"
    commandNameFromTabryFilename = fileName: 
      (builtins.replaceStrings [".tabry"] [""] (builtins.baseNameOf fileName));

    formatJsonFilename = fileName: 
      (commandNameFromTabryFilename fileName) + ".json";

    tabryCompilerJsPath = "/libexec/tree-sitter-tabry/deps/tree-sitter-tabry/tabry-compile.js";

    # This is a function that takes a .tabry file
    # and returns a derivation that compiles that
    # .tabry file into the tabry .json file
    compileTabryFile = inFile: stdenv.mkDerivation {
      name = "tabry-compile-file";
      src = ./.;
      buildInputs = [treesitterNode];
      buildPhase = ''
        mkdir $out

        # for some reason, patchSheBangs points to node 18,
        # which doesn't work with treesitter
        ${tabryc}/bin/tabryc ${inFile} $out/${formatJsonFilename inFile}
      '';
      # by default, stdenv.mkDerivation will run `make install`
      # which we don't want to do here
      dontInstall = true;
    };

    # this derivation builds the treesitter project
    tabryc = mkYarnPackage {
      name = "tabry-lang";
      src = ./.;
      packageJSON = ./package.json;
      yarnLock = ./yarn.lock;
      extraBuildInputs = [ python3 xcbuild ];
      pkgConfig.tree-sitter = {
        buildInputs = [ python3 xcbuild ];
        postInstall = ''
          ${treesitterNode}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp --nodedir ${treesitterNode} configure
          ${treesitterNode}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp --nodedir ${treesitterNode} rebuild
        '';
      };
      postBuild = ''
        cd deps/tree-sitter-tabry
        ${treesitterNode}/lib/node_modules/npm/bin/node-gyp-bin/node-gyp --nodedir ${treesitterNode} rebuild
        cd ../../
      '';
      distPhase = ''
        echo "#!/usr/bin/env bash" > $out/bin/tabryc
        echo "${treesitterNode}/bin/node $out/libexec/tree-sitter-tabry/deps/tree-sitter-tabry/tabry-compile.js \"\$@\"" >> $out/bin/tabryc
        chmod +x $out/bin/tabryc
        patchShebangs $out/bin/tabryc
      '';
    };

  in {
    inherit tabryc compileTabryFile commandNameFromTabryFilename;
  }
