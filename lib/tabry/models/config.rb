require_relative 'config_object'
require_relative 'sub'
require_relative 'option_includes'
require_relative 'arg_includes'
require_relative 'flag_includes'
require_relative 'sub_includes'

module Tabry
  module Models
    class Config < ConfigObject
      FIELDS = {
        cmd: :string,
        main: [:object, :Sub],
        option_includes: [:object, :OptionIncludes],
        arg_includes: [:object, :ArgIncludes],
        flag_includes: [:object, :FlagIncludes],
        sub_includes: [:object, :SubIncludes],
      }

      attr_reader *FIELDS.keys

      def initialize(raw:)
        super(raw: raw, root: self)
      end

      def dig_sub(sub_stack)
        sub_stack.reduce(main) { |sub, sub_name| sub.subs.by_name[sub_name] }
      end
    end
  end
end
