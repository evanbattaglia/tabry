# Magic passback -- pass back environment variables from your CLI to your shell.
# This works by having your CLI write to a temporary file and return a certain status code
# signifying that the command was successful but there are environment variables we would
# like set.
# To use, add the following to your .bash_profile:
#    mycmd() { _Tabry_run_with_passback mycmd "$@"; }
# This assumes your command "mycmd" is in your PATH.
# Then, when you want to exit your CLI and set vars, use:
#   Tabry::CLI::Passback.successful_exit_with_passback('mycmd', FOO: 'abc', BAR: 'waz')
#

_tabry_run_with_passback() {
  local cmdname="$1"
  shift
  TABRY_LOGIN_PASSBACK_CMDNAME="$cmdname" command "$cmdname" "$@"
  local exitcode=$?
  if [[ $exitcode -gt 19 && $exitcode -lt 121 && -f ~/.tmp_tabry_passback_"$cmdname"_$exitcode ]]; then
      source ~/.tmp_tabry_passback_"$cmdname"_"$exitcode"
      rm ~/.tmp_tabry_passback_"$cmdname"_"$exitcode"
      return 0;
  fi;
  return $exitcode
}


