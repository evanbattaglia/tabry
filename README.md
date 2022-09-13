# Tabry

Tabry is a gem for CLIs and tab completion. You can use tabry
to:
* Easily create tab completion for an existing CLI
* Easily create your own CLIs which have tab completion and usage
  information built-in

Tabry is targeted towards "subcommand" or "git-style" CLIs.

# Making a config
The first step in using tabry is to create a tabry configuration file.
This can be YAML (or JSON) but it is usually easier to create it in the
terse and expressive Tabry language and compile it into JSON from
there. This compilation process is done with a Javascript script using
Treesitter, in the treesitter/ directory.

To compile a tabry file into JSON:
1. Get up the treesitter parser/compiler running:
  ```
  cd treesitter
  npm install
  ```
  (Note that if you want to modify the tabry grammar itself, after changing
  grammar.js you should run `npx tree-sitter generate`, `npx tree-sitter test`,
  and `npx node-gyp rebuild`)
2. Compile your file:
  ```
  # Usage: ./tabry-compile.js [inputfile] [outputfile]
  ./tabry-compile.js /path/to/mycli.tabry /path/to/mycli.json
  ```
3. For tab-completion you may wish to put the resulting `mycli.json` in
   `~/.tabry` so it is always available to tabry. An alternative is to add the
   path containing the `.json` or `.yml` file onto `TABRY_IMPORTS_PATH`
   (colon-separated). For CLIs you can pass in the full path to the file in the
   main runnable file for your CLI (more below), which will make the config
   available for your CLI's commands and usage info, but will not enable tab
   completion.

See the `LANGUAGE.md` file for a guide on making your own config. See
`examples/tabry` for some example configs for tab completion for existing
commands.

# Tab completion (for existing commands)
Tab completion works by telling your shell to run a ruby script which calls
tabry code every time it wants to get completion suggestions. The tabry script
will then use the tabry configuration for the proper command. Both the shell
code and the ruby script are specific to the shell. Currently only bash is
supported.

To add tab completion:
* Add a tabry JSON/YAML file in ~/.tabry (or add a symlink) under the name of
  the command. For instance, to add tab completion to the "aws" command,
  run `cp examples/aws.json` `~/.tabry`
  * An alternative is to add the directory with your compile Tabry `.json` file
    to `TABRY_IMPORTS_PATH` (e.g. in your `~/.bash_profile` or `~/.zshrc`)
* Add `source /path/to/tabry/sh/bash/tabry_bash.sh` to your `~/.bash_profile` or
  `~/.zshrc`. Even if you have multiple tabry completion files, this only has
  to be done once.
* Add (e.g.) `complete -F _tabry_completions aws` for each command you want tab
  completion for.
* Note: for zsh, if you have problems, you may need to run `compinit` and
  `bashcompinit` before sourcing the `tabry_bash.sh` script.

# Building CLIs
To use Tabry to build CLIs, start a new project and use tabry as a gem.  Then
create a class `MyCLI` which descends from `Tabry::CLI::Base`. Then add methods
for each subcommand you wish to implement (if no subcommand is given, `main`
will be called). From there you can access `args` and `flags` passed in.
Deeper-level subcommands are the subcommands joined by `__`, e.g. `mycli things
delete` would call a method `things__delete`.

```
cmd mycli
arg foo
sub things {
  sub delete {
    flag bar,b
    flagarg waz,w
  }
}
```
```
class MyCLI < Tabry::CLI:Base
  def main
    puts args.foo
  end

  def things__delete
    puts flags.bar # boolean
    puts flags.waz # string
  end
end
```

You can also send some things to a sub-cli:
```
class ThingsCLI < Tabry::CLI::Base
  def things__delete = puts(flags.bar)
end

class MyCLI < Tabry::CLI::Base
  sub_route :things, ThingsCLI
  def main = puts(args.foo)
end
```
end

To run your CLI, now you just have to use `Tabry::CLI::Builder`, which links
the config file, the CLI class, and the actual command-line arguments. For
instance:

