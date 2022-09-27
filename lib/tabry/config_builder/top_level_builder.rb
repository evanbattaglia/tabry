require_relative 'arg_or_flag_builder'
require_relative 'sub_builder'

module Tabry
  module ConfigBuilder
    class TopLevelBuilder < SubBuilder
      simple_setter :cmd

      def defargs(name, &blk)
        name = name.to_s.gsub(/^@/, '')
        _set_hash :arg_includes, name, SubBuilder.build(&blk)
      end

      def defopts(name, &blk)
        name = name.to_s.gsub(/^@/, '')
        _set_hash :option_includes, name, ArgOrFlagBuilder.build(&blk)['options']
      end
    end
  end
end
