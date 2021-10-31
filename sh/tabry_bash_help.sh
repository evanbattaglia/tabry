_tabry_help="$( dirname "${BASH_SOURCE[0]}" )"/../bin/tabry-help
help() {
  tabry-help "$@" 2>/dev/null || command help "$@"
}
