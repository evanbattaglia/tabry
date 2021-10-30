require_relative 'option_base'

module Tabry
  module Models
    class FileOption < ConfigOption
      FIELDS = {
        type: :string,
      }

      attr_reader *FIELDS.keys

      def options(token)
        [:file]
      end
    end
  end
end
