require_relative 'arg_base'
require_relative 'options_list'
require_relative 'include_arg'

module Tabry
  module Models
    class Arg < ArgBase
      def self.new(hash)
        if hash['include']
          IncludeArg.new(hash['include'])
        else
          super(hash)
        end
      end

      FIELDS = {
        name: :string,
        options: [:list_object, :OptionsList],
        optional: :boolean,
        strict: :boolean,
      }

      attr_reader *FIELDS.keys
    end
  end
end
