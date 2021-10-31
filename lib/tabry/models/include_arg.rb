module Tabry
  module Models
    class IncludeArg
      attr_reader :include_name, :_root

      def initialize(raw:, root:)
        @include_name = raw['include']
        @_root = root
      end
    end
  end
end
