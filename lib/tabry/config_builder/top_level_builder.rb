require_relative 'arg_or_flag_builder'
require_relative 'sub_builder'

module Tabry
  module ConfigBuilder
    class TopLevelBuilder < SubBuilder
      simple_setter :cmd

      def defargs(name, &blk)
        name = name.to_s.gsub(/^@/, '')
        _set_hash :arg_includes, name, _build(SubBuilder, &blk)
      end

      def defopts(name, &blk)
        name = name.to_s.gsub(/^@/, '')
        _set_hash :option_includes, name, _build(ArgOrFlagBuilder, &blk)['options']
      end

      def completion
        sub :completion do
          desc "Get tab completion shell config"
          sub :bash, "Get tab completion for bash or zsh"
          arg :cmd_line, "(for internal usage, when used instead of subcommand) full command line for getting completion options"
          arg :comp_point, "(for internal usage, when used instead of subcommand) comp point"
        end
      end
    end
  end
end
