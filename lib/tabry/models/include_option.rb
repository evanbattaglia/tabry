require_relative 'option_base'

module Tabry
  module Models
    class IncludeOption < OptionBase
      attr_reader :include_name, :_root

      def options(raw:, root:)
        @include_name = raw
        @_root = root
      end
    end
  end
end
