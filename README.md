# Tabry

Tabry is a gem for CLIs and tab completion. You can use tabry
to:
* Easily create tab completion for an existing CLI
* Easily create your own CLIs which have tab completion and usage
  information built-in

Tabry is target towards "subcommand" or "git-style" CLIs.

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
  # Usage: ./compile.js [inputfile] [outputfile]
  ./compile.js /path/to/mycli.tabry /path/to/mycli.json
  ```
3. For tab-completion you may wish to put the resulting `mycli.json` in
   `~/.tabry` so it is always available to tabry. An alternative is to add the
   path containing the `.json` or `.yml` file onto `TABRY_IMPORT_PATHS`
   (colon-separated). For CLIs you can pass in the full path to the file in the
   main runnable file for your CLI (more below).

# Tab completion
Tab completion works by telling your shell to run a ruby script which calls
tabry code every time it wants to get completion suggestions. The tabry script
will then use the tabry configuration for the proper command. Both the shell
code and the ruby script are specific to the shell. Currently only bash is
supported.

to add tab completion:
* Add a tabry JSON/YAML file in ~/.tabry (or add a symlink) under the name of
  the command. For instance, to add tab completion to the "aws" command,
  run `cp examples/aws.json` `~/.tabry`
* Add `source /path/to/tabry/sh/tabry_bash.sh` to your `~/.bash_profile`
* Add (e.g.) `complete -F _tabry_completions aws` for each command you want tab
  completion for.

# Building CLIs
To use Tabry to build CLIs, start a new project and use tabry as a gem.  Then
create a class `MyCLI` which descends from `Tabry::CLI::Base`. Then add methods
for each subcommand you wish to implement (if no subcommand is given, `main`
will be called). From there you can access `args` and `flags` passed in.
Deeper-level subcommands are the subcommands joined by `__`, e.g. `mycli things
delete` would call  a method `things__delete`.

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

If you want to use tab completion, don't forget to put symlink to `mycli.json`
in `~/.tabry` (or add on to the the `TABRY_IMPORT_PATHS` env var) and add the
proper setup into you `~/.bash_profile` as described above.

(You may wish to experimenting with using Gel, which is much faster than
Bundler, but it often has issues.)
