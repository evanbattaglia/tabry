module Tabry
  module Models
    class IncludeSub
      attr_reader :include_name

      def initialize(include_name)
        @include_name = include_name
      end
    end
  end
end
