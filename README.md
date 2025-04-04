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

To compile a tabry file into JSON, please use `tabry compile` from [tabry-rs](https://github.com/evanbattaglia/tabry-rs). The resulting JSON file can be used with the Tabry Ruby gem for tab completion and to build a CLI.

See the `LANGUAGE.md` file for a guide on making your own config. See
`examples/tabry` for some example configs for tab completion for existing
commands.

## Ruby DSL and Tabry::CLI::AllInOne
Tabry now supports a near-identical Ruby DSL for making configs which does not
require compilation. The old custom language may be phased out for use with CLIs (although it is still useful for creating completions for 3rd-party programs, see [tabry-rs](https://github.com/evanbattaglia/tabry-rs). See
`examples/all_in_one/hello` for an example which uses this (it also uses the
AllInOne class to create a one-file CLI with tab completion)

The AllInOne class is a simple way to create a CLI with tab completion in one file. It also has the ability to generate bash/zsh/fish completion, and tabry-format JSON compatible with [tabry-rs](https://github.com/evanbattaglia/tabry-rs).

# Tab completion (for existing commands)
Please use [tabry-rs](https://github.com/evanbattaglia/tabry-rs) to for tab completion for existing commands. This gem is now focused on creating CLIs in Ruby.

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
sub bar
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

  def bar
    puts "bar"
  end
end
```

You can also send some things to a sub-cli:
```
class ThingsCLI < Tabry::CLI::Base
  def delete = puts(flags.bar)

  def bar = puts("bar")
end

class MyCLI < Tabry::CLI::Base
  sub_route :things, to: ThingsCLI
  # You can also send multiple things to the same sub-cli, and keep the prefix:
  sub_route :bar, to: ThingsCLI, full_method_name: true
  # If ThingsCLI had method things__delete instead things delete, you could use:
  # sub_route :things, :bar, to: ThingsCLI, full_method_name: true
  def main = puts(args.foo)
end
```

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

A nix derivation is provided that builds `tabry`. It does not package the gems provided by the Gemfile.

# Future possible improvements
* `mycmd -ab` should be interpreted as `mycmd -a -b`
* if subcommand allows flag "-a", maybe allow it before the subcommand -- e.g. `mycmd -a mysub`

# Old information

**WARNING** The compiler has been superseded by the functionality in the [tabry-rs](https://github.com/evenbattaglia/tabry-rs) repository. This is only provided for historical purposes. The treesitter compiler here is DEPRECATED and uses possibly vulnerable dependencies. The information below is recorded only for historical purposes.

## Compiling tabry files with nix
This flake provides a `tabryc` app which compiles `.tabry` files. To run it, use the flake url, specifying the `tabryc` target:

```sh
nix run github:evanbattaglia/tabry#tabryc path/to/file.tabry path/to/file.json
```

## Configuring tabry with home-manager

This flake provides a home-manager (https://github.com/nix-community/home-manager) module to make it easy to configure and use tabry completions.

You can add autocompletion to your shell by adding this module to your home-manager configuration, and configuring it:

```nix
{
  inputs = {
    # ...
    tabry.url = "github:evanbattaglia/tabry";
  };

  # ...
  homeConfigurations.base = home-manager.lib.homeManagerConfiguration {
    # ...
    modules = [
      tabry.homeModules.tabry
      # ...
      {
        config.programs.tabry = {
          enable = true;
          enableFishIntegration = true;
          tabryFiles = [
            ./rapture.tabry
          ];
        };
      }
    ];
  };
}
```

You can also install the `tabryc` compiler using the `tabryc` package:

```nix
{
  inputs = {
    # ...
    tabry.url = "github:evanbattaglia/tabry";
  };

  # ...
  homeConfigurations.base = home-manager.lib.homeManagerConfiguration {
    # ...
    config.home.packages = [
      tabry.packages.${system}.tabryc
    ];
  };
}
```


## Packaging nix derivations with tabry completions

You can wrap a nix package with tabry completions using the `withTabry` helper function.

```nix
{
  foo = withTabry ./foo.tabry (
    pkgs.writeScriptBin "foo" ''
      echo "$1";
    ''
  );
}
```

where ./foo.tabry is a normal tabry file:

```
cmd foo

sub foo
sub bar
sub baz
```