```
#!/usr/bin/env ruby
ENV['BUNDLE_GEMFILE'] = "#{__dir__}/../Gemfile"
require 'bundler/setup'
require 'tabry/cli/builder'
require_relative '../lib/mycli'
Tabry::CLI::Builder.new("#{__dir__}/../mycli.json", MyCLI).run(ARGV)
```

Make this file executable and you can now run your command, with all its
subcommands. There is a "help" subcommand (also "--help") which shows usage
information added in automatically (usage info is also shown if invalid
arguments are given).

You may wish to experiment with using Gel, which is much faster than
Bundler, but it often has issues. See the script for the example CLI script
in examples/mycli/bin.

## Adding Tab Completion to your CLI
If you want to use tab completion, you have two options:
* put a symlink to `mycli.json` in `~/.tabry` (or add on to the the
  `TABRY_IMPORTS_PATH` env var) and add the proper setup (i.e., sourcing
  `tabry_bash.sh` and the adding the `complete` command) into your
  `~/.bash_profile` as described above.
* (PREFERRED) add a subcommand "completion bash" which runs and prints
  ```
  Tabry::Shells::Bash.generate("mycmd", relative_path_to_mycmd_json_tabry_file)
  ```
  Which your users can add to their `bash_profile` file. (In this future this
  will likely be added automatically to Tabry-based CLIs.)

# CLI Utils
Tabry::CLI::Util has useful utilities which, while not required for creating a
Tabry CLI, are useful to CLIs in general. Here are some examples

```
# if command returns non-zero status, exit immediately. Otherwise returns the
# output of the command.
# if echo_only is true, simply prints what it would do (and returns nil)
data = Tabry::CLI::Util.backtick_or_die("ls %s %s", [file1, file2], echo_only: is_dryrun)

# system() is similar but, like Ruby's system, passes through output to STDOUT/ERR instead
# of returning the output. Both backtick_and_die can take echo_only or echo. echo
# prints the command it is running but still runs it.
Tabry::CLI::Util.system("ls %s", [filename], echo: is_verbose)

# cross-platform (uses open on Mac, xdg-open on Linux)
open_web_page("http://example.com")

# Config provides a handy YAML config, most often in the user's home directory
# (it expands "~")
MyConfig = Tabry::CLI::Util::Config.new('~/.mycmd.yml')
MyConfig.config.foo.bar # config is an openstruct
```

# Nix Configuration

A nix derivation is provided that builds `tabry`. The derivation is dependent on `gemset.nix`, which is generated based off of the contents of `Gemfile.lock`. This file is generated by `bundix` (https://github.com/nix-community/bundix). If `Gemfile.lock` changes, ensure you run `bundix` to generate a new `gemset.nix`. If you don't have `bundix` installed, you can access one by running `nix-shell`:

```sh
nix-shell -p bundix
[nix-shell:]$ bundix 
```

## Compiling tabry files with nix

This flake provides a `tabryc` app which compiles `.tabry` files. To run it, use the flake url, specifying the `tabryc` target:

```sh
nix run github:evanbattaglia/tabry#tabryc path/to/file.tabry path/to/file.json
```

## Configuring tabry with home-manager

This flake provides a home-manager (https://github.com/nix-community/home-manager) module to make it easy to configure and use tabry completions.

You can use this module by adding this to your home-manager configuration:

```nix
{
  inputs = {
    ...
    tabry.url = "github:evanbattaglia/tabry";
  };
  
  ...
  home-manager.lib.homeManagerConfiguration {
    ...
    modules = [
      tabry.homeModules.tabry,
      ...
      {
        config.programs.tabry = {
          enable = true;
          enableFishIntegration = true;
          tabryFiles = [
            ./rapture.tabry
          ];
        };
      }
    ]
  }
}
```

# Future possible improvements
* `mycmd -ab` should be interpreted as `mycmd -a -b`
* if subcommand allows flag "-a", maybe allow it before the subcommand -- e.g. `mycmd -a mysub`
