# frozen_string_literal: true

require_relative "arg_or_flag_builder"
require_relative "sub_builder"

module Tabry
  module ConfigBuilder
    class TopLevelBuilder < SubBuilder
      simple_setter :cmd

      def defargs(name, &blk)
        name = name.to_s.gsub(/^@/, "")
        name = name.gsub("_", "-") if _opts[:names_underscores_to_dashes]
        _set_hash :arg_includes, name, _build(SubBuilder, &blk)
      end

      def defopts(name, &blk)
        name = name.to_s.gsub(/^@/, "")
        name = name.gsub("_", "-") if _opts[:names_underscores_to_dashes]
        _set_hash :option_includes, name, _build(ArgOrFlagBuilder, &blk)["options"]
      end

      def completion
        sub :completion do
          desc "Get tab completion shell config"
          sub :bash, "Get tab completion for bash or zsh"
          sub :fish, "Get tab completion for fish"
          arg :cmd_line, "(for internal usage, when used instead of subcommand) full command line for getting completion options"
          arg :comp_point, "(for internal usage, when used instead of subcommand) comp point"
        end
      end
    end
  end
end
