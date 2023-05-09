{ stdenv, ruby, ... }:
  stdenv.mkDerivation {
    name = "tabry";
    src = ./.;
    patches = [./nix/bin.patch];
    buildInputs = [ruby];
    installPhase = ''
      mkdir -p $out
      cp -R ./* $out
    '';
  }