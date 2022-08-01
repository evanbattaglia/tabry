This is a sample CLI using Tabry.

# Installation

1. Run `gel install` (or `bundle install`) in this directory.
   [gel](https://github.com/gel-rb/gel) is much faster than bundler (cutting
   off about 120ms on startup time on my machine). This should be just `gem
   install gel`, then `gel install` here. However, it is somewhat
   unstable/finicky, so if you encounter issues, you may wish to just use
   bundler. (Also it seems like sometimes I have to "bundle install" and _then_
   run "gel install"?!)
2. In `~/.bash_profile` or `~/.zshrc`, add the following to modify your path
   and add tab completion for mycli: Add the `mycli/bin` directory to your PATH
   (e.g. in `.bash_profile` or `.zshrc`). To also add tab-completion, add the
   following to `~/.bash_profile` or `.zshrc`:
  ```
  PATH=$PATH:/path/to/mycli/bin"
  source "/path/to/tabry/sh/tabry_bash.sh"
  export TABRY_IMPORTS_PATH="$TABRY_IMPORTS_PATH:/path/to/mycli/tabry"
  complete -F _tabry_completions mycli
  ```
  For zsh, if you have problems, you may (or may not) need to add `compinit` and
  `bashcompinit` before this.

