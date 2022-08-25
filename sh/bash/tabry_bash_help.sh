# 'help mycommand' -> show tabry help for a tabry-CLI or command you have a
# tabry tab completion config for

_tabry_help="$( dirname "${BASH_SOURCE[0]}" )"/../../bin/tabry-help
help() {
  tabry-help "$@" 2>/dev/null || command help "$@"
}
