Tabry uses a mini-language to describe CLIs -- either for the purpose of adding
tab completion to existing commands, or creating new CLIs with the Ruby
Tabry::CLI library. Tabry is targeted towards "subcommand" or "git-style" CLIs,
and as such, Tabry configs describe:
* subcommands
* (positional) arguments
* flags, including flags that take arguments. Tabry uses GNU-style flags:
  one-letter flags have one dash, and multi-letter flags have two dashes.
  However, multiple flags with one dash (`-ab` => `-a -b`) are not yet
  supported.

Some of this documentation (titles, descriptions) are not currently used
in the Rust tool used for completions, but rather are only used in the
Ruby tabry library, for the purposes of creating your own CLIs.

# Getting started
Here is a very simple CLI definition:

```
cmd control-vehicle

# The vehicle argument
# Note: comments must be on a line of their own
arg {
  opts const car
  opts const bike
}

arg {
  opts const go
  opts const stop
}
```

This defines a very simple CLI which takes two positional arguments. The first
line just states the name of the command. After this, the arguments are listed
in order, and each argument has two possibilities which will be options shown
in tab completion.

Let's test this out. Save this to `control-vehicle.tabry` and compile with
`treesitter/tabry-compile.js control-vehicle.tabry ~/.tabry/control-vehicle.json`
(make sure you have run `npm install` in the treesitter directory first). Add
to your `~/.bash_profile` the following:

```
source /path/to/tabry/sh/tabry_bash.sh
complete -F _tabry_completions control-vehicle
```

If you type `control-vehicle` you will see tab completion for each argument.
(For more debugging information, you can `export TABRY_DEBUG=1` before doing
tab completion.)

# Basics
Tabry commands operate in two contexts:
* _command context_. This is the top-level context. In this context you define
  _arguments_ and _flags_ for your CLI's subcommand or main (top-level) command.
* _argument context_. In this context you define _possible options_ for an
  argument (or argument to a flag)

In the above example, the `arg` statement defines and argument in the top-level
context. For each argument, we start a _block_. In the block, we are in the
_argument_ context, so can define options with `opts`. As we will see below, we
can also start blocks with subcommands and flags. Also, the block is optional
-- we can also define arguments, subcommands, and flags without starting a
block, e.g. using modifiers on the `arg` statement.

# Arguments and possible options (arg)
In any _command context_, you can define positional arguments. The `arg`
statement supports the following modifiers
* an optional name/identifier which is used in usage information and when
  building a CLI with Tabry::CLI:
  ```
  arg vehicle_type
  ```
* an optional description, to be shown in usage information:
  ```
  arg vehicle_type "The type of vehicle"
  ```
  This can also be put inside the block with the `desc` statement:
  ```
  arg vehicle_type {
    desc "The type of vehicle"
  }
  ```
* an optional include (see Includes section below)
* an optional block, as seen above. This can be committed if you do not want tab
  completion for your argument. A block defines an _argument context_ with
  possible options. If a block has only one statement it can be used without
  newlines:
  ```
  arg { opts const a }
  ```

Instead of just one name, you can include an _list_ of names using parentheses
and identifier separated by spaces. This creates multiple positional arguments.
These can optionally take a block. Options in the block will apply to all
arguments.

```
arg (bool1 bool2) {
  opts const T
  opts const F
}
```

# Options
In any _argument context_ (an `arg` block or `flagarg` block), you can define
possible options. There are currently four ways to define these. If multiple
are defined, all are used as possible tab completion values.

* `opts const` just defines a single possible value, as shown above. If your
  option includes whitespace or quotes, you will need to use quotes:
  ```
  opts const hello
  opts const "hello \"world\""
  ```
* `opts const` can also be used with an array, e.g.
  ```
  opts const (T F true false yes no)
  ```
* `opts shell` runs a shell command to determine a list of possible options.
  This is run when hitting Tab in the shell in a place where the argument
  flags, below) is expected. The shell command should output a
  newline-separated list of options. This is useful when the possible options
  are variable. For example, let's say your command's configuration defines
  possible values, and these are returned with `mycmd list-things`. You can
  define these as possible arguments with:
  ```
  opts shell "mycmd list-things"
  ```
  Assuming your command is in the user's PATH.
  Tabry will set state information in JSON in an ENV variable in
  `TABRY_AUTOCOMPLETE_STATE` that your commands can use (search code for
  `TABRY_AUTOCOMPLETE_STATE`)
* `opts file`. This uses the shell's file completion to give a list of files.
* `opts dir`. This uses the shell's directory completion to give a list of
  directories.
* `opts delegate` delegates to another completion. As of Sept 2024 this is currently experimental and only supported for in the Rust tabry-rs completion engine and only for bash/zsh, and may not work fot work for all commands. For example, `opts delegate "docker compose"` will add the options for `docker compose` to the completion options for your command (only one argument).

Note that options are only used for tab-completion; they are not validated when
running a CLI built on the Tabry CLI ruby gem.

# Optional args and Varargs (opt arg, varargs, opt varargs)
You can define optional arguments by putting `opt` before `arg`. If you do not
include `arg`, when using Tabry to write CLIs, Tabry will show an error if you
do not pass in enough arguments. The same modifiers as above apply to `opt arg`.

You can also define varargs as the final argument. The possible options defined
apply to all arguments passed in after that. Varargs may also be optional.

Here is an example illustrating both:

```
arg first-arg-mandatory
opt arg second-arg-optional
opt varargs rest-args-optional { opts const (foo bar waz) }
```

Note that to eliminate ambiguity:
* you cannot define non-optional arguments after an optional argument
* you cannot define any more arguments after varargs

