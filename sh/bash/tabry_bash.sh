# Use this file to use Tabry tab completion with non-Tabry CLIs. To do this,
# source this file in your bash_profile and add lines like
# `complete -F _tabry_completions somecli` for each CLI. You will also
# need the tabry JSON/YML files in ~/.tabry/ or in a path in your
# TABRY_IMPORTS_PATH. For instance, to add tab completion to vaulted and
# rapture, you can add this to your ~/.bash_profile:
#
#   source /path/to/tabry/sh/bash/tabry_bash.sh
#   complete -F _tabry_completions rapture
#   complete -F _tabry_completions vaulted
#
# Then be sure to either copy tabry/examples/tabry/vaulted.json and rapture.json to ~/.tabry/,
# or set TABRY_IMPORTS_PATH in ~/.bash_profile like so:
#
#   TABRY_IMPORTS_PATH=$TABRY_IMPORTS_PATH:/path/to/tabry/examples/tabry/
#

source "$( dirname "${BASH_SOURCE[0]:-${(%):-%x}}" )"/tabry_bash_core.sh
_tabry_completions() {
  _tabry_completions_internal ruby "$( dirname "${BASH_SOURCE[0]:-${(%):-%x}}" )"/../../bin/tabry-bash
}

