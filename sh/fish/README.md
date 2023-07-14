This directory includes fish completions for Tabry

There are two steps to add to your ~/.config/fish/config.fish to use:

1. Source `tabry_fish.fish`
2. Add a call to `tabry_completion_init`, for each command
3. Ensure the `TABRY_IMPORTS_PATH` environment variable is defined and points to where your compiled tabry files are located.

```sh
source tabry_fish.fish
tabry_completion_init "aws"
tabry_completion_init "rapture"
```

Note: Currently, the fish completion support doesn't distinguish between directory completion and file completion. The native fish complete command doesn't seem to support it (https://fishshell.com/docs/current/completions.html), so something custom would have to be written.

Also note: the bash completion code can be used to create completely separate tabry bash functions for each tabry-based CLI, so multiple tabry-based CLIs can use distinct tabry versions. The fish completion does not yet support this (see sh/bash/README.md).