# frozen_string_literal: true

module Tabry
  module Models
    class IncludeSub
      attr_reader :include_name, :_root

      def initialize(raw:, root:)
        @include_name = raw["include"]
        @_root = root
      end

      def flatten
        _root.arg_includes[include_name].subs.flatten
      end
    end
  end
end