# Argument titles
The block (_argument context_) for arguments can also contain a `title`
statement which is shown in usage information instead of the name. This is
useful when you wish to show usage information with spaces, or varargs without
a space, like:

```
Usage: mycmd <thing to search for> <file to load> [<file to load>]...
```

But in the CLI you want these to be called `thing_to_search_for` and
`files_to_load` (varargs, see below):

```
arg thing_to_search_for { title "thing to search for" }
varargs files_to_load { title "file to load" }
```


# Flags (flag, flagarg, reqd flagarg)
As with arguments, flags can be defined within a _command context_. Unlike
arguments, the order of flags does not matter. The following modifiers can be
used with flag statements:
* name(s)/identifier(s). This is mandatory. To define aliases, use a
  comma-separated value. The first is the "canonical" name (used to reference
  the flag in the CLI):
  ```
  flag dry-run,d
  ```
* an optional description. This can also be given inside the block with `desc`.
  ```
  flag dry-run,d "Don't act, only show what would be done"
  ```
* an optional include (see below)

`flagarg` is similar to `flag`, but defines a flag which takes an argument.
(Note that the argument is mandatory -- Tabry does not support flags with
optional arguments). `flagarg` takes the same arguments but with an optional
block. Just as with `arg`, this block defines an _argument context_ where you
can list possible options:

```
flagarg f,format { opts const (json yml) }
```

Finally, `reqd flagarg` is a special kind of flagarg. Similar to `arg`, it is
_required_ to run the program. For tab completion, it will be the only tab
completion option until it is satisified. Its usage is the same as `flagarg`:

```
flagarg env,e "The environment (this must be given)" {
  opts const (prod beta dev)
}
```

As with `arg` and `opts const`, you can use a _list_ to define multiple
arguments at the same time. However, this means you can not use unique
descriptions (or options, in the case of `flagarg`) for each:

```
flag (interactive,i force,f)
```

# Subcommands (sub)
Within a _command context_, you can define _subcommands_ with a `sub`
statement. The following modifiers apply:
* mandatory name/names (aliases using commas, as with `flag`). As with `flag`
  and `arg`, this can be a list, to create multiple subcommands with different
  names (but the same everything else)
* an optional description, shown in usage information when writing a CLI. This
  can also be given in a `desc` statement inside the block. This can (and
  should) also be used at the top-level to define overall information about
  your command.
* an optional include (see below)
* an optional block. This defines another _command context_, from which you can
  define arguments, flags, or more nested subcommands.

Here is an example illustrating the above.
```
sub list "List the things"
sub new,n "Create a thing"
sub delete,d {
  desc "Delete a thing"
  arg thing "The thing to delete" { opts shell "mycmd list" }
}
sub (do-something do-something-else,dse)
```

Note on using Tabry::CLI to build a CLI: if a subcommand (or the
top-level command) defines its own subcommands, it may not be used on its own
without a subcommand, unless it defines arguments and arguments are passed in.

Finally, note that flags defined on a command (include the top-level command)
can be used in any level of subcommand nested beneath it. For example:

```
cmd foo
arg toplevel-arg

flag dryrun

sub mysub1 {
  sub mysub2 {
    flag someopt
    opt arg mysub2-arg
  }
}
```

The following are all valid invocations:
```
foo hello    # hello is argument toplevel-arg
foo --dryrun hello
foo mysub1 mysub2 --dryrun --someopt
foo mysub1 mysub2 hello    # hello is argument mysub2-arg
```

The following are _not_ valid invocations:
```
foo   # top-level requires an argument or subcommand
foo mysub1  # mysub1 requires a subcommand
foo --someopt  # someopt is not defined on the top-level

```

# Includes
Many times, different subcommands will take the same flags. Also, flags or
argument will use the same possible options. To help with this, we can define
_includes_ which group together shared statements:
* `defopts` defines an include with statements which can appear in an _argument
  context_, with as `opts const` and `opts shell`.
* `defargs` defines an include with statements which can appear in a _command
  context_, such as `arg`, `varargs`, `flag`, and `sub`.


The syntax is as follows:
```
defopts @my_options {
  # any opts statements
  # this include can be applied to: arg/opt arg/varargs; flagarg/reqd flagarg
}
defargs @my_args {
  # any arg, sub, flag, etc. statements
  # this include can be applied to the top-level command, and sub-commands
}
```

These can be included in one of two ways:
* with the `include @my_include` statement in any arg/flagarg/sub command, or
  in the top-level command 
* with any number of inline `@my_include` modifiers immediately before the
  block (or at the end, if no block is given) in any arg/flagarg/sub statement.

Here is an example.

```
cmd mydeploy

# Default command acts on project-and-environment
include @project-and-environment

# status command acts and project-and-environment as well
sub status @project-and-environment @verbose

# list command takes no position args, but takes an optional "env" flag
sub list @verbose {
  flagarg @environment
}

defopts @environment {
  opts const (prod beta dev)
}

defargs @verbose {
  flag verbose "Show more info"
}

defargs @project-and-environment {
  arg project "The project" { opts const (project1 project2) }
  arg environment "The environment" @environment
}
```

The following are example invocations:
```
mycmd project1 prod
mycmd status --verbose project2 beta
mycmd list
mycmd list --env beta --versose
```

# Multi-line descriptions
The `desc` statement supports multi-line strings. For your convenience, leading
whitespace is stripped up to the level of the first line, and leading blank lines:

```
sub mycmd {
  desc "
    My command:
      * It does stuff
  "
}

The resulting description is:
```
My command:
  * It does stuff
```
