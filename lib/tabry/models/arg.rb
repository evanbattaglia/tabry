require_relative 'arg_base'
require_relative 'options_list'
require_relative 'include_arg'

module Tabry
  module Models
    class Arg < ArgBase
      def self.new(**args)
        if args[:raw]['include']
          IncludeArg.new(**args)
        else
          super(**args)
        end
      end

      FIELDS = {
        name: :string,
        options: [:list_object, :OptionsList],
        optional: :boolean,
        strict: :boolean,
        description: :string,
      }

      attr_reader *FIELDS.keys

      def flatten
        self
      end
    end
  end
end
