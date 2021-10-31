require_relative 'option_base'

module Tabry
  module Models
    class IncludeOption < OptionBase
      attr_reader :include_name, :_root

      def options(token)
        flatten.options(token)
      end

      def flatten
        _root.option_includes[value].flatten
      end
    end
  end
end
