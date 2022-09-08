{ stdenv, bundlerEnv, ruby, ... }:

  let
    gems = bundlerEnv {
      name = "tabry-env";
      inherit ruby;
      gemdir  = ./.;
    };
  in stdenv.mkDerivation {
    name = "tabry";
    src = ./.;
    patches = [./nix/bin.patch];
    buildInputs = [gems gems.wrappedRuby];
    installPhase = ''
      mkdir -p $out
      cp -R ./* $out
    '';
  }