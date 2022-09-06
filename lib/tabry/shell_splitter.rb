# frozen_string_literal: true

require "shellwords"

# Use Shellwords.split() to split a command line + comp point (index of the
# cursor in the command line) into the args up to the current token plus
# current token
module Tabry
  module ShellSplitter
    module_function

    COMP_POINT_SENTINEL = "\uFFFF"

    def split(cmd_line, comp_point)
      # Returns [cmd_name, args, last_arg]
      # cmd_name is the basename of the command run
      #
      # TODO: in weird scenarios this acts weird: namely, special shell operators like <(ls), $$((1 + 1))
      # Also it crashed on unbalanced quotes, like: foo "bar<TAB>
      # however, this will handle the common scenarios of escaping with quotes, single quotes, and backslashes
      # Split up args and put the argument that comp_point is in in the `last_arg` variable.
      # Just cutting off everything after comp_point might have worked, although
      # maybe we wanted the whole arg? Not sure this is the best.
      cmd_line = cmd_line.dup
      cmd_line[comp_point.to_i...comp_point.to_i] = COMP_POINT_SENTINEL
      all_tokens = Shellwords.split(cmd_line)

      # ignore all tokens after the one with the sentinel, then replace the COMP_POINT_SENTINEL.
      # the last token is now the token which the cursor is on (the entire token, not just before the cursor)
      last_arg_index = all_tokens.index { |arg| arg.include?(COMP_POINT_SENTINEL) }
      all_tokens = all_tokens[0..last_arg_index]
      all_tokens.last.gsub! COMP_POINT_SENTINEL, ""

      # take last_arg first -- will always be non-null (it will be empty if input string is empty).
      last_arg = all_tokens.pop
      cmd = all_tokens.shift

      cmd_name = cmd&.gsub(%r{.*/}, "")

      [cmd_name, all_tokens, last_arg]
    end
  end
end
