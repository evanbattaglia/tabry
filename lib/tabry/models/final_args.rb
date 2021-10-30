require_relative 'arg_base'

module Tabry
  module Models
    class FinalArgs < ArgBase
      FIELDS = {
        name: :string,
        options: [:list_object, :OptionsList],
        optional: :boolean,
      }

      attr_reader *FIELDS.keys
    end
  end
end
