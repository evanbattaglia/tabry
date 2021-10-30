require_relative 'arg_base'
require_relative 'options_list'

module Tabry
  module Models
    class Arg < ArgBase
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
