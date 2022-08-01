#!/usr/bin/env bash
# Compile tabry/mycli.tabry into tabry/mycli.json
# This defines the CLI commands, args, and flags. See Tabry gem.
# To run this you will need to run `npm install` in the tabry/treesitter directory
$(bundle info --path tabry)/treesitter/tabry-compile.js tabry/mycli.tabry tabry/mycli.json
