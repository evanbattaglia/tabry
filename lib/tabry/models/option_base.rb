require_relative 'config_object'

module Tabry
  module Models
    class OptionBase < ConfigObject
      FIELDS = {
        type: :string,
        value: :string,
      }

      attr_reader *FIELDS.keys

      def flatten
        self
      end
    end
  end
end
