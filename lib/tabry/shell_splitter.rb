# frozen_string_literal: true

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
      cmd, *all_args = Shellwords.split(cmd_line)
      last_arg_index = all_args.index { |arg| arg.include?(COMP_POINT_SENTINEL) }
      args = all_args[0..last_arg_index]
      last_arg = args.pop.gsub! COMP_POINT_SENTINEL, ""

      cmd_name = cmd.gsub(%r{.*/}, "")

      [cmd_name, args, last_arg]
    end
  end
end
