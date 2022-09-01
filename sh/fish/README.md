This directory includes fish completions for Tabry

There are two steps to add to your ~/.config/fish/config.fish to use:

1. Source this file
2. Add a call to `tabry_completion_init`, for each command

```sh
source tabry_fish.fish
tabry_completion_init "aws"
tabry_completion_init "rapture"
```

Note: Currently, the fish completion support doesn't distinguish between directory completion and file completion.