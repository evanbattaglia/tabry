require_relative 'config_object'

module Tabry
  module Models
    class FileOption < ConfigObject
      FIELDS = {
        type: :string,
      }

      attr_reader *FIELDS.keys

      def options(token)
        [:file]
      end

      def flatten
        self
      end
    end
  end
end
