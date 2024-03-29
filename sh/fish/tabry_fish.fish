
function tabry_completion_init
  # Three separate complete calls here are needed to support files.
  # One provides completions in the case where tabry offers _only_ arguments,
  # another provides completions where tabry offers _only_ files,
  # the third handles the case where tabry offers both files and arguments
  set cmd $argv[1]
  complete -f -c "$cmd" -n "__fish_tabry_check_only_args" -a "(__fish_tabry_completions)"
  complete -c "$cmd" -n "__fish_tabry_check_only_file"
  complete -c "$cmd" -n "__fish_tabry_check_args_and_file" -a "(__fish_tabry_completions)"
end

# return true if tabry only reports commands
function __fish_tabry_internal_invoke
  # TABRY_IMPORT_PATH_REPLACE (DO NOT REMOVE)
  # TABRY_EXECUTABLE_REPLACE (DO NOT REMOVE)
  # TABRY_ARG_REPLACE (DO NOT REMOVE)
  set -x TABRY_FISH_MODE true

  # -C "Get cursor position"
  set cursor_position (commandline -C)
  set cmd (commandline)

  set result ($TABRY_EXECUTABLE $TABRY_ARG "$cmd" "$cursor_position")
  for arg in $result
    echo $arg
  end
end

# return true if tabry only reports file
function __fish_tabry_check_only_args
  set result (__fish_tabry_internal_invoke)

  set args      (echo "$result"|sed 's/  .*//')
  set specials  (echo "$result"|grep -o '  file')

  # https://github.com/fish-shell/fish-shell/issues/5186#issuecomment-421244106 (the random "x")
  if test "x$args" != "x" -a "$specials" != "  file"
    # echo "confirming only args:  [$result,$args,$specials]" 1>&2
    return 0;
  else
    # echo "rejecting only args: [$result,$args,$specials]" 1>&2
    return 1;
  end
end

# return true if tabry reports file _and_ commands
function __fish_tabry_check_only_file
  set result (__fish_tabry_internal_invoke)

  set args      (echo "$result"|sed 's/  .*//')

  # The '--' arg is needed in case $result contains flag-like strings
  if test "x$args" = "x" -a (string match -ra -- '  file' $result)
    # echo "confirming only file" 1>&2
    return 0;
  else
    # echo "rejecting only file: [$args,$specials]" 1>&2
    return 1;
  end
end

function __fish_tabry_check_args_and_file
  set result (__fish_tabry_internal_invoke)

  set args      (echo "$result"|sed 's/  .*//')

  # The '--' arg is needed in case $result contains flag-like strings
  if test "x$args" != "x" -a (string match -ra -- '  file' $result)
    # echo "confirming args and file" 1>&2
    return 0;
  else
    # echo "rejecting args and file: [$args,$specials]" 1>&2
    return 1;
  end
end

function __fish_tabry_completions
  set result (__fish_tabry_internal_invoke)

  set args      (echo "$result"|sed 's/  .*//')

  if test "x$args" = "x"
    # Don't offer anything if we don't have any completions
    return 1;
  else
    # $result will be something like: ["foo 'this is foo'" "bar" "baz" "" "file"]
    #   where "file" is special, since it's after the space.
    for arg in $result
      set clean_arg (echo "$arg"|sed 's/  .*//')
      if test "x$arg" != "x"
        echo "$arg"
      else
        break;
      end
    end

    # echo $args
    return 0;
  end
end
