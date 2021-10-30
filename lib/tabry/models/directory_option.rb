require_relative 'option_base'

module Tabry
  module Models
    class DirectoryOption < ConfigOption
      FIELDS = {
        type: :string,
      }

      attr_reader *FIELDS.keys

      def options(token)
        [:directory]
      end
    end
  end
end
