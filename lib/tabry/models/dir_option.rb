require_relative 'config_object'

module Tabry
  module Models
    class DirOption < ConfigObject
      FIELDS = {
        type: :string,
      }

      attr_reader *FIELDS.keys

      # Handled by tabru=bash/tabry-bash.sh/shell, we just return a symbol to
      # communicate to tabry-bash
      def options(token)
        [:directory]
      end

      def flatten
        self
      end
    end
  end
end
