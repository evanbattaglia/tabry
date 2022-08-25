# Tabry Bash glue

This directory contains code needed to make Tabry autocomplete work with bash.
The code here is basically glue code needed to connect bash's autocomplete
framework with Tabry (which does all the work of generating tab completion
options). Additionally, `tabry_bash_help.sh` is provided to override bash's
help command to provide help to commands that have tabry completion.

# Quickstart for adding Tab completion
* To add Tabry to non-tabry based CLIs, follow the instructions in `tabry_bash.sh`
* For Tabry-based CLIs, run "mycmd completion bash" and add the code to your `~/.bash_profile`

# Tabry Bash autocompletion technical overview
The main bash function which calls out to tabry to provide tab completion options is in
`tabry_bash_core.sh`. This defines a function called
`_tabry_completions_internal`. **If editing the file, it is important you
do not rename this function or add lines starting with this function name
without understanding the substitution as mentioned below.**

This file and bash function contained within is used in two ways:
* For Ruby CLIs written using tabry, this is renamed to to
  `_tabry_MYCOMMAND_completions_internal`, and a bit of extra bash code is
  added on, to make tab completion specific for the program. This is generated
  for each command when the user runs "mycommand completion bash", which calls
  `Tabry::Shells::Bash.generate`. A new function for each CLI so different CLIs
  can use different versions of tabrygq without interfering with each other.
  The name `_tabry_completions_internal_` is replaced in
  `lib/tabry/shells/bash.rb` in the `generate` method, so if modifying
  `tabry_bash_core.sh`, you should if make sure the substitution still works
  properly.
* You can also use Tabry to add tab completion to other non-Tabry CLIs. In this
  case, the `_tabry_completions_internal_` function is used as-is; it is
  sourced from `tabry_bash.sh`. See `tabry_bash.sh` for details and
  instructions on how to use it.

