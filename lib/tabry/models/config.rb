require_relative 'config_object'
require_relative 'sub'
require_relative 'option_includes'
require_relative 'arg_includes'

module Tabry
  module Models
    class Config < ConfigObject
      FIELDS = {
        cmd: :string,
        main: [:object, :Sub],
        option_includes: [:object, :OptionIncludes],
        arg_includes: [:object, :ArgIncludes],
      }

      attr_reader *FIELDS.keys

      def initialize(raw:)
        super(raw: raw, root: self)
      end

      def dig_sub(sub_stack, &blk)
        sub_stack.reduce(main) { |sub, sub_name| sub.subs.by_name[sub_name] }
      end

      def dig_sub_array(sub_stack)
        subs = [main]
        sub_stack.each do |sub_name|
          subs << subs.last.subs.by_name[sub_name]
        end
        subs
      end

      def inspect
        # TODO remove hack, but make everything in models have a hack so _root is not shown
        return "#<Tabry::Config>" if caller.any?{|c| c.include?("in `inspect'")}
        super
      end
    end
  end
end
